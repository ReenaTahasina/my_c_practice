#include <stdio.h>
int main()
{
    int num;
    scanf("%d", &num);

    // Upper inverted pyramid
    for (int row = num; row >= 1; row--)
    {
        for (int spaces = row; spaces < num; spaces++)
        {
            printf(" ");
        }
        for (int col = 1; col < 2 * row; col++)
        {
            printf("%d", row);
        }
        printf("\n");
    }

    // Lower upright pyramid (starting from row = 2 to avoid duplicate center)
    for (int row = 2; row <= num; row++)
    {
        for (int spaces = row; spaces < num; spaces++)
        {
            printf(" ");
        }
        for (int col = 1; col < 2 * row; col++)
        {
            printf("%d", row);
        }
        printf("\n");
    }
}