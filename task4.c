#include<stdio.h>
int main(){
    int Category,Menu;
    printf("Enter your Category:\n");       
    scanf("%d",&Category);
    switch(Category){
        case 1:
        printf("FAST FOOD\n");
        printf("Enter your menu choice:\n");
        scanf("%d",&Menu);
        
        
        switch(Menu){
            
            case 1:
            printf("You selected Burger\n");
            break;
            case 2:
            printf("You selected Pizza\n");
            break;
            case 3:
            printf("You selected Fries\n");
            break;
            default:
            printf("INVAID SELECTION\n");
            
        }
        break;
        case 2:
            printf(" PAKISTANI FOOD:\n");
            printf("Enter your menu choice:\n");
            scanf("%d",&Menu);
            switch(Menu){
                
                case 1:
                printf("You selected Biryani\n");
                break;
                case 2:
                printf("You selected Karahi\n");
                break;
                case 3:
                printf("You selected Nihari\n");
                break;
                default:
                printf("INVAID SELECTION\n");
                
            }
            break;
            case 3:
            printf("ENTER DRINKS:\n");
            printf("Enter your menu choice:\n");
            scanf("%d",&Menu);
            switch(Menu){
                
                case 1:
                printf("You selected Coke\n");
                break;
                case 2:
                printf("You selected pepsi\n");
                break;
                case 3:
                printf("You selected Juice\n");
                break;
                default:
                printf("INVAID SELECTION\n");
                
            }
            break;
            

        default:
        printf("INVAID SELECTION\n");
        
        }
        return 0;
}