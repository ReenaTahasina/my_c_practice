#include <stdio.h>
int main() {
    int num;
    scanf("%d", &num);  // Number of rows

    int stars = 1;  // Start with 1 star
    for (int row = 1; row <= num; row++) {
        for (int col = 1; col <= stars; col++) {
            printf("*");
        }
        printf("\n");
        stars += 2;  // Increase by 2 for the next row
    }

    return 0;
}