 #include<stdio.h>
int main()
{
    int num;
    scanf("%d", &num);  // Number of rows
    for (int row = num; row >=1; row--) 
    {
        for(int spaces=1;spaces<=row;spaces++)
        {
        printf(" ");
        }
        for (int stars = 1; stars <= row; stars++) 
            {
            printf("*");
            }
            printf("\n");
        }
            return 0;
}    