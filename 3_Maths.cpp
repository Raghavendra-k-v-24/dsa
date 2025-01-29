#include <bits/stdc++.h>

using namespace std;

pair<vector<int>, int> extract_digits(int n){
    // simple solution to get count of digits
    // int count = (int)log10(n)+1;


    pair<vector<int>, int> res;
    res.second =0;
    while(n>0){
        int digit = n%10;
        res.first.push_back(digit);
        n/=10;
        res.second+=1;
    }
    return res;
}

int reverse_num(int n){
    int rev_num =0;
    while(n>0){
        int digit = n%10;
        rev_num = (rev_num * 10) + digit;
        n/=10;
    }
    return rev_num;
}

bool palindrome(int n){
    int n_copy = n;
    int rev_num =0;
    while(n>0){
        int digit = n%10;
        rev_num = (rev_num * 10) + digit;
        n/=10;
    }
    return rev_num == n_copy;
}

bool armstrong_number(int n){
    int n_copy = n;
    int sum = 0;
    while(n>0){
        int digit = n%10;
        int res = 1;
        int size = (int)log10(n_copy) + 1;
        while (size--) res *= digit;
        sum = sum + res;
        n/=10;
    }
    return sum == n_copy;
}

void divisors(int n){
    // for(int i=1; i<=n;i++){
    //     if(n%i==0) cout << i<<endl;
    // }

    //less time complexity
    set<int> s;
    for(int i=1; i*i <= n; i++){
        if(n%i==0) {
            s.insert(i);
            if (n/i !=i){
                s.insert(n/i);
            }
        }
    }
    for(auto it: s) cout << it<< endl;
}

bool prime(int n){
    int count =0;
    for(int i=1;i*i<=n ;i++){
        if(n%i ==0){
            count +=1;
            if(count > 2) return false;
            if (n/i !=i){
                count +=1;
                if(count > 2)  return false;
            }
        }
    }
    return true;
}

int gcd(int a, int b){
    //euclidean algorithm
    // gcd(a, b) = gcd((a-b), b) given a>b

    //modified euclidean approach
    // gcd(a,b) = gcd((a%b), b) given a>b  // O(log fi (min(a,b)))

    while(a > 0 && b > 0){
        if(a>b) a=a%b;
        else b=b%a;
    }
    if(a==0) return b;
    return a;
    
}

int main(){

    int n= 1634;
    //extract digits
    pair<vector<int>, int> res = extract_digits(n);
    for(auto it: res.first) cout<< it <<endl;
    cout << "Count:"<<res.second<<endl;

    cout << "--------------------------------"<<endl;

    // //reverse number
    cout << reverse_num(n)<<endl;

    cout << "--------------------------------"<<endl;


    //palindrome
    cout << (palindrome(n) ? "true": "false") <<endl;

    cout << "--------------------------------"<<endl;


    //armstrong number
    cout << (armstrong_number(n)? "true" : "false") << endl;

    cout << "--------------------------------"<<endl;


    //all divisors
    divisors(n);

    cout << "--------------------------------"<<endl;


    //prime
    cout << (prime(n)? "true" : "false") << endl;

    cout << "--------------------------------"<<endl;


    //GCD and HCF
    cout << gcd(16,12) << endl;

    cout << "--------------------------------"<<endl;

    return 0;
}
