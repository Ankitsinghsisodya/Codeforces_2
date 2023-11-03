#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    int hc, dc;
    cin >> hc >> dc;
    int hm, dm;
    cin >> hm >> dm;
    // h --> denote the health
    // d --> denote the attack
    int k, w, a;
    cin >> k >> w >> a;
    // k --> bank balance
    // w --> attack power increase
    // a --> health increase
    while (hm > 0 && hc > 0)
    {
        hm -= dc;
        hc -= dm;
    }
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}