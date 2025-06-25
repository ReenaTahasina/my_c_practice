#include<stdio.h>
#include<math.h>
int main()
{
 int num;
 scanf("%d",&num);
 int den=1;
 while((num/den)>9)
  { 
   printf("%d",den);
  }
}