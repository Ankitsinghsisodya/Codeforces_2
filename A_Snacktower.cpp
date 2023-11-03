#include<bits/stdc++.h>
#define ll long long
using namespace std;


int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;
    int next = n;
    set<int>king;
    vector<int>a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
        king.insert(a[i]);
        while(!king.empty() && *king.rbegin() == next){
            cout << next << " ";
            king.erase(next);
            next--;
        }
        cout << "\n";
    }

    return 0;
}