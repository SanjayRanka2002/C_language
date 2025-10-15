#include<iostream>
using namespace std;
class cal{
    public:
    int a,b,sum,sub,mul,div;
    void inserting(){
        cout<< " Enter first Number : ";
        cin>>a;
        cout<< " Enter second Number : ";
        cin>>b;

    }
    void calculation(){

        sum=a+b;
        sub=a-b;
        mul=a*b;
        div=a/b;

    }
    void show(){
        cout<<" addition of "<<a<< " and "<<b<<" is : "<<sum<<endl;
        cout<<" subtraction of "<<a<< " and "<<b<<" is :"<<sub<<endl;
        cout<<" multipication of "<<a<< " and "<<b<<" is :"<<mul<<endl;
        cout<<" division of "<<a<< " and "<<b<<" is : "<<div<<endl;


    }
};
int main(){
    cal c1;

    c1.inserting();
    c1.calculation();
    c1.show();
    return 0;


}
