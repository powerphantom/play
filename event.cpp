#include "dork.h"
#include "game.h"

string events(Display& in_obj, int a, int b){

ifstream eventsfile("events.txt");
if (!eventsfile)
  printw("Could not complete operation!");
else
  for (string line; getline(eventsfile, line);){
    scanw(line);
    size_t found = line.find(a,b);
    if (found != string::npos){
      //adds/subtracts energy, steps, etc
      return line;
    }
  }

    //else return null?
}
