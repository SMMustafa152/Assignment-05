#include<stdio.h>
int main(){
    int balance=50000;
    int menu,withdraw,deposit;
    printf("Enter your menu option:\n");
    scanf(" %d", &menu);
    switch(menu){
        case 1 :
            printf("Check Balance:%d\n",balance);
            break;
        case 2:
            printf("Deposit Amount\n");
            printf("Enter the amount to deposit:");
            scanf("%d",&deposit);   
            balance+=deposit;
            printf("Your Updated Balance is:%d\n",balance);
            break;
        case 3: 
        printf("Withdraw Amount\n");
            printf("Enter the amount to withdraw:");
            scanf("%d",&withdraw);
            if(withdraw<=balance){
                balance-=withdraw;
                printf("Your Updated Balance is:%d\n",balance);     
            }
            else{
                printf("Insufficient Balance\n");   
            }
            break;
        
        default:
            printf("Invalid option\n");
        }
            printf("Thankyou for using ATM\n");
            return 0;
    }
