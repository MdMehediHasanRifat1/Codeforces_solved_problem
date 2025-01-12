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
	    ll n,a,b,i;
    	cin>>n>>a>>b;
    	ll diff=abs(a-b);
    	if(diff%2==0)
    	    yes;
    	else 
    	    no;
	}
	return 0;

}
