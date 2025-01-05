#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define yes printf("YES\n")
#define no printf("NO\n")
struct arr 
{
  ll f,s;  
};
bool cmp(arr a1,arr a2)
{
    if(a1.s!=a2.s)
        return a1.s<a2.s;
    else
        return a1.f<a2.f;
}
int main() {
	
	ll t;
	cin>>t;
	while(t--)
	{
	    ll n,k,i,x;
	    cin>>n>>k;
	    vector<ll>v;
	    map<ll,ll>mp;
	    for(i=0;i<n;i++)
	    {
	        cin>>x;
	        v.push_back(x);
	        mp[x]++;
	    }
	    sort(v.begin(),v.end());
	    v.erase(unique(v.begin(),v.end()),v.end());
	    n=v.size();
	    arr a[n];
	    for(i=0;i<n;i++)
	    {
	        a[i].f=v[i];
	        a[i].s=mp[v[i]];
	    }
	    sort(a,a+n,cmp);
	    for(i=0;i<n;i++)
	    {
	        if(a[i].s>=k)
	        {
	            a[i].s=a[i].s-k;
	            k=0;
	            break;
	        }
	        else
	        {
	            k-=a[i].s;
	            a[i].s=0;
	        }
	    }
	    ll c=0;
	    for(i=0;i<n;i++)
	    {
	        if(a[i].s>0)
	            c++;
	    }
	    if(c==0)
	        c=1;
	    cout<<c<<endl;
	}
	return 0;

}