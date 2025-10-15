#include<iostream>
using namespace std;
void sumfunction(int a,int b){
    int sum;
    cout<< " enter first number :";
    cin>>a;
    cout<< " enter second number :";
    cin>>b;

    sum=a+b;
    cout<< " sum of "<<a<<" and "<<b<<" is :"<<sum;

}
int main(){
    int a,b;
    sumfunction(a,b);
    return 0;

}
