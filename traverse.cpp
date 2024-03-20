#include<iostream>
using namespace std;
int main(){

int arr[4]={2,4,5,6};
for(int i=0;i<4;i++){
    cout<<arr[i]<<endl;
}
int n,x;
cout<<"enter the number";
cin>>n;
while(n>0){
    x=n%10;
    n=n/10;
    cout<<x;

    
}

for(int i=0;i<4;i++){
    arr[i]=1;
}
for(int i=0;i<4;i++){
    cout<<arr[i]<<endl;
    
}


    return 0;
}