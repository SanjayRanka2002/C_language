#include<stdio.h>
//Assisment Problem
void main(){
    printf("1.Pizza     price=180rs/pcs\n");
    printf("2.Burger    price=100rs/pcs\n");
    printf("3.Dosa     price=120rs/pcs\n");
    printf("4.Idli     price=50rs/pcs\n");

    int option;
    int c;
    printf("Please Enter Your Choose.... :");
    scanf("%d",&option);

    switch(option){
    case 1:
        printf("You Have Selected Pizza.");
        printf("if you want place more order (Y/N)?:");
        scanf("%c",&c);
        if(c=='Y' || c=='y'){

        }
        break;
    }


}
