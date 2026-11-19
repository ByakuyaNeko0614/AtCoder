#include <bits/stdc++.h>
using namespace std;
bool diffLessThanOne(string vote, string candidate){
  if(vote.size() != candidate.size()) return false;
  int diff = 0;
  for(int i = 0; i < vote.size(); i++){
    if(vote[i] != candidate[i]){
      diff++;
      if(diff > 1){
        return false;
      }
    }
  }
  return true;
}

void solve() {
    int n;
    int m;
    cin >> n >> m;
    vector<pair<string, int>> candidates(n);
    for(int i = 0; i < n; i++){
        cin >> candidates[i].first;
    }
    for(int i = 0; i < n; i++){
        candidates[i].second = 0;
    }
    for(int i = 0; i < m; i++){
      string vote;
      cin >> vote;
      int close = 0;
      string closeCandidate = "";
      bool found = false;
      for(int j = 0; j < n; j++){
        if(candidates[j].first == vote){
          candidates[j].second++;
          found = true;
          break;
        }
        if(!found&&diffLessThanOne(vote, candidates[j].first)){
          closeCandidate = candidates[j].first;
          close++;
        }
      }
      if(!found&&close == 1){
          for(int j = 0; j < n; j++){
            if(candidates[j].first == closeCandidate){
              candidates[j].second++;
              break;
            }
          }
        }
    }
    for(int i = 0; i < n; i++){
      cout << candidates[i].second << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}