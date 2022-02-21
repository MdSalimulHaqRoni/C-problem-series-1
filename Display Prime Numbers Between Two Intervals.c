#include<stdio.h>
int main()
{
    int low, high, temp, i, flag;
    printf("Enter two numbers intervals:\n");
    scanf("%d %d", &low, &high);

    if(low > high){
        temp = low;
        low = high;
        high = temp;

    }
     printf("Prime numbers between are %d and %dare:  ", low, high);

     while(low < high){
        flag = 0;

        if(low <= 1){
            ++low;
            continue;
        }
         for(i = 2; i <= low / 2; ++i){
            if(low % i == 0){
                flag = 1;
                break;
            }
         }
          if(flag == 0)
            printf("%d ", low);
          ++low;
     }
      return 0;
}
