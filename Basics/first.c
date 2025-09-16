#include<stdio.h>
void main(){
   int income,annual,total,taxpay;
   printf("Enter Your Income : ");
   scanf("%d",&income);
   annual=income*12;

   if(annual>0 && annual<300000){
    printf("You have to pay atleast 0 % Tax\n");
    taxpay=annual*0;
    total=annual-taxpay;
    printf("Your annual income is =%d\n",annual);
    printf("You Have To Pay %d\n",taxpay);
    printf("Your Rest Income Is %d\n",total);

    }else if(annual>300000 && annual<700000){
    printf("You have to pay 5% Tax\n");
    taxpay=(annual*5)/100;
    total=annual-taxpay;
    printf("Your annual income is =%d\n",annual);
    printf("You Have To Pay =%d\n",taxpay);
    printf("Your Rest Income Is %d\n",total);


   }else if(annual>700000 && annual<1000000){
    printf("You have to pay atleast 7% Tax\n");
    taxpay=(annual*7)/100;
    total=annual-taxpay;
    printf("Your annual income is =%d\n",annual);
    printf("You Have To Pay %d\n",taxpay);
    printf("Your Rest Income Is %d\n",total);

}else{
    printf("You Have No Salary===\n");
}
   }
