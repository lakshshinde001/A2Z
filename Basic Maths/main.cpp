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


// Reverse a given number   O(n)

void reverseNum(int n){
    int rev = 0;
    while(n !=0 ){
        int rem = n % 10;
        rev = (rev * 10) + rem;
        n/=10;
    }
    cout<<"Reversed Num : "<<rev;
}

// Palindrome   O(logn)

void palindrome(int n){
    int x = n;
    int rev = 0;
    while(n!=0){
        int rem = n % 10;
        rev = (rev * 10) + rem;
        n/=10;
    }
    if(rev == x){
        cout<<x<<" is Palindrome";
    }else{
        cout<<x<<" is not a palindrome";
    }
}

// ArmStrong number O(n)

void armStrong(int n){
    int x = n;
    int sum = 0;
    while(n != 0){
        int rem = n % 10;
        sum += pow(rem, 3);
        n/=10;
    }
    if(sum == x){
        cout<<x<<" is a ArmStrong";
    }else{
        cout<<x<<" is not armstrong";
    }
}

// Print All divisors of n  (Brute Force O(n))

void divisors(int n){
    for(int i=1; i<=n; i++){
        if(n % i == 0){
            cout<<i<<" ";
        }
    }
}

// print all divisors Optimal O(sqrt(n))

void divisors1(int n){
    for(int i=1; i<sqrt(n); i++){
        if(n % i == 0){
            cout<<i<<" ";
            if(i != (n/i)){
                cout<<(n/i)<<" ";
            }
        }
    }
}

// check for prime Brute force O(n)

bool isPrime(int n){
    for(int i=2; i<n; i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}

// check for prime optimal O(sqrt(n))
bool isPrime1(int n){   
    for(int i=2; i<sqrt(n); i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}

// Print GCD/HCF    Brute force     O(n)

void GCD(int a, int b){
    int ans;
    for(int i=1; i<= min(a,b); i++){
        if(a % i == 0 && b % i == 0){
            ans = i;
        }
    }
    cout<<"GCD : "<<ans;
}

// print GCD Optimal    O(logɸmin(a,b)), where ɸ is 1.61.

int gcd (int a, int b){
    if(b == 0){
        return a;
    }
    return gcd(b, a%b);
}

int main(){
    cout<<gcd(12, 120);
    return 0;
}