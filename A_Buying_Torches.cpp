#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll x, y, k;
    cin >> x >> y >> k;
    // x --> the number of stick you can buy with one stick
    // y ==> the number of stick needed for one coal
    // k ==> the number of torches required
    // y equal to k is required
    
    ll total_req = k*y + k - 1;
    ll count = (total_req + x - 2)/(x-1);
  
    // ll count = 0;
    ll sticks = 1;
    // while(total_req > sticks){
    //     count++;
        
    //     sticks += (x-1);
    //     cout << "sticks -> " << sticks << "\n";
    // }
    cout << count + k  << "\n";

}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    ll t;
    cin >> t;
    while(t--)solve();

    return 0;
}
