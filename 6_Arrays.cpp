#include <bits/stdc++.h>

using namespace std;

void largestElementInArray(int arr[], int n){
    int largest = arr[0];
    for(int i=1; i<n;i++){
        if(arr[i]> largest) largest = arr[i];
    }
    cout << largest <<endl;
}

void secondLargestElementInArray(int arr[], int n){
    int largest = arr[0];
    int sLargest = -1;
    for(int i=1;i<n;i++){
        if(arr[i] > largest){
            sLargest = largest;
            largest = arr[i];
        }
        else if(arr[i] < largest && arr[i] > sLargest) sLargest = arr[i];
    }
    cout << sLargest;
}

void isSorted(int arr[], int n){
    bool sorted = true;
    for(int i=1;i<n;i++){
        if(arr[i] < arr[i-1]){
            sorted = false;
            break;
        }
    }
    cout << sorted << endl;
}

void numberOfUniqueElements(int arr[], int n){
    int i=0;
    for (int j=1;j<n;j++){
        if(arr[i] != arr[j]){
            arr[i+1] = arr[j];
            i++;
        }
    }
    cout << i+1;
}

void leftRotateArray(int arr[], int n){
    int temp = arr[0];
    for(int i=1;i<n;i++){
        arr[i-1] = arr[i];
    }
    arr[n-1] = temp;
    for(int i=0;i<n;i++){
        cout << arr[i];
    }
}

void leftRotateArrayByKPlaces(int arr[], int n , int k){
        k = k%n;
        // cout << k;
        reverse(arr, arr+k);
        reverse(arr+k, arr+n);
        reverse(arr, arr+n);
        for(int i=0;i<n;i++){
            cout << arr[i];
        }
}

void moveZerosToEnd(int arr[], int n){
    int i=-1;
    for(int j=0;j<n;j++){
        if(arr[j] == 0){
            i=j;
            break;
        }
    }
    if(i==-1){
        for(int k=0;k<n;k++) cout << arr[k];
        return;
    }
    for(int j=i+1;j<n;j++){
        if(arr[j] !=0 ){
            swap(arr[i], arr[j]);
            i++;
        }
    }
    for(int k=0;k<n;k++) cout << arr[k];
}

string linearSearch(int arr[], int n, int k){
    for(int i=0;i<n;i++){
        if(arr[i] == k) {
            return "Found";
        }
    }
    return "Not Found";
}

void uninonOfTwoArrays(int arr1[], int n1, int arr2[], int n2){
    int i=0;
    int j=0;
    vector<int> u;
    while(i<n1 && j<n2){
        if(arr1[i] <= arr2[j]){
            if(u.size() == 0 || u.back() != arr1[i]){
                u.push_back(arr1[i]);
            }
            i++;
        }
        else if(arr1[i] > arr2[j]){
            if(u.size() == 0 || u.back() != arr2[j]){
                u.push_back(arr2[j]);
            }
            j++;
        }
    }
    while(i<n1){
        if(u.size() == 0 || u.back() != arr1[i]){
            u.push_back(arr1[i]);
        }
        i++;
    }
    while(j<n2){
        if(u.size() == 0 || u.back() != arr2[j]){
            u.push_back(arr2[j]);
        }
        j++;
    }
    for(auto it:u) cout << it;
}

void intersectionOfTwoArrays(int arr1[], int n1, int arr2[], int n2){
    int i=0;
    int j=0;
    vector<int> intr;
    while(i<n1 && j<n2){
       if(arr1[i] < arr2[j]) i++;
       else if(arr1[i] > arr2[j]) j++;
       else {
        intr.push_back(arr1[i]);
        i++;
        j++;
       }
    }
    for(auto it:intr) cout << it;
}


int main(){

    int n;
    cin >> n;
    int k;
    cin >> k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    largestElementInArray(arr, n);
    secondLargestElementInArray(arr, n);
    isSorted(arr, n);
    numberOfUniqueElements(arr , n);

    leftRotateArray(arr , n);
    leftRotateArrayByKPlaces(arr , n, k);

    moveZerosToEnd(arr,n);
    cout << linearSearch(arr, n, k);

    int n1;
    cin >> n1;
    int arr1[n1];
    int n2;
    cin >> n2;
    int arr2[n2];
    for(int i=0;i<n1;i++) cin >> arr1[i];
    for(int i=0;i<n2;i++) cin >> arr2[i];

    uninonOfTwoArrays(arr1, n1, arr2, n2);
    intersectionOfTwoArrays(arr1, n1, arr2, n2);
    return 0;
}