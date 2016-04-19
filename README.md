#include "dork.h"

  int rollDice (int roll)
  {
    roll = rand() % 6 + 1;
    return roll;
  }

  void updateInfo (Display& in_obj)
  {
    int steps = in_obj::GetSteps();
    int energy = in_obj::GetEnergy();
    steps += roll;
    energy --;
  }
void play(Display& obj) {
  if (y){
    int roll;
    int rollDice(roll);
    updateInfo(obj);
    }
  else if (n) {
    save(); //save function here
  else {
    printf("Invalid response");
}
