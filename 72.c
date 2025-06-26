#include<stdio.h>
int scan();
void add(int,int);
void process();
int main() {
    process();
}
void process()
{
    int num1=scan(),num2=scan();
    add(num1,num2);
}
void add(int n1,int n2)
{
    printf("%d",n1+n2);
}
int scan()
{
    int num;
    scanf("%d",&num);
    return num;
}