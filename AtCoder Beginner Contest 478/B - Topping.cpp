#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    long long V;
    long long answer = -1;
    cin >> N >> V;
    vector<long long> W(N+1, 0);

    for(int i = 1; i < N+1; i++){
      cin >> W[i];
    }

    vector<long long> ans(N+1, 0);
    for(int i = 1; i <= N; i++){
      ans[i] = max(ans[i-1], W[i]);
    }

    for(int i = 2; i < N; i++){
      for(int j = i+1; j <= N; j++){
        long long stack = V - i - j;
        long long maxI = min((long long)i-1, stack);
        if(maxI >= 1){
          long long curr = W[i] + W[j] + ans[maxI];
          answer = max(curr, answer);
        }
      }
    }
    cout << answer << "\n";
    return 0;
}
/*
int w[110];
int main(){
	ios::sync_with_stdio(0);cin.tie(0);
	int n,v,ans=0;
	cin>>n>>v;
	for(int i=0;i<n;i++) cin>>w[i];
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			for(int k=j+1;k<n;k++){
				if(i+j+k+3<=v) ans=max(ans,w[i]+w[j]+w[k]);
				else break;
			}
		}
	}
	cout<<ans;
	return 0;
}
*/