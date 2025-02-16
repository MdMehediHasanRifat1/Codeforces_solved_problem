#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define yes printf("YES\n")
#define no printf("NO\n")
int main() {
	
	ll t;
	cin>>t;
	while(t--)
	{
	    string a,b="i";
	    cin>>a;
	    ll ans=1,i,n;
	    n=a.size();
	    bool f=1;
	    for(i=1;i<n;i++)
	    {
	        if(a[i]==a[i-1])
	        {
	            f=0;
	            break;
	        }
	    }
	    if(f)
	        ans=n;
	    cout<<ans<<endl;
	}
	return 0;

}