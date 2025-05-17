#include <stdio.h>

int main() {
    int a, rev = 0;

    printf("Enter the number: ");
    scanf("%d", &a);

    int original = a;  

    while (a != 0) {
        int digit = a % 10;
        rev = rev * 10 + digit;
        a = a / 10;
    }

    printf("Reversed number: %d\n", rev);

    return 0;
}