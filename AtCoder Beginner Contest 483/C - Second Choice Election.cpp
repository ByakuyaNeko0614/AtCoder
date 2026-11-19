#include <bits/stdc++.h>
#define ll long long
#define w(t) while(t--)
using namespace std;

int pre[200000+10]={0};
void solve() {
  int n, m;
  cin >> n >> m;
  vector<vector<int>> escape(n+1);
  for(int i = 0; i < n; i++) pre[i]=0;
  for(int i = 0; i < m; i++){
    int x, y;
    cin >> x;
    cin >> y;
    pre[x]++;
    escape[x].push_back(y);
  }
  vector<pair<int, int>> rank;
  for(int i = 1; i <=n; i++){
    rank.push_back({pre[i]*-1, i});
  }
  sort(rank.begin(), rank.end());
  vector<int> plus(n+1, 0);
  for(int i = 1; i <= n; i++){
    int winner = rank[0].second;
    if(winner==i) winner=rank[1].second;
    for(auto& j : escape[i]){
      plus[j]++;
    }
    for(auto& j : escape[i]){
      if((pre[j]+plus[j] > pre[winner]+plus[winner]) || (pre[j]+plus[j] == pre[winner]+plus[winner] && j < winner)){
        winner = j;
      }
    }
    for(auto& j : escape[i]){
      plus[j]--;
    }
    cout << winner << "\n";
  }
  /*
  for(int i = 0; i < n; i++){
    vector<int> candidates(n+1, 0);
    for(int j = 0; j < m; j++){
      if(a[j].first==i+1) candidates[a[j].second]++;
      else candidates[a[j].first]++;
    }
    int temp = candidates[1];
    int winner = 1;
    for(int j = 2; j <= n; j++){
      if(candidates[j]>temp){
        temp=candidates[j];
        winner=j;
      }
    }
    cout << winner << "\n";
  }
  */
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}