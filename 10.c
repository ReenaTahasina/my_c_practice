#include<stdio.h>
int main()
{
    int marks;
    scanf("%d",&marks);
    //if(marks==100) printf("O");
    //if(marks ==100 || marks ==99 || marks ==98) printf("O");
    if(marks<=100 && marks>=92) printf("O");
    else if(marks<=100 && marks>=92) printf("O");
    else if(marks<=91 && marks>=82) printf("S");
    else if(marks<=81 && marks>=72) printf("A");
    else  printf("F");
}