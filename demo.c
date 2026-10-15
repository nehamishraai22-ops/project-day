#include<stdio.h>
int main()
{
int x;

printf("enter the two value of x:");

scanf("%d",&x);
printf("%d",x);
if(x<70)
{
printf("order is confirmed");
printf("\nthankyou!");
}
else if(x>70)
{
    printf("order limit reached");
    printf("\nthankyou!");
}
    else{
        printf("sorry");
    }
    return 0;
}