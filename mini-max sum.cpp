#include<iostream>
#include<vector>
using namespace std ;

int main() {
    vector<int>A(5);
    long long sum=0;
    for(int i=0;i<5;i++){
        cin>> A[i] ;
        sum+=A[i];
    }
    int min=A[0];
    int max=A[0];
    for(int i=1;i<5;i++){
        if(A[i]>max)
            max=A[i];
        if(A[i]<min)
            min=A[i];
    }
    long long int a = sum-max ;
    long long int b = sum-min ;
    cout << a << " " << b ;
    return 0;
}
