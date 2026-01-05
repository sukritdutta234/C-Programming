#include <stdio.h>

int main() {
    int num;
    printf("Enter the week day:");
    scanf("%d", &num);
    if (num == 0) {
        printf("This is Sunday\n");
    }
    else if (num == 1) {
        printf("This is Monday\n");
    }
    else if (num == 2) {
        printf("This is Tuesday\n");
    }
    else if (num == 3) {
        printf("This is Wednesday\n");
    }
    else if (num == 4) {
        printf("This is Thursday\n");
    }
    else if (num == 5) {
        printf("This is Friday\n");
    }
    else if (num == 6) {
        printf("This is Saturday\n");
    }
    else {
        printf("Invalid input! Please enter a number between 0 and 6.\n");
    }

    return 0;
}