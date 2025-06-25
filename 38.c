#include<stdio.h>
#include<math.h>
int main()
{
   int num ;
    scanf("%d",&num);
    int count=0;
     for(int itr=2;itr<=(sqrt(num));itr++)
     {
         if(!(num%itr))
         {
             count++;
         }
     }

    printf((count==0)?"prime":"composite");
}