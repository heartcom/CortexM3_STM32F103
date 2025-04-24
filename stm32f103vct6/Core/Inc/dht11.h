/*
 * dht11.h
 *
 *  Created on: 2024. 7. 31.
 *      Author: user
 */

#ifndef INC_DHT11_H_
#define INC_DHT11_H_


#include "main.h"

#define DHT11_PORT GPIOA
#define DHT11_PIN GPIO_PIN_3
typedef struct
{
   float Temperature;
   float Humidity;
}DHT_DataTypedef;

void DHT_GetData (DHT_DataTypedef *DHT_Data);




#endif /* INC_DHT11_H_ */
