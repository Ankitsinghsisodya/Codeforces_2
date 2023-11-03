#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());

    if (v[0] == v[n - 1])
    {
        cout << -1 << "\n";
        return;
    }

    set<int> st;
    for (int i = 0; i < n; i++)
        st.insert(v[i]);
    int x = (*(++st.begin()) - *st.begin());
    // cout << x << " " << "\n";
    for (auto it = st.begin(); it != --st.end(); it++)
    {

        int y = *(++it) - *(--it);
        x = gcd(abs(x), abs(y));
    }
    cout << x << " "
         << "\n";
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
