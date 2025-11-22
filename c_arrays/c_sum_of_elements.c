#include <stdio.h>

int main()
{
    int num, sum = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &num);

    int elements[num];

    if (num == 0)
    {
        printf("Sum of elements: %d", num);
        return 0;
    }

    if (num == 1)
    {
        printf("Enter element: ");
    }
    else
    {
        printf("Enter the elements:\n");
    }

    for (int i = 1; i <= num; i++)
    {
        scanf("%d", &elements[i]);
        sum += elements[i];
    }

    printf("Sum of elements: %d", sum);

    return 0;
}