#include <stdio.h>

int main()
{

    //1. Write a C program that accepts two integers and check whether they are equal or not.

    //Prompt user for n
    //IF n1 is equal to n2, print out as equal values
    //ELSE print as unequal values

    // int int1, int2;

    // printf("\nEnter the two values to compare: ");
    // scanf("%d %d", &int1, &int2);

    // if(int1 == int2){
    //     printf("The values of %d and %d are equal.", int1, int2);
    // }
    // else{
    //     printf("The values of %d and %d are not equal.", int1, int2);
    // }


    //2. Write a C program to check whether the given number is even or odd.

    // Prompt user for input 
    // IF the value of n % 2 == 0, then print it as an even num
    // ELSE, print it out as an odd num

    int i, n;

    printf("Input a the value: ");
    scanf("%d", &n);

    i = n % 2;
    if(i == 0){
        printf("%d is an even integer!", n);
    }
    else{
        printf("%d is an odd integer...", n);
    }

    return 0;
}