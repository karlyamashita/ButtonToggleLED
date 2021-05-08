/*
 * PollingRoutine.h
 *
 *  Created on: May 7, 2021
 *      Author: codek
 */

#ifndef APPLICATION_USER_POLLINGROUTINE_H_
#define APPLICATION_USER_POLLINGROUTINE_H_


typedef struct {                                // object data type
  uint8_t Buf[32];
  uint8_t Idx;
} MSGQUEUE_OBJ_t;


void PollingInit(void);
void PollingRoutine(void);
void ToggleLED(void);
void SetRedLED(bool status);
void UserLED(bool status);

#endif /* APPLICATION_USER_POLLINGROUTINE_H_ */
