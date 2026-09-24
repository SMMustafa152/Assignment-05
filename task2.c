#include <stdio.h>
int main() {
    float deliverycharge, shoppingamount,deliverydistance, totalamount;
    printf("Enter shopping amount: ");
    scanf("%f", &shoppingamount);
    printf("Enter delivery distance(km): ");
    scanf("%f", &deliverydistance);
    if(shoppingamount <= 0 || deliverydistance <= 0) {
        printf("Invalid input.\n");
        return 1;
    }
    
    if (shoppingamount >= 5000) {
        printf("You are eligible for free delivery!\n");
        deliverycharge = 0;
    } else if (shoppingamount < 5000 && deliverydistance <= 5) {
        deliverycharge = 150;  
        printf("You are delivery charges are:%f\n",deliverycharge);
    }
    else if (shoppingamount < 5000 && (deliverydistance > 5 && deliverydistance <= 10)) {
        deliverycharge = 250;  
        printf("You are delivery charges are:%f\n",deliverycharge);
    } else if (shoppingamount < 5000 && (deliverydistance > 10 && deliverydistance <= 20)) {
        deliverycharge = 400;  
        printf("You are delivery charges are:%f\n",deliverycharge);
    } else {
        deliverycharge = 600;
        printf("Your Delivery charges are:%f\n",deliverycharge);
    }
    totalamount = shoppingamount + deliverycharge;
    printf("Your Shopping amount is:%f\n",shoppingamount);  
    
    printf("Your Total amount is:%f\n",totalamount);

    return 0;
}