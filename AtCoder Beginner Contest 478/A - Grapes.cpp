#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M;
    cin >> N >> M;
    vector<int> ans(N, 0);
    int least = M / N;
    for(int i = 0; i < N; i++){
      ans[i] = least;
    }
    int more = M % N;
    for(int i = 0; i < more; i++){
      ans[i] ++;
    }

    for(int i = 0; i < N; i++){
      cout << ans[i] << "\n";
    }

    return 0;
}

/*
int main(){
	ios::sync_with_stdio(0);cin.tie(0);
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++) cout<<(m/n+(m%n>i?1:0))<<'\n';
	return 0;
}
*/