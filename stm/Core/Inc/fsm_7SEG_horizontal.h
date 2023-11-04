/*
 * fsm_7SEG_horizontal.h
 *
 *  Created on: Oct 3, 2023
 *      Author: acer
 */

#ifndef INC_FSM_7SEG_HORIZONTAL_H_
#define INC_FSM_7SEG_HORIZONTAL_H_
//states for fsm_7SEG_horizontal
#define display_countDown_horizontal		11
#define display_mode02				12
#define display_mode03				13
#define display_mode04				14

extern int status_7SEG_horizontal;

void fsm_7SEG_horizontal_run();

#endif /* INC_FSM_7SEG_horizontal_H_ */
