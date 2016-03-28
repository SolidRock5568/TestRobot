/*
 * DriveBase.h
 *
 *  Created on: Mar 22, 2016
 *      Author: Alex's
 */

#ifndef SRC_SUBSYSTEMS_DRIVEBASE_H_
#define SRC_SUBSYSTEMS_DRIVEBASE_H_

#include "Commands/Subsystem.h"
#include "WPILib.h"

class DriveBase: public Subsystem{

public:

	Victor * rightMotor;
	Victor * leftMotor;


	Encoder * leftEncoder;

	DriveBase();


	};



#endif /* SRC_SUBSYSTEMS_DRIVEBASE_H_ */
