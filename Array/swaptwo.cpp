#include<iostream>
#include<string>
using namespace std;
int main() {

    int a,b;
    cout<<"enter two integer:";
    cin>>a>>b;

    cout<<"Before Swap:"<<"a ="<<a<<endl<<"b ="<<b<<endl;

    int temp =a ;
    a=b;
    b=temp;

    cout<<"After swap:"<<"a ="<<a<<endl12<<"b = "<<b;

return 0;
}