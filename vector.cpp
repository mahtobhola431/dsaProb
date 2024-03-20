#include<iostream>
#include<vector>
using namespace std;

 int findQuniue(vector<int>v){
int ans=0;
for(int i=0;i<v.size();i++){
    ans=ans^v[i];
}
return ans;

  
 }
int main(){
   
int n;
cout<<"enter the size of array";
cin>>n;
vector<int> v(n);
for(int i=0;i<v.size();i++){
    cin>>v[i];

}

int uniqueNum=findQuniue(v);
cout<<uniqueNum;

return 0;
}