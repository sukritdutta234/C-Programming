#include <stdio.h>

int main() {
    int marks;
    printf("Enter total mark secured by a student: ");
    scanf("%d", &marks);
    if (marks >= 90 && marks <= 100) {
        printf("Secured grade is O (Outstanding)\n");
    }
    else if (marks >= 80 && marks <= 89) {
        printf("Secured grade is E (Excellent)\n");
    }
    else if (marks >= 70 && marks <= 79) {
        printf("Secured grade is A (Very Good)\n");
    }
    else if (marks >= 60 && marks <= 69) {
        printf("Secured grade is B (Good)\n");
    }
    else if (marks >= 50 && marks <= 59) {
        printf("Secured grade is C (Fair)\n");
    }
    else if (marks >= 40 && marks <= 49) {
        printf("Secured grade is D (Pass)\n");
    }
    else if (marks >= 0 && marks < 40) {
        printf("Secured grade is F (Fail)\n");
    }
    else {
        printf("Invalid Marks!\n");
    }

    return 0;
}
