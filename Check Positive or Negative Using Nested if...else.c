#include<stdio.h>
int main()
{
    double num;
    printf("Enter a Number: ");
    scanf("%lf", &num);

    if (num < 0.0)
        printf("You entered a negative number.");

    else if (num > 0.0)
        printf("You Entered a Positive Number.");

        else
            printf("You Entered 0.");

        return 0;
}
