#include<iostream>
using namespace std;
#include<vector>

int main(){
    
int arr[]={1,2,3,4,5};
int sizea=5;
int brr[]={7,8,9,10};
int sizeb=4;
vector<int>v;
for(int i=0;i<sizea;i++){
    v.push_back(arr[i]);
}


for(int i=0;i<sizeb;i++){
    v.push_back(brr[i]);
}

for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
}

    return 0;
}