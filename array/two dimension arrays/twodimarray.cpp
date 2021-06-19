#include<iostream>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> arr[i][j];
        }
    }

    // cout << "Matrix is : \n";
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<m;j++){
    //         cout << arr[i][j]<< " ";
    //     }
    //     cout << endl;
    // }
    // int x;
    // cin >> x;
    // // Searching in matrix
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<m;j++){
    //         if(arr[i][j] == x){
    //         cout << arr[i][j]<< " ";
    //         }
    //     }
    //     cout << endl;
    // }
    
    // spiral Order Matrix traversal
    int row_start = 0;
    int row_end = n-1 , col_start = 0,col_end = m-1;
    
    while(row_start <= row_end && col_start <= col_end){
        // for row start
        for(int col = col_start; col<=col_end;col++){
            cout << arr[row_start][col] << " ";
        }
        row_start++;

        // for col end
        for(int row = row_start;row<=row_end;row++){
            cout << arr[row][col_end]<<" ";
        }
        col_end--;
        // for row end
        for(int col = col_end ; col>= col_start;col--){
            cout<< arr[row_end][col]<<" ";
        }
        row_end--;
        // for col start;
        for(int row = row_end;row >= row_start ; row--){
            cout << arr[row][col_start]<<" ";
        }
        col_start++;
    }

    return 0;
}