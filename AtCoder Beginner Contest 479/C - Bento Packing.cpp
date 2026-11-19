#include <bits/stdc++.h>
using namespace std;
int n;
long long limit;
long long ans = 0;
vector<pair<long long, long long>> arr;
void banis(int i, long long currLimit, long long curr){
  if(currLimit > limit) return;
  if(i==n){
    ans = max(ans, curr);
    return;
  }
  banis(i+1, currLimit, curr);
  banis(i+1, currLimit+arr[i].second, curr+arr[i].first);
}

void solve() {
    cin >> n;
    cin >> limit;
    arr.resize(n);
    for(int i = 0; i < n; i++){
      cin >> arr[i].first >> arr[i].second;
    }
    banis(0, 0, 0);
    cout << ans << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}