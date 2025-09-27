#include<stdio.h>
#include<string.h>
struct table{
    int rollno;
    char name[50];
    float per;

};
void main(){
    struct table t[3];
    for(int i=0;i<3;i++){
        printf("Enter Roll no :");
        scanf("%d",&t[i].rollno);
        printf("Enter Name :");
        scanf("%s",&t[i].name);
        printf("Enter Percent :");
        scanf("%f",&t[i].per);

    }

    for(int j=0;j<3;j++){
        printf("Roll no : %d\n ",t[j].rollno);
        printf(" Name :%s\n ",t[j].name);
        printf(" Percent :%.1f\n ",t[j].per);

    }


}
