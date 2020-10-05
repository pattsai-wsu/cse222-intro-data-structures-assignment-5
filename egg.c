#include <stdio.h>

/*
egg function - takes in two integers and returns the minumum number of drops to test for the critical floor given x amount of eggs dropped from y amount of floors.
this function uses recurrsion and dynamic programming.

it took me a while to get the dynamic programming part of the function. I look for '\0', however, it also worked when I set it to 0. I got a warning if my argument tested against NULL. anyway, it seems to work correctly on the linux server now.
*/

#include "header.h"

int save[500][500]={0};                 // save[f][e] - basically a global variable for this function

int egg(int floors, int eggs) {
  int y=1,temp;

    if (save[floors][eggs]!='\0') {     // this is dynamic processing, searches if a value exists in
      return (save[floors][eggs]);      // in the save array, if it does it returns it
    }
    else if (floors==0) {               // base case for 0 floors 
      return 0;
    }
    else if (floors==1) {               // base case for 1 floor
      return 1;
    }
    else if (eggs==1) {                 // base case for 1 egg
      return (floors);
    }
    else {
    save[floors][eggs]=floors;                  // worst case default value

      while (y<=floors) {
        int egg_break=egg(y-1,eggs-1);          // what happens if the egg breaks
        int egg_not_break=egg(floors-y,eggs);   // what happens if the egg does not break

        temp=(1+max(egg_break,egg_not_break));  // 
          if (temp<save[floors][eggs]) {        // if returned value is less than the worst case value
             save[floors][eggs]=temp;           // save it as the new value for the array element
          }
      y++;
      }
    }

return(save[floors][eggs]);
}

