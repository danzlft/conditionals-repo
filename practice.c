#include <stdio.h>

int main()
{

    //1. Write a C program that accepts two integers and check whether they are equal or not.

    //Prompt user for n
    //IF n1 is equal to n2, print out as equal values
    //ELSE print as unequal values

    int int1, int2;

    printf("\nEnter the two values to compare: ");
    scanf("%d %d", &int1, &int2);

    if(int1 == int2){
        printf("The values of %d and %d are equal.", int1, int2);
    }
    else{
        printf("The values of %d and %d are not equal.", int1, int2);
    }


    return 0;
}