#include<stdio.h>
int main()
{
    int n = 100, i, sum = 0;
    printf("Enter a integer number: ");
    scanf("%d", &n);
    i = 1;

    while( i <= n){
        sum += i;
        ++i;
    }
     printf("sum = %d", sum);
     return 0;
}
