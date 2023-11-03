// #include <iostream>
// #include <vector>
 
// using namespace std;
 
// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int n;
//         cin >> n;
//         vector<int> a(n + 1);
//         for (int i = 1; i <= n; i++) {
//             cin >> a[i];
//         }
//         if (a[1] != n) {
//             cout << "NO" << '\n';
//             continue;
//         }
//         vector<int> b;
//         for (int i = n; i >= 1; i--) {
//             while (b.size() < a[i]) {
//                 b.push_back(i);
//                 cout << i << "\n";
//                 for(auto i : b){
//                     cout << i << " ";
//                 }
//                 cout << "\n";
//             }
//         }

//         bool meow = true;
//         for (int i = 1; i <= n; i++) {
//             if (a[i] != b[i - 1]) {
//                 cout << "NO" << '\n';
//                 meow = false;
//                 break;
//             }
//         }
//         if (meow) {
//             cout << "YES" << '\n';
//         }
//     }
//     return 0;
// }

#include<bits/stdc++.h>
#define ll long long
using namespace std;


int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cout << "HELLO";

    return 0;
}