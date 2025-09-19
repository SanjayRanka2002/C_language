#include<stdio.h>
void main(){
    //user input se array banana
    int array[5];
    printf("Enter 5 Numbers :\n");
    for(int i=0;i<5;i++){
        scanf("%d",&array[i]);
    }
    printf("\n");

    for(int i=0;i<5;i++){
        printf("%d",array[i]);
    }
    printf("\n");
    printf("Dusra Array Print Ho rha hai Niche deko\n");

    //Bina User Input se array banana
    int arr[]={2,4,6,8,10};
    for(int i=0;i<5;i++){
        printf("%d",arr[i]);
    }
    printf("\n");
    //Names Ka Array iske liye 2d array lena hoga


    char Name[5][20];
    printf("Enter 5 Names : \n");
    for(int i=0;i<5;i++){
        scanf(" %s",&Name[i]);

    }


    for(int i=0;i<5;i++){
        printf("\n%s",Name[i]);
    }
}
