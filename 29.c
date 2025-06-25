#include<stdio.h>
int main()
{
    int num;
    scanf("%d",&num);
    int dig=0,den=1;
    while(num/den>0)
    {
        den *= 10;
        dig++;
    }
    printf("%d",dig);
}