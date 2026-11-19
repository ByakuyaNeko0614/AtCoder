#include <bits/stdc++.h>
#define ll long long
#define w(t) while(t--)
using namespace std;

void solve() {
  int n, y;
  cin >> n >> y;
  vector<int> a(n, 0);
  for(int i = 0; i < n; i++){
    cin >> a[i];
  }
  int ans = 0;
  for(int i = 1; i <= n; i++){
    if(i!=n) if((a[i-1] < y && a[i]>y) || (a[i-1]>y&&a[i]<y)) ans++;
    if(a[i-1]==y) ans++;
  }
  cout << ans << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}