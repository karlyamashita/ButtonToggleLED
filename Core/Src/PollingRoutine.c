/*
 * PollingRoutine.c
 *
 *  Created on: May 7, 2021
 *      Author: codek
 */

#include "main.h"
#include "PollingRoutine.h"

extern osMessageQueueId_t msgQueueButtonStatusHandle;

void PollingInit(void){

}

void PollingRoutine(void){
	MSGQUEUE_OBJ_t msg;
	osStatus status;

	status = osMessageQueueGet(msgQueueButtonStatusHandle, &msg, 0U, 0U);
	if(status == osOK){
		if(msg.Idx == 1){
			ToggleLED();
		}
		else if(msg.Idx == 2){
			UserLED(msg.Buf[0]);
		}
		else if(msg.Idx == 3){
			SetRedLED(msg.Buf[0]);
		}
	}
}

void ToggleLED(void){
	HAL_GPIO_TogglePin(RENDER_TIME2_GPIO_Port, RENDER_TIME2_Pin);
}

void SetRedLED(bool status){
	HAL_GPIO_WritePin(VSYNC_FREQ2_GPIO_Port, VSYNC_FREQ2_Pin, status);
}

void UserLED(bool status){
	HAL_GPIO_WritePin(UserLED_GPIO_Port, UserLED_Pin, status);
}

