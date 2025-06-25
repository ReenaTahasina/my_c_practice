#include<stdio.h>
int main()
{
    int num;
    scanf("%d",&num);
    int den=1;
    while ((num/den)>9)
    den*=10;
    {
        printf("%d",den);
    }
    
}