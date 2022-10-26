#include <stdio.h>
int main()
{
    int input;
    printf("Multiple Table of: ");
    scanf("%d", &input);
    int upTo;
    printf("Multiples of %d until: ",input);
    scanf("%d", &upTo);
    
    for (int i = 1; i <= upTo; i++)
    {
        int answer = input * i;
        printf("%d * %d = %d\n", i, input, answer);
    }
    

    return 0;
}