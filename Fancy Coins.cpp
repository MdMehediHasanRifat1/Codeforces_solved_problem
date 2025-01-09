#include <bits/stdc++.h>
using namespace std;
#define ll long long 
int m,k,a,b;
int func(int n)
{
    int f1=m-k*n;
    return max(0,f1-a) + max(0,n-b);
}
int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	    cin>>m>>k>>a>>b;
	    int l,h,mid,i;
	    l=0;
	    h=m/k;
	    while(h-l>2)
	    {
	        mid=(l+h)/2;
	        if(func(mid)<func(mid+1))
	        {
	            h=mid+1;
	        }
	        else
	        {
	            l=mid;
	        }
	    }
	    int ans=1e9;
	    for(i=l;i<=h;i++)
	    {
	        ans=min(ans,func(i));
	    }
	    cout<<ans<<endl;
	}
	return 0;
}
