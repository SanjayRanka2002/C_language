#include<stdio.h>
#include<string.h>
struct student{
    int rollno;
    char Name[20];
    float percent;

};
void main(){
    struct student s[3];
    for(int i=1;i<=2;i++){
        printf(" Enter a roll no :");
        scanf("%d",&s[i].rollno);
        printf(" Enter Name  :");
        scanf("%s",&s[i].Name);
        printf(" Enter Percent  :");
        scanf("%f",&s[i].percent);
    }

    for(int j=1;j<=2;j++){
        printf("  roll no : %d \n",s[j].rollno);
        printf("  Name is : %s \n",s[j].Name);
        printf("  percent is : %.1f \n",s[j].percent);

    }
}
