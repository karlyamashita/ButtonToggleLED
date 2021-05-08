#include <gui/model/Model.hpp>
#include <gui/model/ModelListener.hpp>
#include "main.h"

extern osMessageQueueId_t msgQueueButtonStatusHandle;

Model::Model() : modelListener(0)
{

}

void Model::tick()
{

}

void Model::buttonClicked(){
	MSGQUEUE_OBJ_t msg;

	msg.Idx = 1;

	osMessageQueuePut(msgQueueButtonStatusHandle, &msg, 0U, 0U);
}

void Model::toggleButtonClicked(bool buttonStatus){
	MSGQUEUE_OBJ_t msg;

	msg.Idx = 2;
	msg.Buf[0] = buttonStatus;
	osMessageQueuePut(msgQueueButtonStatusHandle, &msg, 0U, 0U);
}

void Model::flexButtonClicked(bool buttonStatus){
	MSGQUEUE_OBJ_t msg;

	msg.Idx = 3;
	msg.Buf[0] = buttonStatus;
	osMessageQueuePut(msgQueueButtonStatusHandle, &msg, 0U, 0U);
}
