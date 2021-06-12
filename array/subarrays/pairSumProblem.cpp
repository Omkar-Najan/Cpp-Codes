#include<iostream>
using namespace std;
// check if there exist two element in an array such that 
// their sum is equal to given k;


bool pairsum(int arr[], int n , int k){
    for(int i=0;i<n;i++){
        for (int j=i+1;j<n;j++){
            if(arr[i] + arr[j]==k){
                cout << i<<" "<<j<< endl;
                return true;
            }
        }
    }
    return false;
}

// if input is sorted array 
// efficient approach
// time complexity  O(n)
bool pairsumpointers(int arr[] , int n,int k){
    int low = 0;
    int high = n-1;

    while(low < high){
        if(arr[low] + arr[high] == k){
            cout << low << " " << high << endl;
            return true;
        }else if(arr[low] + arr[high] > k){
            high--;
        }else{
            low++;
        }
    }
    return false;
}


int main(){
    int arr[] = {2,4,7,11,14,16,20,21};
    int k = 31;
    cout << pairsumpointers(arr,8,k);
    return 0;
}