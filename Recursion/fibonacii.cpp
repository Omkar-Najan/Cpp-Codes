#include <iostream>
using namespace std;
/*
Get fibonacii of N.
*/
int fibonacii(int n){
    if(n == 0 || n == 1){
        return n;
    }
    return(fibonacii (n-1) + fibonacii(n-2));
}

int main(){
    int n;
    cin >>n;
    cout << fibonacii(n) << endl;
}