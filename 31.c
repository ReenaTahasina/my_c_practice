#include<stdio.h>
#include<math.h>
int main()
{
    int base, exp, sol=1;
    scanf("%d %d", &base, &exp);
    while(exp > 0)
    {
        sol = sol * base;
        exp--;
    }
    printf("%d", sol);
}