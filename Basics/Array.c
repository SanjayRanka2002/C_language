#include<stdio.h>

    //2D array with Fuction

    void abc(int arr[3][3]){



        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
               if(i>=j){
                 printf("%d",arr[i][j]);
               }
            }
            printf("\n");
        }
    }


void main(){
    /*
    //array Practise
    int array[4][20];

    printf("Enter 4 Names :");
    for(int i=0;i<4;i++){
        scanf("%s",&array[i]);
    }

     for(int i=0;i<4;i++){
        printf("%s\n",&array[i]);
    }
    */


      int arr[3][3];
         printf("Enter 9 number:\n");
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                scanf("%d",&arr[i][j]);
            }
        }
    abc(arr);



}
