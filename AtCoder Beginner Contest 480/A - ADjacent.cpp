#include <bits/stdc++.h>
using namespace std;

void solve() {
    string n;
    string m;
    cin >> n >> m;
    if((n[0]=='A' && m[0]=='D') || (n[1]=='A' && m[1]=='D') || (n[0]=='D' && m[0]=='A') || (n[1]=='D' && m[1]=='A') || (n[0]=='A' && n[1]=='D') || (m[1]=='A' && m[0]=='D') || (n[0]=='D' && n[1]=='A') || (m[1]=='D' && m[0]=='A')){
      cout << "Yes\n";
    } else {
      cout << "No\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}