#include<stdio.h>
int main(){
    int totaldist, km, m;
    printf("Enter the distance:");
    scanf("%d", &totaldist);
    km = totaldist / 1000;
    m = totaldist % 1000;
    printf("%d meter = %d Km and %d meters", totaldist, km, m);
    
    return 0;
}