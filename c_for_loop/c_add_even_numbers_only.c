#include <stdio.h>

int main()
{
    int elements, sum = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &elements);

    int num[elements];

    printf("Enter %d numbers:\n", elements);

    for (int i = 0; i < elements; i++)
    {

        scanf("%d", &num[i]);

        if (num[i] % 2 == 0)
        {
            sum += num[i];
            if (sum > 100)
            {
                break;
            }
        }
    }

    printf("Sum of even numbers: %d", sum);

    return 0;
}