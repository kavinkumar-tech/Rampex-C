#include<stdio.h>

int main(){
    float basic ,HRA ,DA,Gross;
    
    printf("Enter your basic salary :");
    scanf("%f", &basic);
    
    printf("HRA (House Rent Allowence):");
    scanf("%f", &HRA);
    
    printf("Da (Dearness Allowance)");
    scanf("%f", &DA);
    
    Gross=basic+HRA+DA;
    
    printf("Gross = %3f\n", Gross);
    
    return 0;
}