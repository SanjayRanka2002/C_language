#include<stdio.h>
void main(){
    int n;
    printf("Enter number to draw that number table:");
    scanf("%d",&n);

    for(int i=n;i>=1;i--){
        printf("%d\n",i);
    }


}
