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

int main(){

    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    largestElementInArray(arr, n);
    secondLargestElementInArray(arr, n);
    isSorted(arr, n);
    numberOfUniqueElements(arr , n);
    return 0;
}