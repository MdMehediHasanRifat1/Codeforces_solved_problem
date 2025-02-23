#include <bits/stdc++.h>
using namespace std;
#define ll long long 
int main() {
	ll t;
	cin>>t;
	while(t--)
	{
	    ll n,i;
	    cin>>n;
	    ll a,ans=1,p,u=-2,v=-1;
	    cin>>p;
	    for(i=1;i<n;i++)
	    {
	        cin>>a;
	        if(p<a)
    	        v=1;
    	    else if(p>a)
    	        v=-1;
    	    else
    	       continue;
    	   if(u!=v)
    	   {
    	       ans++;
    	   }
    	   u=v;
    	   p=a;
	    }
	    cout<<ans<<endl;
	}
	return 0;

}
