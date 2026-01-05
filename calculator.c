#include <stdio.h>
int main(){
    int num1, num2;
    float result;
    char operation;
    printf("Enter 2 numbers:");
    scanf("%d%d",&num1,&num2);
    printf("Select the operation from the menu (A for Add, S for Subtract, M for Multiplication, D for Division) :");
    scanf("%c",&operation);
    if(operation=='A'){
        result = num1 + num2;
        printf("The sum is %.2f\n", result);
    }
    else if (operation == 'S') {
        result = num1 - num2;
        printf("The Difference is %.2f\n", result);
    }
    else if (operation == 'M') {
        result = num1 * num2;
        printf("The product is %.2f\n", result);
    }
    else if (operation == 'D') {
        if (num2 != 0) {
            
            result = (float)num1 / num2;
            printf("Result: %d / %d = %.2f\n", num1, num2, result);
        } else {
            printf("Error: Division by zero is not allowed.\n");
        }
    }
    else {
        printf("Invalid choice!\n");
    }
    return 0;
}