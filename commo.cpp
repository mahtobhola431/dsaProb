#include<iostream>
#include<vector>

using namespace std;
int main(){
    vector<int>a{1,2,3,4,5,5,6};
    vector<int>b{3,4,5,11,5,22,33};
    vector<int>v;
    for(int i=0;i<a.size();i++){
        int element=a[i];
        for(int j=0;j<b.size();j++){
            if(element==b[j]){
                b[j]=-1;
                v.push_back(element);
            }
        }
    }
    for(auto value:v){
        cout<<value<<"  ";
    }
    return 0;
}