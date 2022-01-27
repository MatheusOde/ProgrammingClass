#include <stdio.h>
#include <math.h>

int main()
{
    //These are the variables
    int value;
    int valueSquared;
    int difference;
    char string[100];

    //This is the first question
    printf("Hello, what's your first name?\n");
    //This is waiting for input to put on the string
    scanf("%s", string);

    // This is the second question with the name in the middle
    printf("Hi, %s, what's your age?\n", string);
    //This is waiting for input to put on the value. Ignore the & for now
    scanf("%d", &value);

    //This is a equation to take the difference
    valueSquared = pow(value - 15, 2);
    difference = sqrt(valueSquared);

    printf("Cool, we're %d years apart\n", difference);

    //This is just to return the end
    return 0;
}