#include <iostream>
#include<algorithm>
using namespace std;
/*
Time Complexity : O(n)
only limited to small number of positive integers. 
space Complexity: O(max(Arr));
*/

void countSort(int arr[],int n){
    int k = arr[0];
    for(int i=0;i<n;i++){
        k = max(k,arr[i]); 
    }
    int count[10] = {0};
    for(int i =0;i<n;i++){
        count[arr[i]]++;
    }

    for(int i = 1;i<=k;i++){
        count[i] += count[i-1];
    }
    int output[n];
    for(int i=n-1;i>=0;i--){
        output[--count[arr[i]]] = arr[i];
    }
    for(int i = 0;i<n;i++){
        arr[i] = output[i];
    }
}

int main(){
    int arr[] = {1,3,2,3,4,1,6,4,3};
    int n = sizeof(arr)/sizeof(arr[0]);

    countSort(arr,n);
    for(int i=0;i<n;i++){
        cout << arr[i] <<" ";
    }
    return 0;
}