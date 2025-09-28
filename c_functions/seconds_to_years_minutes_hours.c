#include <stdio.h>

void convertSeconds(int totalSeconds)
{ // let's say my total seconds is 3750 seconds

  int hours = totalSeconds / 3600;        // hr = 3750/3600 = 1 r150
  int minutes = totalSeconds % 3600 / 60; // mins = 150/60 = 2 r30
  int seconds = totalSeconds % 3600 % 60;

  printf("%d hour, %d minutes, %d seconds", hours, minutes, seconds);
}

int main()
{

  convertSeconds(3671);

  return 0;
}