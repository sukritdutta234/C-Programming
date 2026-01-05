#include <stdio.h>
#include <math.h>
int main(){
    double a,b,c,D,root1,root2,realpart,imgpart;
    printf("Input values for a, b and c :");
    scanf("%lf%lf%lf",&a, &b, &c);
    D = b*b - 4*a*c;
    if(D>0){
        root1 = (-b + sqrt(D)) / (2*a);
        root2 = (-b - sqrt(D)) / (2*a);
        printf("The Roots are real & unequal.\n");
        printf("Roots are %lf and %lf",root1,root2);
    }
    else if(D==0){
        root1 = -b/(2*a);
        root2 = root1;
        printf("The roots are real and equal\n");
        printf("Roots are %lf both.",root1);
    }
    else{
        realpart = - b / (2*a);
        imgpart = sqrt(-D)/(2*a);
        printf("The Roots are imaginary\n");
        printf("Root1=%.2lf+i%.2lf\nRoot2=%.2lf-i%.2lf",realpart,imgpart,realpart,imgpart);
    }
    return 0;
}