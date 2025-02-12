#include <bits/stdc++.h>

using namespace std;


void printNameNTimes(int n){
    if(n<=0) return;
    cout << "Raghu"<<endl;
    printNameNTimes(n-1);
}

void print1toN(int i, int n){
    if(i>n) return;
    cout << i<<endl;
    print1toN(i+1, n);
}

void printNto1(int n){
    if(n<=0) return ;
    cout << n<<endl;
    printNto1(n-1);
}

void print1toNBackTracking(int i, int n){
    if(i<1) return;
    print1toNBackTracking(i-1, n);
    cout << i<<endl;

}

void printNto1BackTracking(int i, int n){
    if(i>n) return;
    printNto1BackTracking(i+1, n);
    cout << i <<endl;

}

//parametrized
void sumofNNumbers(int i, int n, int sum ){
    if(i>n) {cout << sum; return;};
    sumofNNumbers(i+1, n, sum+i);
}

//nonparameterized
int sumofNNumbers1(int n){
    if(n<=0) return n;
    return n + sumofNNumbers1(n-1);
}

int factorial(int n){
    if(n<=0) return 1;
    return n * factorial(n-1);
}


//doublepointer
void reverseArray(int arr[], int l, int r){
    if(l>=r) return;
    
    swap(arr[l], arr[r]);
    reverseArray(arr, l+1, r-1);
}

//singlepointer
void reverseArray1(int arr[], int i, int n){
    if(i>=n/2) return;
    swap(arr[i], arr[n-i-1]);
    reverseArray(arr, i+1, n-i-2);
}


bool palindrome(int i, string s, int n){
    if(i>=n/2) return true;
    if (s[i] != s[n-i-1]) return false; 
    return palindrome(i + 1, s, n);  
}


int fibonacci(int n){
    if(n<=1) return n;
    return fibonacci(n-1) + fibonacci(n-2);
}


int main(){
    int n =5;
    int arr[5] = {1,2,3,4,5};
    // int sum = 0;
    // printNameNTimes(n);
    // print1toN(1,n);
    // printNto1(n);
    // print1toNBackTracking(n, n);
    // printNto1BackTracking(1,n);
    // sumofNNumbers(1, n, sum);
    // cout << sumofNNumbers1(n);
    // cout << factorial(n);

    // reverseArray(arr, 0, 4);
    // reverseArray1(arr, 0, 5);
    // for(int i=0;i<5;i++){
    //     cout << arr[i];
    // }

    // cout << palindrome(0,"MadaM", 5);

    // cout << fibonacci(10);

    return 0;
}