#include<iostream>
using namespace std;
#include<vector>

int main(){
vector<int>a{1,2,3,4,5};
vector<int>b{2,3,4};
vector<int>v;



for(int i=0;i<a.size();i++){
    int element=a[i];
    for(int j=0;j<b.size();j++){
        if(element==b[j]){
            v.push_back(element);

        }
    }
}
for(auto value:v){
    cout<<value<<" ";
    
}
  
    return 0;
}