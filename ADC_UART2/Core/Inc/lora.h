/*
 * lora.h
 *
 *  Created on: Jun 7, 2022
 *      Author: Jaap Sontrop
 *     Project: Alten PinPoach
 *
 */

#ifndef INC_LORA_H_
#define INC_LORA_H_

#include "main.h"

#define NODE_ID	"003"
#define	LORA_USART	&hlpuart1
#define LORABUFSIZE  128       // lora tx buffer size

extern UART_HandleTypeDef hlpuart1;
extern UART_HandleTypeDef huart2;

void lora_callback();
int lora_init();
int lora_send(char*);
int lora_send_ping();
int lora_send_gps();


#endif /* INC_LORA_H_ */
