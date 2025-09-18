#include<stdio.h>
void main(){
    int select,current,withdraw,deposit,total;
    printf("1.   Balance Enquiry\n");
    printf("2.   Cash Withdraw\n");
    printf("3.   Cash Deposit\n");

    printf("Please Enter Your Digit...:");
    scanf("%d",&select);

    printf("Pls enter your Current Balance:");
    scanf("%d",&current);
    switch(select){
    case 1:
        printf("Your Account Balance is %d",current);
        break;
    case 2:
        printf("Enter ammount to withdraw :");
        scanf("%d",&withdraw);
        total=current-withdraw;
        if(withdraw<current){
            printf("Your cash Withraw succefully\n");
            printf("Your current account is %d\n",total);
        }else{
            printf("Insufficient fund\n");
        }
    break;
    case 3:
        printf("Enter amount to deposit:");
        scanf("%d",&deposit);
        total=current+deposit;
        printf("Your Amount is %d",total);
    break;
    default:
        printf("Enter correct input");

    }
}
