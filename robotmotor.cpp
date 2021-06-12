/*
 *  robotmotor.cpp
 *  
 *
 *  Created by Sergio Mac on 10/28/15.
 *  Copyright 2015 __MyCompanyName__. All rights reserved.
 *
 */


#define LEFT_AXIS       0
#define RIGHT_AXIS      1
#define Y_TRACK         130 // sets how close the robot gets to the object before stopping

#define X_CENTER        (320/2)
#define MOTOR_MAX       500
#define MOTOR_MIN       -500

class MotorLoop
{
public:
	MotorLoop(uint32_t pgain, uint32_t dgain);
	
	int32_t update(int32_t error);
	
private:
	
	int32_t m_prevError;
	int32_t m_pgain;
	int32_t m_dgain;
};

MotorLoop::MotorLoop(uint32_t pgain, uint32_t dgain)
{
	m_pgain = pgain;
	m_dgain = dgain;
	m_prevError = 0x80000000; // to indicate that it's never been set
}

// control loop update!
int32_t MotorLoop::update(int32_t error)
{
	int32_t vel;
	
	if (m_prevError!=0x80000000)
	{
		vel = (error*m_pgain + (error - m_prevError)*m_dgain)/1000; // calc proportional-derivative
																	// saturation
		if (vel>MOTOR_MAX)
			vel = MOTOR_MAX;
		else if (vel<MOTOR_MIN)
			vel = MOTOR_MIN;
	}
	m_prevError = error;
	
	return vel;
}

// Map axes!  go from translational/rotational to left/right wheel space
void axisMap(int32_t in[], int32_t out[])
{
	out[0] = (in[0] - in[1])/2;
	out[1] = (in[0] + in[1])/2;
}

// calculate left and right wheel commands based on x, y value of blob
// just call this over and over again and robot will chase ball
void combine(uint32_t x, uint32_t y)
{
	int32_t xError, yError, axesIn[2], axesOut[2];
	
	xError = X_CENTER-x;
	yError = Y_TRACK-y;
	
	axesIn[0] = g_transLoop.update(yError);
	axesIn[1] = g_rotLoop.update(xError);
	
	axisMap(axesIn, axesOut);
	
	setMotorVoltage(LEFT_AXIS, axesOut[0]);
	setMotorVoltage(RIGHT_AXIS, axesOut[1]);
}

static MotorLoop g_transLoop(500, 800);
static MotorLoop g_rotLoop(700, 900);

