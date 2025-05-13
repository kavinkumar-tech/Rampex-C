#include <stdio.h>

int main() {
    int a, b, c, d, e;
    int sum;
    float avg;

    printf("Enter marks of 5 subjects:\n");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

    sum = a + b + c + d + e;
    avg = sum / 5.0;

    printf("Average = %.2f\n", avg);

    if (avg >= 90) {
        printf("Grade: A\n");
    } else if (avg >= 80) {
        printf("Grade: B\n");
    } else if (avg >= 70) {
        printf("Grade: C\n");
    } else if (avg >= 60) {
        printf("Grade: D\n");
    } else {
        printf("Grade: F (Fail)\n");
    }

    return 0;
}