#include<iostream>
using namespace std;
int main(){
    int a[10]={1,0,0,0,1,1,0,1,1,1};
    int size=10;
    int numZero=0;
    int numOne=0;
    for(int i=0;i<size;i++){
        if(a[i]==0){
            numZero++;

        }
        if(a[i]==1){
            numOne++;
            
        }
    }
    cout<<"number is zero is"<<numZero<<endl;
    cout<<"number of one is "<<numOne<<endl;
    cout<<INT64_MAX<<endl;
    cout<<INT64_MIN;


    
    return 0;
}