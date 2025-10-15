#include<stdio.h>
int main(){
 FILE*fp;
 fp=fopen("my.txt","w");
 fprintf(fp," sanjay \n");
 fprintf(fp,"Tamaiya \n");
 printf("Name insert \n");
 fclose(fp);
    return 0;
}
