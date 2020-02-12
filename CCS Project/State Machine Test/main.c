#include <msp430.h> 
#include "fsm.h"


extern uint8_t  ActState;

/**
 * main.c
 */
int main(void)
{
    WDTCTL = WDTPW | WDTHOLD;       // stop watchdog timer


    FSM_Init ();        // Initilaisierung des ActState
    FSM_New ();         // Spieler legt neuen Parametersatz an und gibt Name 1 ein
    FSM_CR ();          // Name 1 wird gesetzt und Name 2 wird eingegeben
    FSM_CR ();          // Name 2 wird gesetzt und Game Mode wird eingegeben
    FSM_CR ();          // Game Mode gesetzt
    FSM_CR ();          // Parametersatz wird geladen
    FSM_Ready ();       // beide Spieler sind bereit,Countdown wirrd gezählt
    FSM_Countdown0s (); // Spiel beginnt
    FSM_Win ();         // Es gibt einen Gewinner, Ergebnis speichert in ParamSet RAM
    FSM_ESC();          // Es wird kein neues spiel initiiert, gehe auf Anfangszustand (Init)
    FSM_Voltagedrop (); // Spannungsabfall erkannt, Paramset gespeichert in Flash


    return 0;
}
