#include <stdio.h>
int main(){
    // this is gonna be fun commit through git bash
    int num , digit1, digit2, digit3, sum;
    printf("Enter the number: ");
    scanf("%d", &num);
    if(num<100 || num>999){
        printf("Invalid input! Please enter a 3-digit number.\n");
    }
    else{
        digit1 = num / 100;
        digit2 = (num % 100)/10;
        digit3 = num % 10;
        sum = digit1 + digit2 + digit3;
        printf("Sum of Digit is: %d", sum);
    }
return 0;
}