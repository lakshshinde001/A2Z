#include<bits/stdc++.h>
using namespace std;

// countDigits  O(n);

void countDigits(int n){
    int count = 0;
    while(n!=0){
        int rem = n % 10;       //optional
        count++;
        n/=10;
    }
    cout<<"Number of digits : "<<count;
}

//Count digits O(1)
void countDigits1(int n){
    string str = to_string(n);
    cout<<str.length()<<endl;
}

// Count Digits Most optimized  log10 base n
void countDigits2(int n){
    int digits = floor(log10(n) + 1);       
    cout<<digits<<" ";
}


// Reverse a given number

void reverseNum(int n){
    int rev = 0;
    while(n !=0 ){
        int rem = n % 10;
        rev = (rev * 10) + rem;
        n/=10;
    }
    cout<<"Reversed Num : "<<rev;
}



int main(){
    reverseNum(1234);
    return 0;
}