#include<stdio.h>
int main()
{
    int num;
    scanf("%d",&num);
    int start=1;
    int sum=0;
    while(start<=num)
    {
        sum+=start;
        start++;
    }
        printf("%d",sum);
}   