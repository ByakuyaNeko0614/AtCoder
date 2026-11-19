#include <bits/stdc++.h>
#define ll long long
#define w(t) while(t--)
using namespace std;

void solve() {
  int n;
  cin >> n;
  int ans;
  if(n%2==1) ans=n/2+1;
  else ans=n/2;
  cout << ans << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}