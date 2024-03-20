#include<iostream>
using namespace std;
int main(){
    int a[10]={2,44,23,7,147,42,1,3,-6,69};
    int size=10;

    int maxNum=INT32_MIN;
    for(int i=0;i<size;i++){
        if(a[i]>maxNum){
            maxNum=a[i];
        }
    }
    cout<<"maximum number of array is"<<maxNum;
    return 0;
}