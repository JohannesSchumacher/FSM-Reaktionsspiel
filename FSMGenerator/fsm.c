//****************************************************************************//
//  MSP430 state machine
//  fsm.c
//
//  Describtion:
//    A simple state machine for the MSP430
//    Do not change code in here!!!
//
//  Generated with Excel Table
//  Date:  02/11/2020        Time:  21:59:27
//
//****************************************************************************//

#include <stdint.h>
#include <stdio.h>
#include "fsm.h"

//****************************************************************************//
// Global variables
//****************************************************************************//
uint8_t  ActState;

const FSM_STATE_TABLE StateTable [NR_STATES][NR_EVENTS] =
{
  FSM_initParamSet, LOAD_PARAMSET, NULL, WAIT, NULL, BUILD_PARAMSET, NULL, WAIT, NULL, WAIT, NULL, WAIT, FSM_saveParamFlash, SAVE_FLASH, 
  FSM_setPlayer, SET_PLAYER1, NULL, WAIT, NULL, BUILD_PARAMSET, NULL, BUILD_PARAMSET, NULL, BUILD_PARAMSET, NULL, BUILD_PARAMSET, FSM_saveParamFlash, SAVE_FLASH, 
  FSM_setPlayer, SET_PLAYER2, NULL, BUILD_PARAMSET, NULL, SET_PLAYER1, NULL, SET_PLAYER1, NULL, SET_PLAYER1, NULL, SET_PLAYER1, FSM_saveParamFlash, SAVE_FLASH, 
  FSM_setMode, SET_GAMEMODE, FSM_setPlayer, SET_PLAYER1, NULL, SET_PLAYER2, NULL, SET_PLAYER2, NULL, SET_PLAYER2, NULL, SET_PLAYER2, FSM_saveParamFlash, SAVE_FLASH, 
  FSM_initParamSet, LOAD_PARAMSET, FSM_setPlayer, SET_PLAYER2, NULL, SET_GAMEMODE, NULL, SET_GAMEMODE, NULL, SET_GAMEMODE, NULL, SET_GAMEMODE, FSM_saveParamFlash, SAVE_FLASH, 
  NULL, LOAD_PARAMSET, NULL, LOAD_PARAMSET, NULL, LOAD_PARAMSET, FSM_initGame, COUNTDOWN, NULL, LOAD_PARAMSET, NULL, LOAD_PARAMSET, FSM_saveParamFlash, SAVE_FLASH, 
  NULL, COUNTDOWN, NULL, COUNTDOWN, NULL, COUNTDOWN, NULL, COUNTDOWN, NULL, PLAY, NULL, COUNTDOWN, FSM_saveParamFlash, SAVE_FLASH, 
  NULL, PLAY, NULL, PLAY, NULL, PLAY, NULL, PLAY, NULL, PLAY, FSM_saveParamRAM, SAVE_RAM, FSM_saveParamFlash, SAVE_FLASH, 
  FSM_saveParamFlash, LOAD_PARAMSET, FSM_saveParamFlash, WAIT, NULL, SAVE_RAM, NULL, SAVE_RAM, NULL, SAVE_RAM, NULL, SAVE_RAM, FSM_saveParamFlash, SAVE_FLASH, 
  NULL, SAVE_FLASH, NULL, SAVE_FLASH, NULL, SAVE_FLASH, NULL, SAVE_FLASH, NULL, SAVE_FLASH, NULL, SAVE_FLASH, FSM_init, WAIT
};


//****************************************************************************//
// Initialize state machine
//****************************************************************************//
void FSM_Init (void)
{
  ActState = WAIT;
}


//****************************************************************************//
// Event function "CR"
//****************************************************************************//
void FSM_CR (void)
{
  if (StateTable[ActState][CR].ptrFunct != NULL)
    StateTable[ActState][CR].ptrFunct();

  ActState = StateTable[ActState][CR].NextState;
}


//****************************************************************************//
// Event function "ESC"
//****************************************************************************//
void FSM_ESC (void)
{
  if (StateTable[ActState][ESC].ptrFunct != NULL)
    StateTable[ActState][ESC].ptrFunct();

  ActState = StateTable[ActState][ESC].NextState;
}


//****************************************************************************//
// Event function "N"
//****************************************************************************//
void FSM_N (void)
{
  if (StateTable[ActState][N].ptrFunct != NULL)
    StateTable[ActState][N].ptrFunct();

  ActState = StateTable[ActState][N].NextState;
}


//****************************************************************************//
// Event function "Ready"
//****************************************************************************//
void FSM_Ready (void)
{
  if (StateTable[ActState][READY].ptrFunct != NULL)
    StateTable[ActState][READY].ptrFunct();

  ActState = StateTable[ActState][READY].NextState;
}


//****************************************************************************//
// Event function "Countdown0s"
//****************************************************************************//
void FSM_Countdown0s (void)
{
  if (StateTable[ActState][COUNTDOWN0S].ptrFunct != NULL)
    StateTable[ActState][COUNTDOWN0S].ptrFunct();

  ActState = StateTable[ActState][COUNTDOWN0S].NextState;
}


//****************************************************************************//
// Event function "Win"
//****************************************************************************//
void FSM_Win (void)
{
  if (StateTable[ActState][WIN].ptrFunct != NULL)
    StateTable[ActState][WIN].ptrFunct();

  ActState = StateTable[ActState][WIN].NextState;
}


//****************************************************************************//
// Event function "Voltagedrop"
//****************************************************************************//
void FSM_Voltagedrop (void)
{
  if (StateTable[ActState][VOLTAGEDROP].ptrFunct != NULL)
    StateTable[ActState][VOLTAGEDROP].ptrFunct();

  ActState = StateTable[ActState][VOLTAGEDROP].NextState;
}


//****************************************************************************//

