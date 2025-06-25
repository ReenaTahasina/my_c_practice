#include<stdio.h>
int main()
{
    int num;
    scanf("%d",&num);
    int start=1;
    while(start<=num)
    {
        if(num%start==0)
        {
        printf("%d\n",start);
        }
        start ++;
    }   
}