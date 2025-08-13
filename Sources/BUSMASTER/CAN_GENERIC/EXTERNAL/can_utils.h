/*
 * can_utils.h
 *
 *  Created on: 2023. ápr. 9.
 *      Author: kaszonyl
 */

#ifndef CAN_UTILS_H_
#define CAN_UTILS_H_


typedef struct{
	unsigned int id;        // 11/29 Bit-
    int isExtended; // true, for (29 Bit) Frame Standard/Extended
    int isRtr;    // true, for remote request
    unsigned char dlc;      // Data length (0..8)
    unsigned char cluster;
    //unsigned char data[64];
    unsigned char data[8];
    unsigned long timeStamp;
    int isCanfd;
} MY_STCAN_MSG_t;



#endif /* CAN_UTILS_H_ */
