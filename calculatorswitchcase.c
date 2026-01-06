#include <stdio.h>
int  main(){
    int num1, num2;
    float result;
    char ch;
    printf("Select the operation from the menu(A for Add, S for Subtract, M for Multiplication, D for Division) :");
    scanf("%c",&ch);
    printf("Enter 2 numbers:");
    scanf("%d%d", &num1,&num2);
    switch(ch){
    case 'A': result = num1 + num2;
              printf("The sum is %.2f",result);
              break;
    case 'S': result = num1 - num2;
              printf("The difference is %.2f",result);
              break;
    case 'M': result = num1 * num2;
              printf("The product is %.2f", result);
              break;
    case 'D': result = (float)num1/num2;
              printf("Division is %.2f", result);
              break;
    default: printf("Invalid Input");}
    return 0;
    }