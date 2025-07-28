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
	    ll n,i,j;
	    cin>>n;
	    ll a[n],mn=1e16;
	    for(i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    string s="L";
	    ll t=1;
	    i=1;
	    j=n-1;
	    n--;
	    while(n--)
	    {
	        if(t==1)
	        {
	            if(a[i]<a[j])
	            {
	                s+='L';
	                i++;
	            }
	            else
	            {
	                s+='R';
	                j--;
	            }
	            t=2;
	        }
	        else
	        {
	            if(a[i]<a[j])
	            {
	                s+='R';
	                j--;
	            }
	            else
	            {
	                s+='L';
	                i++;
	            }
	            t=1;
	        }
	    }
	    cout<<s<<endl;
	}
	return 0;
}