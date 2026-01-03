#include<stdio.h>
int main(){
    int totalseconds, hours, minutes, seconds;
    printf("Enter the time(in sceconds):");
    scanf("%d", &totalseconds);
    hours = totalseconds / 3600;
    minutes = (totalseconds%3600)/60;
    seconds = totalseconds % 60;
    printf("%d second(s) = %d Hour, %d Minute and %d Second",totalseconds,hours,minutes,seconds);
    return 0;

}