#include <stdio.h>

int main()
{
    int pin, correctPIN = 1109, counter = 0;

    do
    {
        printf("Enter PIN: ");
        scanf("%d", &pin);

        if (pin == correctPIN)
        {
            printf("Access Granted!\n");
            break;
        }
        else
        {
            printf("Access Denied!\n");
            counter++;

            if (counter == 5)
            {
                printf("Wait for 5 minutes to enter PIN later.\n");
                printf("...");
                break;
            }
        }

    } while (pin);

    return 0;
}