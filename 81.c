#include<stdio.h>
void swap(int,int);
void main()
{
    int num1=10,num2=5;
    swap(num1,num2);
    printf("\nin main:num1 =%d and num2=%d",num1,num2);
}
void swap(int n1,int n2)
{
    int safe=n1;
    n1=n2;
    n2=safe;
    printf("\n\n swap:n1=%d and n2=%d",n1,n2);
}