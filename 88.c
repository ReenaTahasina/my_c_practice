#include<stdio.h>
int fibonaci(int);
void main()
{
    int num;
    scanf("%d",&num);
    printf("%d",fibonaci(num-1));
}
int fibonaci(int num)
{
    if(num<=1) return num;
    return num*fibonaci(num-1) + fibonaci(num-2);
}