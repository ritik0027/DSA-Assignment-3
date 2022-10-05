#include<iostream>
#include<vector>
using namespace std ;

int simple_array_sum(vector<int>A){
    int sum=0;
    for(int i=0;i<A.size();i++){
        sum=sum+A[i];
            }
    return sum ;
}

int main () {
 int n ;
 cin>>n;
 vector<int>B(n);
 for(int i=0;i<n;i++){
     cin>>B[i] ;
 }
 cout<< simple_array_sum(B);
  
    return 0;
}
