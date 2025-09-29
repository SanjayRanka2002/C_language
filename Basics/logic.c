#include<stdio.h>
#include<string.h>

struct price{
    int bookno;
    char bookname[30];
    float bookprice;


};
void main(){
    struct price p[3];
    printf("Fill Details Correctly :\n");
    for(int i=0;i<3;i++){
        printf("Enter Book No :");
        scanf("%d",&p[i].bookno);
        printf("Enter Book Name:");
        scanf("%s",&p[i].bookname);
        printf("Enter Book price :");
        scanf("%f",&p[i].bookprice);
    }

      for(int j=0;j<3;j++){

        printf("%d\n",p[j].bookno);
        printf("%s\n",p[j].bookname);
        printf("%.1f\n",p[j].bookprice);
    }



}
