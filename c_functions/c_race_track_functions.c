#include <stdio.h>

void findTrack(int seconds)
{
    if (seconds <= 30)
    {
        printf("The car is on the Concrete track.");
    }
    else if (seconds <= 77)
    {
        printf("The car is on the Mud track.");
    }
    else if (seconds <= 111)
    {
        printf("The car is on the Sand track");
    }
    else if (seconds <= 150)
    {
        printf("The car is on the Asphalt track.");
    }
    else
    {
        printf("RACE FINISHED!!!");
    }
}

int main()
{

    findTrack(160);

    return 0;
}