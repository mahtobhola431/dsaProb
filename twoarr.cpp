#include<iostream>
using namespace std;

 bool findkey(int a[][3],int row,int col,int key){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(a[i][j]==key){
                return true;
            }
        }
    }
    return false;
 }
int main(){
int a[3][3]={{2,3,4},{55,34,3},{94,34,22}};

cout<<findkey(a,3,3,55);


    return 0;
}