#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll mini(ll a, ll b, ll c){
    return min(min(a,b),c);
}
void solve()
{

    ll a, b, c;
    cin >> a >> b >> c;
    ll count = 0;
    if (((a + b + c)%9 == 0) && (mini(a,b,c) >= (a+b+c)/9))
        cout << "YES\n";
    else
        cout << "NO\n";
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    ll t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}