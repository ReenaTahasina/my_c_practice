#include <stdio.h>
int main() 
{
    int num;
    scanf("%d", &num);  // Example input: 4

    for (int row = num; row >= 1; row--)
     {
        for (int col = 1; col <= row; col++)
         {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}