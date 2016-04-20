#include "dork.h"
#include "game.h"

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
    int steps = obj.getSteps();
    for (int i = steps; i<(steps+roll); i++){
      string event = events(int a, int b);//initialized event function, inputs can change
      printw("%s", event.c_str);
    updateInfo(obj);
    }
  else if (n) {
    save(); //save function here
  else {
    printw("Invalid response");
}

