#include<iostream>
using namespace std;
bool mila(int a[],int size,int key){
 for(int i=0;i<size;i++){
    if(a[i]==key)
        return true;
    
  
 } 
  return false;
}


int main(){
    int a[5]={3,4,6,88,55};
    int size=5;


    int key;
    cout<<"enter the key";
    cin>>key;

    if(mila(a,size,key)){
        cout<<"found";
    }
    else{
        cout<<"not found";
    }
    
    return 0;
}