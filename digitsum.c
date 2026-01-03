#include <stdio.h>
int main(){
    int num , firstdigit, lastdigit,sum;
    printf("Enter the number:");
    scanf("%d", &num);
    if(num<100000 || num>999999){
        printf("Invalid input! Please enter a 6-digit number.\n");
    }
    else
    {
        firstdigit = num / 100000;
        lastdigit = num % 10;
        sum = firstdigit + lastdigit;
        printf("Sum of digit is %d", sum);
    }
    return 0;
}