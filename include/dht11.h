/*
 * dht11.h
 *
 *  Created on: Dec 10, 2022
 *      Author: Kyung
 */

#ifndef DHT11_H_
#define DHT11_H_

#include "S32K144.h"
#include "device_registers.h"

// DHT11 ���� �Լ�, ����
void DHT_PORT_init();
void get_dht11();
void request();
int response();
uint8_t receive_data();
uint8_t DHT11_data = 0,hum_int,hum_dec,tem_int,tem_dec,parity;


#endif /* DHT11_H_ */