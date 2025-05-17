#include<stdio.h>
int main(){
    
    int age;
    int licence;
    
    printf("Enter your age: ");
    scanf("%d", &age);
    
    printf("Do you have a driving licence? (1 = Yes, 0 =No): ");
    scanf("%d", &licence);
    
    if(age >= 18 && licence == 1) {
        printf("You are eligible to drive.\n");
}else {
    printf("You are NOT eligible for drive.\n");
}
return 0;
}