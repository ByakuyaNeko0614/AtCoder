#include <bits/stdc++.h>
#define ll long long
#define w(t) while(t--)
using namespace std;

void solve() {
  int n;
  cin >> n;
  vector<int> a(n);
  vector<int> b(n);
  for(int i = 0; i < n; i++){
    cin >> a[i];
  }
  for(int i = 0; i < n; i++){
    cin >> b[i];
  }
  if(a==b){
    cout << "Yes" << "\n";
    return;
  }
  for(int tryy = 0; tryy <2; tryy++){
    bool valid = true;
  int skipa=-1;
  int skipb=-1;
  int i = 0;
  int j = 0;
  while(i<n&&j<n){
    if(a[i]==b[j]){
      i++;
      j++;
    } else if(tryy==0&&skipa==-1){
      skipa=a[i];
      i++;
    } else if(tryy==1&&skipb==-1){
      skipb=b[j];
      j++;
    }else if(skipa==-1){
      skipa=a[i];
      i++;
    }else if(skipb==-1){
      skipb=b[j];
      j++;
    }else{
      valid=false;
      break;
    }
  }
  if(i < n) skipa = a[i];
  if(j < n) skipb = b[j];
  if(skipa==skipb&&valid){
  cout << "Yes" << "\n";
return;}
}
cout << "No\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}