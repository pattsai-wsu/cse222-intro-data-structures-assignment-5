#include <stdio.h>

/*
I originally used this code for the PlatePA4 program. It's use requires the intake of two integers, and it returns the greater value of the two.

I followed the code found on codeforwin.org/2016/02/c-program-to-find-maximum-and-minimum-using-functions.html
*/

#include "header.h"

int max(int num1, int num2) {
  return (num1>num2) ? num1 : num2;
}

