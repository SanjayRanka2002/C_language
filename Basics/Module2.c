#include<stdio.h>
void main(){
    //Question 1 or scanf
    char Name[]="shreeram";
    char Address[]="Ahamdabad";
    int Birth=5;
    int Age=23;

    printf("My Name Is %s",Name);
    printf("\n My BirthDate is %d",Birth);
    printf("\n My Age  is %d",Age);
    printf("\n My Address  is %s",Address);

    //Question 2
    int a,b;

    printf("\nEnter Two Numbers to sum,sub,mul and div :");
    scanf("%d%d",&a,&b);

    printf("sum of %d and %d =%d",a,b,a+b);
    printf("\nsub of %d and %d =%d",a,b,a-b);
    printf("\nmul of %d and %d =%d",a,b,a*b);
    printf("\ndiv of %d and %d =%d",a,b,a/b);

    //Question 3

    int c,square,Qube;
    printf("\nEnter a number i provide square and qube :");
    scanf("%d",&c);
    square=c*c;
    Qube=c*c*c;
    printf("\nSquare of %d is =%d",c,square);
    printf("\nQube of %d is =%d",c,Qube);

    //Questin 4
    float r,circle;
    printf("\nEnter Radious to print circle of area: ");
    scanf("%f",&r);
    circle=(float)3.14*r*r;
    printf("\nArea of Circle is %.1f",circle);

    //Question 5
    int area,height,base;
    printf("\nEnter Height and base :");
    scanf("%d%d",&height,&base);
    area=(height*base)/2;
    printf("\nArea of tringle is %d",area);

    //Question 6
    int interest,p,radious,t;
    printf("\nEnter p , r and t to calculate simple interest :");
    scanf("%d%d%d",&p,&radious,&t);
    interest=p*radious*t;
    printf("\n Simple Interest Is %d",interest);

    //Convert centigrade to farhenite
    int m,f;
    printf("\nEnter Centigrade Value :");
    scanf("%d",&m);
    f=(9*m/5)+32;
    printf("\n Farhenite Value is %d",f);

    //Percentage of 5 subject marks
    int marks,m1,m2,m3,m4,m5,percent,total;
    printf("\nEnter 5 subjects obtain  marks :");
    scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
    marks=m1+m2+m3+m4+m5;
    printf("\nEnter Total marks:");
    scanf("%d",&total);
    percent=marks *100/total;
    printf("\nPercent is %d",percent);

    //Swap Without Third variable
    int j,k;
    printf("\nEnter Numbers :");
    scanf("%d",&j);
    scanf("%d",&k);

    j=j+k;
    k=j-k;
    j=j-k;

    printf("\nFirst is %d",j);
    printf("\nsecond is %d",k);

    //Positive or Negative Number Check
    int check,Number;
    printf("\n Enter Number to check positive or negarive:");
    scanf("%d",&Number);
    if(check>0){
        printf("\n Number is Positive");
    }else{
        printf("\nNumber is Negative");
    }




}
