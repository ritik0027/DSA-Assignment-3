#include<iostream>
#include<vector>
using namespace std ;
int main(){
    int n ;
    cin>> n ;
    vector<vector<int>>A(n,vector<int>(n));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>A[i][j];
        }
    }
     int sum1=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
            sum1+=A[i][j];
            }
        }
    }
    int sum2=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if((i+j)==n-1){
                sum2+=A[i][j];
            }
        }
    }
    int a;
    a=sum1-sum2;
    if(a>0){
        cout<< a;
    }
    else {
        cout<< -a ;
    }
            
    return 0;
   
}
