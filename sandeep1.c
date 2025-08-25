#include <stdio.h>
int main()
{
    int choice;
    double num1, num2, result;
    printf("***** simple colculator *****\n ");

    printf(" opration : \n ");
    printf("1. addition (+)\n ");
    printf("2. substraction   (-)\n ");
    printf("3. multiplication (*) \n ");
    printf("4. divisionn : (/) \n ");
    printf("5. moduloss : (%%) \n ");

    printf("enter your choice (1-5) : ");
    scanf("%d", &choice);

    printf("enter first number ");
    scanf("%lf", &num1);
    printf("enter second number ");
    scanf("%lf", &num2);

    switch (choice)
    {
    case 1:
        result = num1 + num2;
        printf("result : %.2lf\n", result);
        break;

    case 2:
        result = num1 - num2;
        printf("result : %.2lf\n", result);
        break;

    case 3:
        result = num1 * num2;
        printf("result : %.2lf\n", result);
        break;

    case 4:
        if (num2 != 0)
        {
            result = num1 / num2;
            printf("result : %.2fl\n", result);
        }
        else
        {
            printf("error : division by zero not allowed \n ");
        }
        break;

    case 5:
        if ((int)num2 != 0)
        {
            printf("result : %d\n", (int)num1 % (int)num2);
        }
        else
        {
            printf("error division by zero not allowed \n ");
        }
        break;
    default:
        printf("invalid choice ! \n");
    }
    return 0;
}