#include <stdio.h>

int main()
{
    int i, sum = 0;
    printf("Numbers between 100 and 200, divisible by 9 : \n");
    for (i = 101; i < 118; i++)
    {
        if (i % 9 == 0)
        {
            printf("% 5d", i);
            sum = sum + i;
        }
    }
    printf("\n\nThe sum : %d \n", sum);

    return 0;
}

// output:
// Numbers between 100 and 200, divisible by 9 :
//   108  117  126  135  144  153  162  171  180  189  198

// The sum : 1683
