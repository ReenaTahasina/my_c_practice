#include <stdio.h>
#define square(num) ((num)*(num))

int scan();
int reverse(int);
int is_adam(int);

int main() {
    int result = is_adam(scan());
    printf("%s\n", result ? "Adam" : "Not Adam");
    return 0;
}

int is_adam(int num) {
    int s1 = square(num);
    int r1 = reverse(num);
    int r2 = reverse(s1);
    int s2 = square(r1);
    int r3 = reverse(s2);

    if ((s1 == r3) && (s2 == r2)) 
        return 1;
    else 
        return 0;
}

int reverse(int num) {
    int rev = 0;
    while (num) {
        int rem = num % 10;
        num /= 10;
        rev = rev * 10 + rem;
    }
    return rev;
}

int scan() {
    int num;
    scanf("%d", &num);
    return num;
}