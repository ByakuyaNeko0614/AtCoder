#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    int sum = 0;
    for(int i = 0; i < n; i++){
      int a=0;
      cin >> a;
      if(i%2==0){
        sum += a;
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