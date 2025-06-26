#include<stdio.h>
int main()
{
    int start=1;
    print:
        printf("%d",start);
        start++;
        if(start<=10) goto print;
}