#include <bits/stdc++.h>
using namespace std;
//banis
struct aaa{
	int l,r,x;
}arr[200010];
int pos[200010];
int main(){
	ios::sync_with_stdio(0);cin.tie(0);
	int n,q,ans=0;
	priority_queue<pii> pq;
	cin>>n>>q;
	for(int i=0;i<q;i++) cin>>arr[i].l>>arr[i].r>>arr[i].x;
	sort(arr,arr+q,[](aaa gg,aaa hh){
		return gg.l<hh.l;
	});
	int po=0;
	for(int i=1;i<=n;i++){
		while(po<q&&arr[po].l==i){
			if(!pos[arr[po].x]) ans++;
			pos[arr[po].x]=max(pos[arr[po].x],arr[po].r);
			pq.push({-pos[arr[po].x],arr[po].x});
			po++;
		}
		cout<<ans<<' ';
		while(pq.size()&&-((pq.top()).first)==i){
			pii tt=pq.top();
			pq.pop();
			if(pos[tt.second]==-tt.first){
				ans--;
				pos[tt.second]=0;
			}
		}
	}
	return 0;
}
*/