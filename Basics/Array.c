#include<stdio.h>
void main(){
int range;
printf("Enter a number you want to range :");
scanf("%d",&range);

int array[range];

printf("Enter Numbers you want to print in array:");


for(int i=0;i<range;i++){
    scanf("%d",&array[i]);
}
int max=array[0];
int min=array[0];
printf("array is :\n");
for(int i=0;i<range;i++){
    if(array[i]>max){
        max=array[i];
    }

    if(array[i]< min){
        min=array[i];
    }

}

printf("max is :%d",max);
printf("\nmin is :%d",min);


}
