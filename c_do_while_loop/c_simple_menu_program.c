#include <stdio.h>

int main()
{
    int menu;

    printf("1. Say Hello\n2. Say Goodbye\n3. Exit\n\n");

    do
    {
        printf("Choose a menu: ");
        scanf("%d", &menu);

        if (menu == 1)
        {
            printf("Hello!\n");
        }
        else if (menu == 2)
        {
            printf("Goodbye!\n");
        }

        else if (menu == 3)
        {
            printf("*Exits*\n");
            break;
        }

    } while (menu > 0);

    return 0;
}