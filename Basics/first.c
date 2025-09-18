#include<stdio.h>
void main(){
    int n;
    //pattern 1
    printf("Enter a number that i make a pattern:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("%d",j);
        }
        printf("\n");
    }
    printf("\n");

    //pattern 2
     for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("%d",i);
        }
        printf("\n");
    }
    printf("\n");

    //pattern 3
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i+1;j++){
            printf("%d",j);
        }
        printf("\n");
    }
    printf("\n");

    //pattern 4
     for(int i=n;i>=1;i--){
        for(int j=1;j<=i;j++){
            printf("%d",i);
        }
        printf("\n");
    }
    printf("\n");

    //sum of odd number
    int number;
    int sum=0;
    printf("Enter number in range :");
    scanf("%d",&number);

    for(int i=1;i<=number;i=i+2){
        printf("%d\n",i);
         sum=sum+i;

    }
    printf("sum of odd number in range is:%d \n",sum);

    // Number
    int num;
    printf("enter number to check of sum of its number :");
    scanf("%d",&num);
    int s=0;
    while(num>0){
        int last=num%10;
        s=s+last;
        num=num/10;


    }
    printf("sum is :%d\n",s);

    //amstrong
    int a;
    int l;
    int mum=0;
    printf("Enter number to check amstrong:");
    scanf("%d",&a);

    while(a>0){
        l=a%10;
        mum=mum+pow(l,3);
        a=a/10;

    }
        printf("amstrong number is :%d",mum);




}
