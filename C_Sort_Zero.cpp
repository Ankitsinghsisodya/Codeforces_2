#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    map<int, vector<int>> ankit;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        ankit[a[i]].push_back(i);
    }
    set<int> unsorted;
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] > a[i + 1])
            unsorted.insert(i);
    }
    int ans = 0;
    while (!unsorted.empty())
    {
        
        int i = *unsorted.begin();
        int x;
        // if (a[i] > 0)
            x = a[i];
            // else
            // {
                // x = a[i + 1];
            // }
            for(auto j : ankit[x]){
                a[j] = 0;
                unsorted.erase(j);
                unsorted.erase(j-1);
                if(j > 0 && a[j-1] > a[j])
                unsorted.insert(j-1);
            }
            ans++;
    }
    cout << ans << "\n";
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