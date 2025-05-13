#include <stdio.h>

int main() {
    int a, b, c, d, e; 
    int sum;
    float avg;

    printf("Enter marks of 5 subjects:\n");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

    sum = a + b + c + d + e;
    avg = sum / 5.0; 
    
    printf("Total marks = %d\n", sum);
    printf("Average marks = %.2f\n", avg);

    return 0;
}