#include<bits/stdc++.h>
using namespace std;

// countDigits;

void countDigits(int n){
    int count = 0;
    while(n!=0){
        int rem = n % 10;
        count++;
        n/=10;
    }
    cout<<"Number of digits : "<<count;
}



int main(){
    countDigits(123410);
    return 0;
}