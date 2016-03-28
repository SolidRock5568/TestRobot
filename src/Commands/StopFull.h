/*
 * Stop.h
 *
 *  Created on: Mar 28, 2016
 *      Author: Alex's
 */

#ifndef SRC_COMMANDS_STOPFULL_H_
#define SRC_COMMANDS_STOPFULL_H_

#include "../CommandBase.h"
#include "WPILib.h"

class StopFull: public CommandBase
{
public:
	StopFull();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};




#endif /* SRC_COMMANDS_STOPFULL_H_ */
