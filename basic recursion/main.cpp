#include<bits/stdc++.h>
using namespace std;
// Print name n time using recursion
void print(int n){

    if(n == 0){
        return;
    }
    cout<<"Laxman ";
    print(n-1);
}

// print 1 To N using recursion

void print1TN(int i, int n){
    if(i > n)
        return;
    cout<<i<<" ";
    print1TN(i+1, n);
}
// print N To 1 using recursion

void printNT1(int n){
    if(n <= 0)
        return;
    cout<<n<<" ";
    printNT1(n-1);
}   

// Sum of first N numbers O(n)

int SUM(int n){
    if(n == 0){
        return 0;
    }

    return n + SUM(n-1);
}   

// factorial of given number
int FACT(int n){
    if(n == 0){
        return 1;
    }

    return n * FACT(n-1);
}   


int main(){
    cout<<FACT(5);
    return 0;
}