#include <bits/stdc++.h>
using namespace std;

// for int array
// inside main: size can go upto pow(10,6)+1
// globally : size can go upto pow(10, 7)+1

// for bool array
// inside main: size can go upto pow(10,7)+1
// globally : size can go upto pow(10, 8)+1

int main(){
    //number
    int n;
    cout << "Enter the number of Elements: ";
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    //precompute
    int hash1[13] = {0};
    for(int i=0;i<n;i++){
        hash1[arr[i]]+=1;
    }

    int q1;
    cout << "Enter number of test cases: ";
    cin >> q1;
    while(q1--){
        int number;
        cout << "Enter the number: ";
        cin >> number;
        cout << "Frequency of " << number << " is " << hash1[number];
    }

    //string
    string s;
    cin >> s;

    int hash2[26] = {0};
    for(int i=0;i<s.size();i++){
        hash2[s[i] - 'a']+=1;
    }

    int q2;
    cin >> q2;
    while(q2--)
        {
            char c;
            cin >> c;
            cout << "Frequency of " << c << " is " << hash2[c - 'a'];
        } 
    return 0;
}