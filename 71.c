#include<stdio.h>
int scan();
void add(int,int);
int main() 
{
   int num1=scan(),num2=scan();
   printf("%d\n",num1+num2);
   int num3=scan(),num4=scan();
   printf("%d",num3*num4);
}
int scan()
{
    int num;
    scanf("%d",&num);
    return num;
}