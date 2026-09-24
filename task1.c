#include <stdio.h>
int main() {
    char membership;
    int totalbill,discountamount,originalbill,finalamount;
    printf("Enter your total bil:");
    scanf("%d",&totalbill);
    printf("Enter your membership status(1/0):");    /*1 for yes and for no*/
    scanf("%d",&membership);
    if(totalbill>=5000 && membership==1){
        discountamount=totalbill * 0.2;
        printf("Your discounted amount is:%d\n",discountamount);
    
    }else if(totalbill>=5000 && membership==0){
            discountamount=totalbill * 0.1;
            printf("Your discounted amount is:%d\n",discountamount);
        }
        else if(totalbill<=5000 && membership==1){
            discountamount=totalbill*0.1;
           printf("Your discounted amount is:%d\n",discountamount);
        }
        else{
            printf("No discount for non-members");
        
    }
    finalamount=totalbill-discountamount;
     printf("Your Original bill is:%d\n",totalbill);
     printf("Your Final amount is:%d\n",finalamount);
    

    
    return 0;
}
