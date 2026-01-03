#include <stdio.h>
int main(){
    //week2
    int base, height, area;
    printf("Enter the base of triangle:");
    scanf("%d",&base);
    printf("Enter the height of triangle:");
    scanf("%d",&height);
    area = (base*height)/2;
    printf("The area of the triangle: %d",area);
    return 0;
}