#include<iostream>
#include<string>
using namespace std;
int main() {

    int arr[5];

    for(int i=0;i<5;i++){
        cout<<"enter the integer:";
        cin>>arr[i];
    }

    cout<<"reverse order"<<endl;
    for(int i=5-1;i>=0;i-- ){
        cout<<"array Elements:"<<arr[i]<<endl;
    }

return 0;
}