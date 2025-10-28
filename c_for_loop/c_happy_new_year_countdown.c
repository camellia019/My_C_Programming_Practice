#include <stdio.h>
#include <windows.h>

int main()
{

    for (int countDown = 10; countDown >= 0; countDown--)
    {
        Sleep(1000);
        printf("%d\n", countDown);
    }

    printf("HAPPY NEW YEAR!!!");

    return 0;
}