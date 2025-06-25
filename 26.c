#include<stdio.h>
int main()
{
    long double num;
    scanf("%Lf",&num);
    long double  start=1;
    long double  product=1;
    while(start<=num)
    {
        product *= start++;
    }
        printf("%Lf",product);
}   