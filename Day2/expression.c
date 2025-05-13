#include<stdio.h>

int main(){
    
   int a=5, b=10, c=15, result;
    
    printf("initial value:a=%d, b=%d, c=%d \n", a, b, c);
    
    result =a+b*c;
    printf("Expression: a+b*c= %d\n", result);
    result =(a+b)*c;
    printf("Expression: (a+b)*c= %d\n", result);
    result =a+b/c;
    printf("Expression: a+b/c= %d\n", result);
    result =a*(b/c);
    printf("Expression: a*(b/c)= %d\n", result);
    
    return 0;
}