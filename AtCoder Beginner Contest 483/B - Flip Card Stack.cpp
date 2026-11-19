#include <bits/stdc++.h>
#define ll long long
#define w(t) while(t--)
using namespace std;

void solve() {
  int n, q;
  cin >> n >> q;
  vector<int> a(n);
  vector<int> k(q);
  vector<int> st;
  for(int i = 0; i < q; i++){
    cin >> k[i];
  }
  for(int i = 0; i < n; i++){
    a[i]=i+1;
  }
  for(int i = 0; i < q; i++){
    int times = k[i];
    for(int j = 0; j < times; j++){
      st.push_back(a[0]*-1);
      a.erase(a.begin()+0);
    }
    for(int j = 0; j < times; j++){
      a.insert(a.begin(), st[0]);
      st.erase(st.begin()+0);
    }
  }
  for(int i = 0; i < n; i++){
    cout << a[i] << "\n";
  }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}