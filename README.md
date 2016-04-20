#include "dork.h"
#include "game.h"

  int rollDice (int roll)
  {
    roll = rand() % 6 + 1;
    return roll;
  }

  void updateInfo (Display in_obj, int roll)
  {
    int steps = in_obj.GetSteps();
    int energy = in_obj.GetEnergy();
    steps= steps + roll;
    energy--;
    SetSteps(steps);
    SetEngery(energy);
  }
void play(Display obj) {
  while (){
  printw( "Please enter a command: (roll/quit/save)")
  string x;
  getstr(x);
  if (x==roll){
    int roll;
    int rollDice(roll);
    updateInfo(obj, roll);
    }
  else if (x==save) {
    Save(); //save function here
  }
  else if (x==quit){
    printw("All unsaved data will be lost. Are you sure? (Y/N)");
    getstr(x);
    if(x==(Y||y))
      break;
  }
  else {
    printf("Invalid response");
}
}
}
