#include<iostream>
using namespace std;
int main(){

    int a[5];
    cout<<"enter the array element"<<endl;
    for(int i=0;i<5;i++){
        cin>>a[i];

    }
cout<<"the new array is ";

    for(int i=0;i<5;i++){
        cout<<a[i]<<" ";

        // cout<<"double of array is "<<2*a[i]<<" ";


    }
 cout<<"double of array is "<<endl;

   for(int i=0;i<5;i++){
        cout<<2* a[i]<<" ";
        


    }

    return 0;
}