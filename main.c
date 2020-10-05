#include <stdio.h>

/*
NAME: Patrick Tsai
CLASS: CSE 222 M-F 10 AM
DUE: 03/09/2020 8 AM

SYNOPSIS: This program, eggtest, askes the user to enter an amount of floors, then asks the user to enter a number of eggs
the program then calculates the minumum number of drops needed to test which is the greatest floor you can drop the egg
without it breaking. This program uses recurrsion and dynamic programming.  
*/

#include "header.h"

int main() {
  char usrIn[120],badIn[120];
  int floors,eggs,fewestNum,returnVal;

  // ask user for floors
  printf("# of floors: ");
  fgets(usrIn,120,stdin);
  returnVal=sscanf(usrIn,"%d%s",&floors,badIn);
  if (returnVal!=1) {
    printf("ERROR: input\n");
    exit(1);
  }

  // ask user for eggs
  printf("# of eggs: ");
  fgets(usrIn,120,stdin);
  returnVal=sscanf(usrIn,"%d%s",&eggs,badIn);
  if (returnVal!=1) {
    printf("ERROR: input\n");
    exit(1);
  }

  //print out the returned number from eggtest
  fewestNum=egg(floors,eggs);
  printf("Fewest # of drops = %d\n", fewestNum);

return 0;
}
