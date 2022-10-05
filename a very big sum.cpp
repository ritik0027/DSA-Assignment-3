#include<iostream>
#include<vector>
using namespace std ;
int main(){
    int n ;
    cin>> n;
    vector<int> A(n);
    long long int sum=0;
    for(int i=0;i<n;i++){
        cin>> A[i];
    }
    for(int i=0;i<n;i++){
        sum=sum+A[i];
    }
    cout<<sum ;
    
}
