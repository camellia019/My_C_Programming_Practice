#include <stdio.h>
#include <math.h>

int main()
{

    int n, digit = 0, first = 0, last, exponent, temporary, swappedNum;
    int origNum, copyN;

    printf("Enter a value: ");
    scanf("%d", &n);

    origNum = n; // STORE
    copyN = n;   // another copy

    last = n % 10; // GET LAST NUMBER

    // COUNT HOW MANY DIGITS
    while (0 < n)
    {
        digit++;
        n /= 10;
    }

    // GET FIRST NUMBER
    first = copyN / pow(10, digit - 1);

    // SWAPPING NUMBERS
    swappedNum = ((last * pow(10, digit - 1)) + (copyN % (int)pow(10, digit - 1)) - last) + first;

    printf("Swap of %d is %d.", origNum, swappedNum);

    return 0;
}