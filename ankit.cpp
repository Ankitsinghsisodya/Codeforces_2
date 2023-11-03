#include<bits/stdc++.h>
#define ll long long
using namespace std;


int main(){

    // ios_base::sync_with_stdio(false);
    // cin.tie(nullptr);
    // cout.tie(nullptr);

    int n ;
    cout << "Enter the number whose consecutive sum you require: ";
    cin >> n;
    // int sum = 0;
    // for(int i = 1; i <= n; i++){
    //     sum += i;
    // }
    cout << "the sum of consecutive number is: " << ((n)*(n+1))/2 << "\n";
    return 0;
}