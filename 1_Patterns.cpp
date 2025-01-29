#include <bits/stdc++.h>

using namespace std;

void pattern_1 (int n){
    // *****
    // *****
    // *****
    // *****
    // *****
    for(int i=0;i<=n; i++){
        for(int j=0; j<=n; j++){
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern_2 (int n){
    // *
    // **
    // ***
    // ****
    // *****
    for(int i=0;i<n; i++){
        for(int j=0; j<=i; j++){
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern_3 (int n){
    // 1
    // 12
    // 123
    // 1234
    // 12345
    for(int i=0;i<n; i++){
        for(int j=0; j<=i; j++){
            cout << j+1;
        }
        cout << endl;
    }
}

void pattern_4 (int n){
    // 1
    // 22
    // 333
    // 4444
    // 55555
    for(int i=0;i<n; i++){
        for(int j=0; j<=i; j++){
            cout << i+1;
        }
        cout << endl;
    }
}

void pattern_5 (int n){
    // *****
    // ****
    // ***
    // **
    // *
    for(int i=0;i<n; i++){
        for(int j=0; j<=n-i-1; j++){

            cout << "* ";
        }
        cout << endl;
    }
}

void pattern_6 (int n){
    // 12345
    // 1234
    // 123
    // 12
    // 1
    for(int i=0;i<n; i++){
        for(int j=0; j<=n-i-1; j++){
            cout << j+1;
        }
        cout << endl;
    }
}

void pattern_7 (int n){
    //     *        
    //    ***    
    //   *****
    //  *******
    // ********* 
    
    for(int i=0;i<n; i++){
        // space
        for(int j=0; j<n-i-1; j++){
                cout << " ";
            }
        // star
        for(int j=0; j< 2*i+1; j++){
                cout << "*";
            }
        //space
        for(int j=0; j<n-i-1; j++){
                cout << " ";
            }
        
        cout << endl;
    }
}

void pattern_8 (int n){
    // *********
    //  ******* 
    //   *****
    //    ***  
    //     *          
    
    for(int i=0;i<n; i++){
        // space
        for(int j=0; j<i; j++){
                cout << " ";
            }
        // star
        for(int j=0; j<2*n-(2*i+1); j++){
                cout << "*";
            }
        //space
        for(int j=0; j<i; j++){
                cout << " ";
            }
        
        cout << endl;
    }
}

void pattern_9 (int n){
    //     *        
    //    ***    
    //   *****
    //  *******
    // *********
    //  ******* 
    //   *****
    //    ***  
    //     *         
    
    // COMBO OF PATTERN 7 and 8
    pattern_7(n);
    pattern_8(n);
}

void pattern_10 (int n){
    // *
    // **
    // ***
    // ****
    // *****
    // ****
    // ***
    // **
    // *       
    
    for(int i=0;i<=2*n-1; i++){
        int stars = i;
        if(i> n) stars = 2*n-i;
        for(int j=0; j<stars; j++){
                cout << "*";
            }
        cout << endl;
    }
}

void pattern_11 (int n){
    // 1
    // 0 1
    // 1 0 1
    // 0 1 0 1
    // 1 0 1 0 1    
    
    for(int i=0;i<n; i++){
        int start;
        if(i%2 == 0) start =1;
        else start =0;
        for (int j=0; j<=i; j++){
            cout << start;
            start = 1- start;
        }
            cout << endl;
    }
}

void pattern_12 (int n){
    // 1      1
    // 12    21
    // 123  321
    // 12344321    
    int space = 2*(n-1);
    for(int i=0;i<n; i++){
    
        //numbers
        for(int j=0 ; j<=i;j++){
            cout << j+1;
        }

        //space
        for(int j=1 ; j<=space;j++){
            cout << " ";
        }

        //numbers
        for(int j=i+1 ; j>=1;j--){
            cout << j;
        }
        space-=2;
        cout << endl;
    }
}

void pattern_13 (int n){
    // 1
    // 23
    // 456
    // 78910    
    int num= 1;
    for(int i=0;i<n; i++){
        for (int j=0;j<=i;j++){
            cout<<num;
            num+=1;
        }
        cout << endl;
    }
}

void pattern_14 (int n){
    // A
    // AB
    // ABC
    // ABCD    
    for(int i=0;i<n; i++){
        char c = 'A';
        for (int j=0;j<=i;j++){
            cout<< c;
            c+=1;
        }
        cout << endl;
    }
}

void pattern_15 (int n){
    // ABCDE
    // ABCD
    // ABC
    // AB
    // A   
    for(int i=0;i<n; i++){
        char c = 'A';
        for (int j=0;j<n-i;j++){
            cout<< c;
            c+=1;
        }
        cout << endl;
    }
}

void pattern_16 (int n){
    // A
    // BB
    // CCC
    // DDDD
    // EEEEE   
    char c = 'A';
    for(int i=0;i<n; i++){
        for (int j=0;j<=i;j++){
            cout<< c;  
            
        }
        c+=1;
        cout << endl;
    }
}

void pattern_17 (int n){
    //    A
    //   ABA
    //  ABCBA
    // ABCDCBA
    //ABCDEDCBA   
    
    for(int i=0;i<n; i++){
        // space
        for(int j=0; j<n-i-1; j++){
                cout << " ";
            }
        // alphabets
        char c = 'A';
        for(int j=0; j< 2*i+1; j++){
                cout << c;
                if (j < (2*i+1)/2) c+=1;
                else c-=1;
            }
        //space
        for(int j=0; j<n-i-1; j++){
                cout << " ";
            }
        
        cout << endl;
    }
}

void pattern_18 (int n){
    // E
    // DE
    // CDE
    // BCDE
    // ABCDE   
    
    for(int i=0;i<n; i++){
       char c = 'A' + n-i-1;
       for(int j=0; j<=i;j++){
        cout << c;
        c +=1;
       }
        cout << endl;
    }
}

void pattern_19 (int n){
    // **********
    // ****  ****
    // ***    ***
    // **      **
    // *        *   
    // *        *
    // **      **
    // ***    ***
    // ****  ****
    // **********

    //FIRST HALF
    for(int i=0;i<n; i++){
        //stars
        for(int j=0;j<n-i;j++){
            cout<<"*";
        }

        //spaces
        for(int j=0;j<2*i;j++){
            cout<<" ";
        }

        //stars
        for(int j=0;j<n-i;j++){
            cout<<"*";
        }
        cout << endl;
    }

    //SECOND HALF
    for(int i=0;i<n; i++){
        //stars
        for(int j=0;j<=i;j++){
            cout<<"*";
        }

        //spaces
        for(int j=0;j<2*(n-i-1);j++){
            cout<<" ";
        }

        //stars
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        cout << endl;
    }
}

void pattern_20 (int n){
    // *        *
    // **      **
    // ***    ***
    // ****  ****
    // **********
    // ****  ****
    // ***    ***
    // **      ** 
    // *        *
 int spaces = 2*n-2;
    for(int i=1; i<=2*n-1;i++){
        int stars = i;
        if (i>n) stars = 2*n-i;

        for(int j=1; j<=stars;j++){
            cout << "*";
        }
        //spaces
        for(int j=1; j<=spaces; j++){
            cout << " ";
        }
        //stars
        for(int j=1; j<=stars;j++){
            cout << "*";
        }

        if(i<n) spaces -=2;
        else spaces+=2;
        cout << endl;
    }
      
}

void pattern_21 (int n){
    // ****
    // *  *
    // *  *
    // ****

    for(int i=1; i<=n;i++){
        
        int stars = 1;
        if (i ==1 || i==n) stars = n/2;

        int spaces = 0;
        if (i!=1 && i!=n ) spaces = n-2;

        //stars
        for(int j=1;j<=stars;j++){
            cout<<"*";
        }

        //spaces
        for(int j=1;j<=spaces;j++){
                    cout<<" ";
                }

        //stars
        for(int j=1;j<=stars;j++){
            cout<<"*";
        }
        cout << endl;
    }
      
}

void pattern_22 (int n){
    // 4444444
    // 4333334
    // 4322234
    // 4321234
    // 4322234
    // 4333334
    // 4444444

    for(int i=0; i<2*n-1;i++){
       for(int j=0; j<2*n-1;j++){
            int top = i;
            int left = j;
            int right = (2*n -2)-j;
            int bottom = (2*n -2)-i;
            cout << (n-(min(min(top, left), min(bottom, right))));
            }
        cout << endl;
    }
      
}


int main(){
    int n = 5;
    pattern_1(n);
    cout << "---------------------------"<<endl;
    pattern_2(n);
    cout << "---------------------------"<<endl;
    pattern_3(n);
    cout << "---------------------------"<<endl;
    pattern_4(n);
    cout << "---------------------------"<<endl;
    pattern_5(n);
    cout << "---------------------------"<<endl;
    pattern_6(n);
    cout << "---------------------------"<<endl;
    pattern_7(n);
    cout << "---------------------------"<<endl;
    pattern_8(n);
    cout << "---------------------------"<<endl;
    pattern_9(n);
    cout << "---------------------------"<<endl;
    pattern_10(n);
    cout << "---------------------------"<<endl;
    pattern_11(n);
    cout << "---------------------------"<<endl;
    pattern_12(n);
    cout << "---------------------------"<<endl;
    pattern_13(n);
    cout << "---------------------------"<<endl;
    pattern_14(n);
    cout << "---------------------------"<<endl;
    pattern_15(n);
    cout << "---------------------------"<<endl;
    pattern_16(n);
    cout << "---------------------------"<<endl;
    pattern_17(n);
    cout << "---------------------------"<<endl;
    pattern_18(n);
    cout << "---------------------------"<<endl;
    pattern_19(n);
    cout << "---------------------------"<<endl;
    pattern_20(n);
    cout << "---------------------------"<<endl;
    pattern_21(6);
    cout << "---------------------------"<<endl;
    pattern_22(4);
    cout << "---------------------------"<<endl;
    return 0;
}