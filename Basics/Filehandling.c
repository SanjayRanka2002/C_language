#include<stdio.h>
int main(){
    FILE*fp1;
    fp1=fopen("my.txt","w");
    fprintf(fp1,"Sanjay Ranka \n");
    fprintf(fp1,"Shraddha  \n");
    printf("File Written");
    fclose(fp1);
    return 0;
}
