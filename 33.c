#include<stdio.h>
#include<math.h>
int main()
{
 int  num;
 scanf("%d",&num);
 int sum=0,safe=num;
 while(num>0)
 {
    int dig=num%10;
    int start=1,fact=1;
    while(start<=dig)
    {
        fact*=start;
        start++;
    }
    sum+=fact;
    num/=10;
}
printf((sum==safe)?"Strong":"Not Strong");
}