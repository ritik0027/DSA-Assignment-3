#include<iostream>
#include<vector>
using namespace std ;
int main(){
vector<int>A(3);
vector<int>B(3);
int a =0 ;
int b =0 ;
 for (int i = 0; i < 3; i++) {
        cin >> A[i];
    }
    for (int i = 0; i < 3; i++) {
        cin >> B[i];

        if (A[i] < B[i]) {
            b+=1;
        }
         else if (A[i] > B[i]) {
            a+=1;
         }
    }
    cout << a << " " << b ;
}
