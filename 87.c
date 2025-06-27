#include<stdio.h>
int fact(int);
void main()
{
    int num;
    scanf("%d",&num);
    printf("%d",fact(num));
}
int fact(int num)
{
    if(num<=1) return num;
    return num*fact(num-1);
}