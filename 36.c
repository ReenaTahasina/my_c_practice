#include<stdio.h>
#include<math.h>
int main()
{
   int num ;
    scanf("%d",&num);
    int count=0;
     for(int itr=1;itr<=num;itr++)
     {
         if(!(num%itr))
         {
             count++;
         }
     }

    printf((count==2)?"prime":"composite");
}