#include<bits/stdc++.h>
#define eb push_back
#define ll long long
#define ull unsigned long long
#define w(t) while(t--)
#define F first
#define S second
#define pii pair<int,int>
#define pll pair<ll,ll>//banis
using namespace std;
vector<pii> from[200010];
int ans[200010],t[200010],u[200010],v[200010];
bool ch[200010];
void DFS(int po){
	ch[po]=1;
	for(auto &i:from[po]){
		if(!ch[i.first]) DFS(i.first);
		if(i.second==1) ans[po]=max(ans[po],ans[i.first]+1);
		else ans[po]=max(ans[po],ans[i.first]);
	}
	return;
}
int main(){
	ios::sync_with_stdio(0);cin.tie(0);
	int n,q;
	cin>>n>>q;
	for(int i=0;i<q;i++){
		cin>>t[i]>>u[i]>>v[i];
		from[v[i]].eb({u[i],t[i]});
	}
	for(int i=1;i<=n;i++) ans[i]=1;
	for(int i=1;i<=n;i++){
		if(!ch[i]){
			DFS(i);
		}
	}
	for(int i=0;i<q;i++){
		if(t[i]==1&&ans[u[i]]>=ans[v[i]]){
			cout<<"No";
			return 0;
		}
		if(t[i]==0&&ans[u[i]]>ans[v[i]]){
			cout<<"No";
			return 0;
		}
	}
	cout<<"Yes\n";
	for(int i=1;i<=n;i++) cout<<ans[i]<<' ';
	return 0;
}