#include<stdio.h>
#include<string.h>
struct Textbook {
    int bookid;
    float price;
    char title[15];
};
void main(){
    int n;
    printf("Enter number of books you want number:");
    scanf("%d",&n);
    struct Textbook t[n];
    printf("Enter detail to book your book:\n");


    for(int i=0;i<n;i++){
            printf("Enter your book id : ");
            scanf("%d",&t[i].bookid);
            printf("Enter your book price : ");
            scanf("%f",&t[i].price);
            printf("Enter your book title : ");
            scanf(" %s",&t[i].title);
        }

    for(int j=0;j<n;j++){
            printf("book id : %d\n",t[j].bookid);
            printf("book price : %f\n",t[j].price);
            printf("\n book title : %s",t[j].title);

          }
}
