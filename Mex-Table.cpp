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
	    ll n,m;
	    cin>>n>>m;
	    cout<<max(n,m)+1<<endl;
	}
	return 0;

}