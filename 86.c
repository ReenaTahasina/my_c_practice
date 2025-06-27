#include<stdio.h>
void print(int,int);
void main()
{
    int end;
    scanf("%d",&end);
    print(1,end);
}
    void print(int current,int end)
{ 
    if(current<=end)
    {
        print(current+1,end);
        printf("%d",current);
    }
}