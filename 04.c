#include <stdio.h>
int main() 
{
int a,b;
scanf("%d %d",&a,&b);
int max=a;
if (b>max) 
{
    max=b;
}
printf("%d",max);
}