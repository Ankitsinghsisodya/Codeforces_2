#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    set<int>magic;
    for(int i = 0; i < n - 1; i++){
        if(a[i] < a[i+1])magic.insert(i);
    }

    for (int i = 0; i < k; i++)
    {

        if (magic.empty()) {
            cout << -1 << "\n";
            return;
        }
       int j = *magic.begin();
       if(magic.size() != 0 &&  i == k - 1){
            cout << j + 1 << "\n";
            return;
       }
        a[j]++;
        magic.erase(j);
        magic.erase(j+1);
        magic.erase(j-1);
        if(j > 0 && a[j] > a[j-1])magic.insert(j-1);
        if(j < n -1 && a[j] < a[j + 1])magic.insert(j);
        if(j < n -2 && a[j+1] < a[j+2])magic.insert(j+1);

        
    }
    cout << -1 << "\n";
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