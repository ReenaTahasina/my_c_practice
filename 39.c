#include<stdio.h>
#include<math.h>
int main()
{
    int num,lower,upper;
    scanf("%d %d",&lower,&upper);
    for(int num=(lower==1)?lower:num<=upper;num++);
    {
        int count=0;
        for(int itr=2;itr<=(sqrt(num));itr++)
        {
            if(!num%itr)
            {
                count++;
            }
        }
        if(count==0) printf("%d",num);
    }
}