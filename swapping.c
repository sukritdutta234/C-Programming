#include <stdio.h>
int main(){
    int num1, num2;
    printf("Enter num1:");
    scanf("%d",&num1);
    printf("Enter num2:");
    scanf("%d", &num2);
    // num1 = num1 + num2;
    // num2 = num1 - num2;
    // num1 = num1 - num2;
    printf("Before swap: num1 = %d, num2 = %d\n", num1, num2);
    num1 = num1^num2;// b^b=0 ---> XOR concept
    num2 = num1^num2;// a^0=a ---> XOR concept
    num1 = num1^num2;
    printf("After swap : num1 = %d, num2 = %d\n", num1, num2);
}