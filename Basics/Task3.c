#include<stdio.h>
void main(){
    int n;
    int k;
    int sum=0;
    printf("Enter Your Number :");
    scanf("%d",&n);
    //pattern 1
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

    //odd and sum of odd
    printf("Enter range you want to print odd numbers :");
    scanf("%d",&k);

    for(int i=1;i<=k;i=i+1){
        printf("%d\n",i);
        sum=sum+i;
    }
    printf("sum of odd is :%d",sum);
}



