#include<iostream>
#include<vector>
using namespace std ;
 
    int main(){
        long int n;
        double positive=0,negative=0,zero=0;
        vector<int>A(n);
        cin>> n;
        for(int i=0;i<n;i++){
            cin>>A[i];
        if(A[i]>0){
        positive++ ;
        }
        else if(A[i]<0){
           negative++;
        }
           else {
               zero++; 
           }
    }
        double a,b,c;
        a=positive/n;
        b=negative/n;
        c=zero/n ;
        printf("%.6f\n",a);
        printf("%.6f\n",b);
        printf("%.6f",c);
 
        return 0;
 
    }    
 
