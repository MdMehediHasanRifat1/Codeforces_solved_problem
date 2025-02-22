#include <bits/stdc++.h>
using namespace std;
#define ll long long 
int main() {
	ll t;
	cin>>t;
	while(t--)
	{
	    ll n,i,k,j,p,q,mx,ans=1e18;
	    cin>>n>>k;
	    ll a;
	    vector<ll>vec;
	    vector<ll>v[k+9];
	    for(i=0;i<n;i++)
	    {
	        cin>>a;
	        vec.push_back(a);
	        v[a].push_back(i);
	    }
	    sort(vec.begin(),vec.end());
	    vec.erase(unique(vec.begin(),vec.end()),vec.end());
	    for(i=0;i<vec.size();i++)
	    {
	        v[vec[i]].push_back(n);
	    }
	    for(i=0;i<vec.size();i++)
	    {
	        priority_queue<ll>pq;
			pq.push(v[vec[i]][0]);
			for(j=1;j<v[vec[i]].size();j++)
			{
				p=v[vec[i]][j];
				q=v[vec[i]][j-1];
				pq.push(p-q-1);
			}
			mx=pq.top();
			pq.pop();
			mx/=2;
			pq.push(mx);
			ans=min(ans,pq.top());
	    }
		cout<<ans<<endl;
	}
	return 0;
}
