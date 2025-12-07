#include <stdio.h>

void ascendingOrder(int num, int array[])
{

    for (int i = 0; i < num - 1; i++)
    {

        for (int j = 0; j < num - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}
void displayAscending(int num, int array[])
{

    for (int i = 0; i < num; i++)
    {
        printf("%d ", array[i]);
    }
}

void descendingOrder(int num, int array[])
{

    for (int i = 0; i < num - 1; i++)
    {

        for (int j = 0; j < num - i - 1; j++)
        {
            if (array[j] < array[j + 1])
            {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

void displayDescending(int num, int array[])
{

    for (int i = 0; i < num; i++)
    {
        printf("%d ", array[i]);
    }
}

int main()
{
    int num;

    printf("Enter the number of elements: ");
    scanf("%d", &num);

    printf("Enter the elements:\n");
    int array[num];

    for (int i = 0; i < num; i++)
    {
        scanf("%d", &array[i]);
    }

    printf("Sorted array in ascending order:\n");
    ascendingOrder(num, array);
    displayAscending(num, array);
    printf("\nSorted array in descending order:\n");
    descendingOrder(num, array);
    displayDescending(num, array);

    return 0;
}