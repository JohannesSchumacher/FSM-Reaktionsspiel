//****************************************************************************//
//  MSP430 state machine
//  fsm.h
//
//  Describtion:
//    A simple state machine for the MSP430
//
//  Generated with Excel Table
//  Date:  02/11/2020        Time:  21:56:52
//
//****************************************************************************//

#ifndef FSM_H
#define FSM_H

#include <stdint.h>
#include <stdio.h>

//****************************************************************************//
// State table typedef
//****************************************************************************//
typedef struct
{
  void (*ptrFunct) (void);
  uint8_t NextState;
} FSM_STATE_TABLE;

extern uint8_t ActState;


#define NR_EVENTS 7
#define CR  0
#define ESC  1
#define N  2
#define READY  3
#define COUNTDOWN0S  4
#define WIN  5
#define VOLTAGEDROP  6

#define NR_STATES 10
#define WAIT  0
#define BUILD_PARAMSET  1
#define SET_PLAYER1  2
#define SET_PLAYER2  3
#define SET_GAMEMODE  4
#define LOAD_PARAMSET  5
#define COUNTDOWN  6
#define PLAY  7
#define SAVE_RAM  8
#define SAVE_FLASH  9


//****************************************************************************//
// Function prototypes
//****************************************************************************//
// Initialize state machine
void FSM_Init (void);

// Event function "CR"
void FSM_CR (void);

// Event function "ESC"
void FSM_ESC (void);

// Event function "N"
void FSM_N (void);

// Event function "Ready"
void FSM_Ready (void);

// Event function "Countdown0s"
void FSM_Countdown0s (void);

// Event function "Win"
void FSM_Win (void);

// Event function "Voltagedrop"
void FSM_Voltagedrop (void);

// Transition function "initParamSet"
void FSM_initParamSet (void);

// Transition function "saveParamFlash"
void FSM_saveParamFlash (void);

// Transition function "setPlayer"
void FSM_setPlayer (void);

// Transition function "setMode"
void FSM_setMode (void);

// Transition function "initGame"
void FSM_initGame (void);

// Transition function "saveParamRAM"
void FSM_saveParamRAM (void);

// Transition function "init"
void FSM_init (void);


//****************************************************************************//

#endif /* FSM_H */

//****************************************************************************//

