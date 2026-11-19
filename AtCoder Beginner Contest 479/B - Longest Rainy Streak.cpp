#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int sum = 0;
    int curr = 0;
    for(int i = 0; i < n; i++){
      if(s[i]=='R'){
        curr++;
        sum = max(sum, curr);
      } else {
        curr = 0;
      }
    }
    cout << sum << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}