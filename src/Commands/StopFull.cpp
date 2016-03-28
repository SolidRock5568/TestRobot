/*
 * Stop.cpp
 *
 *  Created on: Mar 28, 2016
 *      Author: Alex's
 */




#include "StopFull.h"

StopFull::StopFull()
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
}

// Called just before this Command runs the first time
void StopFull::Initialize()
{

}

// Called repeatedly when this Command is scheduled to run
void StopFull::Execute()
{

}

// Make this return true when this Command no longer needs to run execute()
bool StopFull::IsFinished()
{
	return false;
}

// Called once after isFinished returns true
void StopFull::End()
{

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void StopFull::Interrupted()
{

}
