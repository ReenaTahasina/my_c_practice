#include <stdio.h>
#include <math.h>
int scan();
int is_prime(int);
int main()
{
    int result =is_prime(scan());
    printf("%d",result);
}
int is_prime(int num){
    if(num<=1) return 0;
    int count=0;
    for(int itr=2;itr<=sqrt(num);itr++){
        if(num%itr==0)
        {
            count++;
            break;
        }
    }
    return (count)?0:1;
}
int scan()
{
    int num;
    scanf("%d",&num);
    return num;
}