#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>


float totalCost(int n, int foodPrice[]);
float discount(int totalPrice);




int main()
{
    int n;
    float totalPrice, discountPriceRes;
    printf("Enter food items number : ");
    scanf("%d",&n);
    char foodNames[n][20];
    int foodPrice[n];
    for(int i=0;i<n;i++){
        printf("Food name : ");
        scanf("%s",&foodNames[i]);
        printf("Food price : ");
        scanf("%d",&foodPrice[i]);
    }
    printf("\n--------------\n");
    for(int i=0;i<n;i++){
        printf("%d. %s : %d BDT\n",i+1,foodNames[i], foodPrice[i]);
    }
    printf("\n%d. Total Price.",n+1);
    printf("\n--------------\n");

    for(int i=0; ;i++){
        totalPrice = totalCost(n,foodPrice);
    discountPriceRes = discount(totalPrice);
    printf("\n\n\n****Receipt %d ****\n\n",i+1);
    printf("Total price is               %f BDT\n",totalPrice);
    printf("With discount total price is %f BDT",discountPriceRes);
    printf("\n\n\n");
    printf("\n***************\n");

    }

    return 0;
}
float totalCost(int n, int foodPrice[]){
    int o;
    float total=0;

    for(int i=0; ;i++){
            printf("Select option : ");
            scanf("%d",&o);
        if(o==n+1){
            break;
        }
        else{
            total= total+foodPrice[o-1];
        }
    }
    return total;
}
float discount(int totalPrice){
    float dis,discountPrice;
    printf("Enter discount percentage : ");
    scanf("%f",&dis);
    return discountPrice = totalPrice - (totalPrice*(dis/100));
}
