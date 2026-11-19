#include <bits/stdc++.h>
#define ll long long
#define w(t) while(t--)
using namespace std;

void solve() {
  int n;
  cin >> n;
  unordered_map<string, int> check;
  int currID = 1;
  for(int i = 0; i < n; i++){
    string x;
    cin >> x;
    if(check.count(x)) cout << check[x] << "\n";
    else check[x] = currID, cout << currID << "\n", currID++;
  }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}