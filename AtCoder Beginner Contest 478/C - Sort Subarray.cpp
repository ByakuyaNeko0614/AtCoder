#include <bits/stdc++.h>
using namespace std;

bool solve(){
    int N, K;
    cin >> N >> K;
    vector<int> A(N, 0);
    for(int i = 0; i < N; i++) cin >> A[i];

    vector<int> sortedArr = A;
    sort(sortedArr.begin(), sortedArr.end());

    int left = -1, right = -1;
    for(int i = 0; i < N; i++){
      if(A[i] != sortedArr[i]){
        if(left==-1) left = i;
        right = i;
      }
    }
    if(left==-1) return true;
    if(right - left + 1 > K) return false;
    int start = max(0, right - K + 1);
    sort(A.begin()+start, A.begin()+start + K);
    return A == sortedArr;
}
int main() {
  ios::sync_with_stdio(false);
    cin.tie(nullptr);
    if(solve()){
      cout << "Yes\n";
    } else {
      cout << "No\n";
    }

    return 0;
}
/*
bool chmin[200010],chmax[200010];
int arr[200010];
int main(){
	ios::sync_with_stdio(0);cin.tie(0);
	deque<int> dqmax,dqmin;
	bool ans=0;
	int n,k;
	cin>>n>>k;
	for(int i=1;i<=n;i++) cin>>arr[i];
	arr[n+1]=n+1;
	chmin[0]=1;
	chmin[1]=1;
	for(int i=2;i<=n;i++){
		if(arr[i]>=arr[i-1]) chmin[i]=1;
		else break;
	}	
	chmax[n+1]=1;
	chmax[n]=1;
	for(int i=n;i>0;i--){
		if(arr[i]>=arr[i-1]) chmax[i-1]=1;
		else break;
	}
	for(int i=1;i<k;i++){
		while(dqmax.size()&&arr[i]>dqmax.back()) dqmax.pop_back();
		dqmax.push_back(arr[i]);
		while(dqmin.size()&&arr[i]<dqmin.back()) dqmin.pop_back();
		dqmin.push_back(arr[i]);
	}
	for(int i=k;i<=n;i++){
		while(dqmax.size()&&arr[i]>dqmax.back()) dqmax.pop_back();
		dqmax.push_back(arr[i]);
		while(dqmin.size()&&arr[i]<dqmin.back()) dqmin.pop_back();
		dqmin.push_back(arr[i]);
		if(chmin[i-k]&&chmax[i+1]&&dqmin.front()>=arr[i-k]&&dqmax.front()<=arr[i+1]) ans=1;
		if(dqmax.front()==arr[i-k+1]) dqmax.pop_front();
		if(dqmin.front()==arr[i-k+1]) dqmin.pop_front();
	}
	cout<<(ans?"Yes":"No");
	return 0;
}
*/