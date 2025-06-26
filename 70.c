#include<stdio.h>
int scan();
int main()
{
    int num1,num2;
    scanf("%d",&num1);
    scanf("%d",&num2);
    printf("%d\n",num1+num2);
    int num3,num4;
    scanf("%d",&num3);
    scanf("%d",&num4);
    printf("%d\n",num3*num4);
}
int scan()
{
    int num;
    scanf("%d",&num);
    return num;
}