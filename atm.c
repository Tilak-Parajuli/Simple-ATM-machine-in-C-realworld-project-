#include<stdio.h>
int main(){
    int balance = 0 ;
    int pin = 1001;
    int typedpin;
    int anotherTransaction = 1; //do another_trans//2_no_an_trans
    printf("Please Enter your pin: ");
    scanf("%d",&typedpin);

    if (pin != typedpin){
        printf("Invalid Pin!!!!\n\n");
        return 0;
    }
    while(anotherTransaction == 1) {
        int option;
        printf("\n\nWhat do you want to do ? : \n");
        printf("\n\n\t\tMY LORD\n\n");
        printf("1  -  Check your balance \n");
        printf("2  -  Deposit \n ");
        printf("3  -  Withdraw\n");
        scanf("%d",&option);
        if (option==1){     ///check balanc
            printf("Your balance is : $ %d \n",balance);

        }  
        else if (option ==2){   //depo
            int amountDeposit;
            printf("How much money do you want to deposit :$");
            scanf("%d",&amountDeposit);
            if(amountDeposit > 0){

                balance += amountDeposit;
            }
            else{
                printf("Invalid Deposit Amount");
            }
            
        }
        else if(option==3){     //Withdraw
            int amountWithdraw;
            printf("How much money do you want to withdraw : $");
            scanf("%d",&amountWithdraw);

            if (amountWithdraw <= balance && amountWithdraw % 20 == 0){
                balance -= amountWithdraw;
            }
            else{
                if(amountWithdraw > balance){
                    printf("You don`t have enough money. Declined\n");
                }
                else{
                    printf("You must enter the amount that is divisible by 20 \n");
                }
            }
        }
        else{
            printf("INVALID TRANSACTION1");
        }
        anotherTransaction = 0;
        while(anotherTransaction != 1 && anotherTransaction != 2){
            
            printf("DO you wanna do another transsactions; \n\n");
            printf("1 - YES, 2 - NO!!");
            scanf("%d",&anotherTransaction);
        }


    }
    return 0;
}