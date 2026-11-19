#include <bits/stdc++.h>
#define ll long long
#define w(t) while(t--)
using namespace std;

void solve() {
  int a, b;
  cin >> a >> b;
  int ans = 0;
  if(a+b>=10) ans = 2;
  else ans = 1;
  cout << ans << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}