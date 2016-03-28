/*
 * Stop.h
 *
 *  Created on: Mar 28, 2016
 *      Author: Alex's
 */

#ifndef SRC_COMMANDS_STOP_H_
#define SRC_COMMANDS_STOP_H_

#include "../CommandBase.h"
#include "WPILib.h"

class Stop: public CommandBase
{
public:
	Stop();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};




#endif /* SRC_COMMANDS_STOP_H_ */
