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


// Reverse an Array Iterative Approach  O(n)
void reverseArray(int arr[], int n){
    int si = 0, ei = n -1;
    while(si < ei){
        swap(arr[si], arr[ei]);
        si++, ei--;
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
// Reverse an Array (Recursive Approach)    O(n)

void reverseArr(int arr[], int si, int ei){
    if(si < ei){
        swap(arr[si], arr[ei]);
        reverseArr(arr, si+1, ei-1);
    }
}

// Check given string is palindrome or not  O(n)

bool palindromeStr(string str){
    int si = 0, ei = str.length()-1;
    while(si < ei){

        if(!isalnum(str[si])){
            si++;
        }else if (!isalnum(str[ei])){
            ei--;
        }else if(tolower(str[si]) != tolower(str[ei])){
            return false;
        }else{
              si++, ei--;
        }
      
    }
    return true;
}

// Printing fibonacci series Iterative Approach

void f(vector<int> &arr, int n){
    if(n<= 0){
        return;
    }
    arr.push_back(0);
    if(n == 1){
        return;
    }
    arr.push_back(1);

    for(int i=2; i<=n; i++){
        arr.push_back(arr[i-1] + arr[i-2]);
    }
}
// Fibonacci Recursive Approach
int fibo(int n){
    
    if(n <= 1){
        return n;
    }
    return fibo(n-1) + fibo(n-2);

}

// Printing array
void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

// Print Vector 
void printVector(vector<int> arr){
    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    fibo(10);
    return 0;
}