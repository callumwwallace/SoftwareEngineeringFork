#include <stdio.h>

int main()
{
    //Create a variable x
    int x = 0;
    int y = 0;
    //Prompt user
    printf("Enter your age\n");

    //Read keyboard response - look for an integer
    int found = scanf_s("%d", &x);

    printf("Enter your age\n");

    //Read keyboard response - look for an integer
    int found2 = scanf_s("%d", &y);

    //Display how many items were matched
    printf("Matched %d items input1\n", found + found2);

    //Display what was typed in
    printf("x = %d\n", x);
    printf("y = %d\n", y);
    printf("avg = %d\n", ((x + y) / (found + found2)));
}


