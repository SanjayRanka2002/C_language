#include<stdio.h>
void main(){
    int n;
    int last;
    printf("Enter a number to sum :");
    scanf("%d",&n);
    while(n>0){
        last=n%10;
        printf("%d",last);
        n=n/10;
    }

    int odd;
    int sum=0;

   for(int i=1;i<=30;i=i+2){
        printf("\n%d",i);
        sum=sum+i;
   }
   printf("\nsum of odd number is :%d",sum);



}
