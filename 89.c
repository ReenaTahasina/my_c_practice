#include<stdio.h>
void tower_of_hanoi(int,char,char,char);
void main()
{
    int num;
    scanf("%d",&num);
    tower_of_hanoi(num,'A','B','C');
}
void tower_of_hanoi(int num,char src,char aux,char dest )
{
    if(num==0) return;
    tower_of_hanoi(num-1,src,dest,aux);
    printf("%c -> %c\n",src,dest);
    tower_of_hanoi(num-1,aux,src,dest);
}
