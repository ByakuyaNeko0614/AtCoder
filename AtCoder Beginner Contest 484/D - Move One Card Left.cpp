#include <bits/stdc++.h>
#define ll long long
#define w(t) while(t--)
using namespace std;

void solve() {
  int n;
  cin >> n;
  vector<int> a(n);
  vector<int> count(n+1, 0);
  vector<int> minus(n+1, 0);
  for(int i = 0; i < n; i++){
    cin >> a[i];
    count[a[i]]++;
  }
  ll ans = 1LL*n*(n+1)/2;
  ans=ans-n+1;
  for(int i = 0; i < n; i++){
    ans-=(minus[a[i]]);
    if(i>0&&a[i-1]==a[i]) ans-=(i-minus[a[i]]);
    minus[a[i]]++;
  }
  cout << ans << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}