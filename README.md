#include "dork.h"

int roll;

int rolllDice ()
{
  roll = rand() % 7 + 1;
  return roll;
}

void updateInfo ()
{
  steps += roll;
  energy --; //load function needed
}

void loadEvent(); //loads event from events.txt
