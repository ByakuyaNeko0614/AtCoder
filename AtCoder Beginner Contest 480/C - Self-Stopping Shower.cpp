#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n, k, t;
    cin >> n >> k >> t;
    vector<long long> a;
    long long ans = 0;
    long long end = 0;
    for(int i = 0; i < n; i++){
      long long temp;
      cin >> temp;
      a.push_back(temp);
    }
    sort(a.begin(), a.end());
    long long i = 0;
    while(i < n){
      if(a[i] > t) break;
      if(end < a[i]){
        while(end < a[i]){
          end += k;
          ans++;
        }
      }
      end = max(end, a[i] + k);
      i++;
    }
    while(end < t){
      end += k;
      ans++;
    }
    cout << ans << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}