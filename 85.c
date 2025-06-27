#include<stdio.h>
void print(int);
void main()
{
    int end;
    scanf("%d",&end);
    print(end);
}
void print(int current)
{
    if(current>=1)
    {
        printf("%d",current);
        print(current-1);
    }
}