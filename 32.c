#include<stdio.h>
#include<math.h>
int main()
{
   int num ;
    scanf("%d",&num);
    int safe=num;
    int nod =log10(num)+1;
    int sum=0;
    while(num>0)
    {
        int digit= num%10;
        num/=10;
        int exp=nod;
        int sol=1;
        while(exp>0){
            sol *=digit;
            exp--;
        }
         sum +=sol;
    }
     printf((sum==safe)?"armstrong ":"not armstrong");
}// not execute in this but executed i gdb compiler