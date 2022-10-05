#include<iostream>
#include<vector>
using namespace std ;
int main(){
    int n;
    cin >> n;
    vector<int>A(n);
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    int max=A[0];
    int count =0;
    for(int i=0;i<n;i++){
        if(A[i]>max){
            max=A[i];
        }
     }
    for (int i=0;i<n;i++) {
        if(A[i]==max) {
            count++;
        }            
    }
    cout<< count ;
    return 0;
}
    
    

