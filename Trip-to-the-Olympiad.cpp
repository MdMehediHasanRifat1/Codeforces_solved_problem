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
	    ll l,r,a=0,b=0,c=0,pos,pos2;
	    cin>>l>>r;
	    ll i,n,j;
	    n=log2(r);
	    for(i=n;i>=0;i--)
	    {
	        if(((r>>i)&1)&&!((l>>i)&1))
	        {
	            for(j=0;j<i;j++)
	            {
	                a+=pow(2,j);
	            }
	            pos=i;
	            break;
	        }
	    }
	    for(i=n;i>pos;i--)
	    {
	        if(((l>>i)&1))
	            a+=pow(2,i);
	    }
	    
	    for(i=n;i>=0;i--)
	    {
	        if(!((l>>i)&1)&&((r>>i)&1))
	        {
	            b+=pow(2,i);
	            pos=i;
	            break;
	        }
	    }
	    for(i=n;i>pos;i--)
	    {
	        if(((r>>i)&1))
	            b+=pow(2,i);
	    }
	    for(i=l;i<=r;i++)
	    {
	        if(i!=a&&i!=b)
	        {
	            c=i;
	            break;
	        }
	    }
	    cout<<a<<" "<<b<<" "<<c<<endl;
	    //cout<<(a^b)+(a^c)+(b^c)<<endl;
	}
	return 0;

}