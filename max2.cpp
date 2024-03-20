#include<iostream>
#include<vector> 
using namespace std;
int main(){
    vector<int>a{2,3,4,5,6,87,6,9,0};
   int max=INT16_MIN;

 
   for(int i=0;i<a.size();i++){
    if(a[i]>max){
        max=a[i];
    }

 
   }
   
   cout<<"maximum number of this array is"<<max;
    return 0;
}