#include <iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main(){
    char time[10];
    cin >> time ;
    if(time[8]=='A'){
        if(time[0]=='1' && time[1]=='2'){
            time[0]='0';
            time[1]='0';
        }
        time[8]='\0';
        cout << time ;
    }
    else {
        if(time[1]=='8'){
            time[0]='2';
            time[1]='0';
        }
        else if(time[1]=='9'){
            time[0]='2';
            time[1]='1';
        }
        else if(!(time[0]=='1'&& time[1]=='2')){
            time[0]+=1;
            time[1]+=2;
        }
        time[8]='\0' ;
        cout<<time;
        
        return 0;
    }
    

