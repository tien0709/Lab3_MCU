/*
 * fsm_7SEG_vertical.h
 *
 *  Created on: Oct 3, 2023
 *      Author: acer
 */

#ifndef INC_FSM_7SEG_VERTICAL_H_
#define INC_FSM_7SEG_VERTICAL_H_
//states for fsm_7SEG_vertical
#define display_countDown_vertical	15
#define display_time_value			16

extern int status_7SEG_vertical;

void fsm_7SEG_vertical_run();

#endif /* INC_FSM_7SEG_VERTICAL_H_ */
