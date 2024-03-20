#include<iostream>
using namespace std;
int main(){
int arr[10];

cout<<"enter new  array element : "<<endl;

for(int i=0;i<10;i++){
   cin>>arr[i];
}

cout<<"new array is"<<endl;
for(int j=0;j<10;j++){
    cout<<arr[j]<<" ";
}
    return 0;
}