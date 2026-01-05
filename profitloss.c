#include <stdio.h>
int main(){
    float buying_price, marker_price, difference, discount, selling_price, result_percentage;
    printf("Enter the buying price:") ;
    scanf("%f",&buying_price);
    printf("Enter the marker price:");
    scanf("%f",&marker_price);
    printf("Enter the discount:");
    scanf("%f%%",&discount);
    selling_price = marker_price - (marker_price*discount/100);
    if(buying_price<selling_price){
        difference = selling_price - buying_price;
        result_percentage = (difference/marker_price)*100;
        printf("Seller made a profit of %.2f%%.\n",result_percentage);
    }
    if else(buying_price>selling_price){
        difference = buying_price - selling_price;
        result_percentage = (difference/marker_price)*100;
        printf("Seller made a loss of %.2f%%.\n", result_percentage);
    }
    else{
        // buying_price == selling_price
        printf("Seller made no profit and no loss.\n")
    }

    return 0;
}