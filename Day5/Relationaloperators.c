#include <stdio.h>

int main() {
    int a, b;

    // Input values
    printf("Enter two integers:\n");
    scanf("%d %d", &a, &b);

    // Relational operations
    printf("a == b: %d\n", a == b);
    printf("a != b: %d\n", a != b);
    printf("a > b : %d\n", a > b);
    printf("a < b : %d\n", a < b);
    printf("a >= b: %d\n", a >= b);
    printf("a <= b: %d\n", a <= b);

    return 0;
}
