#include<stdio.h>
#include<string.h>

struct details{
    int id;
    char name[30];
    float salary;

};

void main(){
    struct details d[3];
    printf("Enter Details of employee :\n");

    for(int i=0;i<3;i++){
     printf("Enter Your Id:");
     scanf("%d",&d[i].id);
     printf("Enter Your Name:");
     scanf("%s",&d[i].name);
     printf("Enter Your salary:");
     scanf("%f",&d[i].salary);
     }


     for(int j=0;j<3;j++){
     printf("Id = %d\n",d[j].id);
     printf("Name = %s\n",d[j].name);
      printf("Salary = %.1f\n",d[j].salary);

     }
}
