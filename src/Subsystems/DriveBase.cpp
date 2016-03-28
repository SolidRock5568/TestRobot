#include "DriveBase.h"
#include "../RobotMap.h"

DriveBase::DriveBase() : Subsystem("DriveBase")
{
	// Start Define DriveBase Motors
	rightMotor = new Victor(RIGHTDRIVEMOTOR),
	leftMotor = new Victor(LEFTDRIVEMOTOR),
	// End Define DriveBase Motors

	// Start Define DriveBase Encoders
	leftEncoder = new Encoder(DriveWheelEncoderPort1, DriveWheelEncoderPort2, false, Encoder::k4X);
	// End Define DriveBase Encoders
	{
		// Start Encoder Methods
			// Start leftEncoder
		leftEncoder->SetSamplesToAverage(5);
		leftEncoder->SetDistancePerPulse(1.0 / 360 * 2.0 * 3.1415);
		leftEncoder->SetMinRate(1.0);
			// End leftEncoder
		// End Encoder Methods
	}
}

void DriveBase::Stop()
{

}



