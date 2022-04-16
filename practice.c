#include <stdio.h>

int main()
{

    // 1. Write a C program that accepts two integers and check whether they are equal or not.

    // Prompt user for n
    // IF n1 is equal to n2, print out as equal values
    // ELSE print as unequal values

    int int1, int2;

    printf("\nEnter the two values to compare: ");
    scanf("%d %d", &int1, &int2);

    if (int1 == int2)
    {
        printf("The values of %d and %d are equal.", int1, int2);
    }
    else
    {
        printf("The values of %d and %d are not equal.", int1, int2);
    }

    // 2. Write a C program to check whether the given number is even or odd.

    // Prompt user for input
    // IF the value of n % 2 == 0, then print it as an even num
    // ELSE, print it out as an odd num

    int i, n;

    printf("Input a the value: ");
    scanf("%d", &n);

    i = n % 2;
    if (i == 0)
    {
        printf("%d is an even integer!", n);
    }
    else
    {
        printf("%d is an odd integer...", n);
    }

    // 3. Write a C program to check whether the given value is positive or not

    // Prompt user for input
    int n;

    printf("\nInput a value: ");
    scanf("%d", &n);

    // IF n is >= 0, print value as a positive num 
    if (n >= 0)
    {
        printf("%d is a positive number", n);
    }
    // ELSE print it as negative else
    {
        printf("%d is a negative number.", n);
    }

    // 4. Write a C program to find whether the given year is as leap year or not
    // Prompt user for input year
    // IF n subtracted by 4 got a remainder of 1, then print it as a common year
    // ELSE, print it as a common year

    int inputYear;

    printf("\nInput a year: ");
    scanf("%d", &inputYear);

    if ((inputYear % 4) == 0)
    {
        printf("%d is a leap year!", inputYear);
    }
    else if ((inputYear % 100) == 0)
    {
        printf("%d is a leap year!", inputYear);
    }
    else if ((inputYear % 400) == 0)
    {
        printf("%d is a leap year!", inputYear);
    }
    else
    {
        printf("%d is a common year.", inputYear);
    }

    /* 5. Write a C program to read the age of a candidate and
    determine whether it is eligible for casting its own vote.*/

    // Prompt user for age
    // IF user's age > 18, then accept its eligibility
    // ELSE, decline user's eligibility for voting.

    int age;
    printf("\n");
    printf("Enter your age: ");
    scanf("%d", &age);

    if (age >= 18)
    {
        printf("Congratulations! You are eligible to vote!");
    }
    else
    {
        printf("You are not eligible to vote...\n");
        printf("You would be eligible to vote after turning 18.", age);
    }

    /* 6. Write a C program to read the value of an integer m and display the
    value of n is 1 when m is larger than 0, 0 when m is 0 and -1 when m is less than 0 */

    // Prompt user for input for m
    // n == 1 when the value of m is larger than 0
    // n == 0 when the value of m == 0
    // n == -1 when the value of m < 0

    int m, n;

    printf("Input a value: ");
    scanf("%d", &m);

    if (m > 0)
    {
        printf("The value of m = %d\n", m);
        printf("The value of n = 1");
    }
    else if (m == 0)
    {
        printf("The value of m = %d\n", m);
        printf("The value of n = 0");
    }
    else
    {
        printf("The value of m = %d\n", m);
        printf("The value of n = -1");
    }

    int m, n;

    printf("Enter the value of m: ");
    scanf("%d", &m);

    if (m != 0)
        if (m > 0)
            n = 1;

        else
            n = -1;

    else
        n = 0;

    printf("The value of m = %d\n", m);
    printf("The value of n = %d", n);

    /* 7. Write a C program to accept the height of a person in
    centimeter and categorize the person according to their height */

    // Prompt user for n. n == float
    // IF n <= 147cm, print n output as dwarf
    // IF n >= 150cm, print n output as short
    // IF n >= 160cm, print n output as average
    // IF n >= 188cm, print n output as giant

    float height;

    printf("Input your height in centimeters: ");
    scanf("%f", &height);

    if (height <= 150.0)
    {
        printf("You're a dwarf");
    }
    else if ((height >= 151.0) && (height < 160.0))
    {
        printf("You're short af");
    }
    else if ((height >= 161.0) && (height < 170.0))
    {
        printf("%0.1f an average height.", height);
    }
    else if ((height >= 171.0) && (height <= 180.0))
    {
        printf("%0.1f is a tall height", height);
    }
    else
    {
        printf("You have a giant's height");
    }

    return 0;
}