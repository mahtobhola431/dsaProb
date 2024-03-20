#include<iostream>
using namespace std;
int main(){
    
    int a[5]={3,4,2,6,44};
    for(int i=0;i<5;i++){
        if(a[i]==4){
            cout<<"4 is present"<<endl;
             
        }
        else{
            cout<<"4 is absent";
        }
       
    }

    return 0;
}