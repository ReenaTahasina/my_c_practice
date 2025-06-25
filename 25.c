#include<stdio.h>
int main()
{
    int num;
    scanf("%lf",&num);
    int start=1;
    int sum=0;
    while(start<=num)
    {
        sum+=start++;
    }
        printf("%d",sum);
}   