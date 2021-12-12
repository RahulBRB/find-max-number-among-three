#include<stdio.h>

// 3. Write a program to find out the maximum among three numbers.

void main()
{
    int num1, num2, num3;
 
    printf("Enter the values of Num1, Num2 and Num3: \n");
    scanf("%d %d %d", &num1, &num2, &num3);
    printf("Num1 = %d\tNum2 = %d\tNum3 = %d\n", num1, num2, num3);

    if (num1 > num2)
    {
        if (num1 > num3)
        {
            printf("Num1 = %d is the greatest among three. \n", num1);
        }
        else
        {
            printf("num3 = %d is the greatest among three. \n", num3);
        }
    }
    else if (num2 > num3)
        printf("num2 = %d is the greatest among three. \n", num2);
    else
        printf("num3 = %d is the greatest among three. \n", num3);
}