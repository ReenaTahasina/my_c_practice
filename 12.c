#include <stdio.h>

int main()
{
    char ch;
   scanf("%c",&ch);
    ch|=32;
    switch(ch)
    {
        case 'a' ... 'z': printf("lower");break;
        case 'A' ... 'Z': printf("Upper");break;
        case '0' ... '9': printf("digit");break;
        default: printf("symbol");break;
    }
   
}