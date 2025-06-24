#include<iostream>
#include<string>
using namespace std;
int main() {

    int a[10];

    for(int i=0; i<10; i++){

        cout<<"Enter the integer:";
        cin>>a[i];
    }

    int sum=0;

    for(int i=0;i<10;i++){
        sum+=a[i];
    }

    cout<<"Sum of Array element is:"<<sum;



    


return 0;
}