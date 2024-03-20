#include<iostream>
using namespace std;
int main(){
    int a[5]={3,5,77,55,43};
    int size=5;
    int start=0;
    int end=size-1;
  while(start<=end){
    swap(a[end],a[start]);
    end--;
    start++;

  }
  for(int i=0;i<size;i++){
    cout<<a[i]<<"  ";

  }
  
    return 0;
}