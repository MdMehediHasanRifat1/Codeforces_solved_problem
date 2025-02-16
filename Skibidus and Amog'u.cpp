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
	    ll n=a.size();
	    a.replace(n-2,2,b);
	    cout<<a<<endl;
	}
	return 0;

}