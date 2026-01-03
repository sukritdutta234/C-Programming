#include<stdio.h>
int main(){
    int paisa, rupees, extrapaisa;
    printf("Enter the amount:");
    scanf("%d",&paisa);
    rupees = paisa / 100;
    extrapaisa = paisa % 100;
    printf("%d paisa = %d Rupee(s) and %d paisa\n",paisa,rupees, extrapaisa);

    return 0;
}