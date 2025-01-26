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
        string a;
        cin>>a;
        ll c=0;
        for(int i=0;i<a.size();i++)
        {
            if(a[i]=='1')
                c++;
        }
        cout<<c<<endl;
    }
	return 0;

}