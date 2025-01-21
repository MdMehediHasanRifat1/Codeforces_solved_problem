#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define yes printf("YES\n")
#define no printf("NO\n")
int main() {
    
    int t;
    cin>>t;
    while(t--)
    {
        ll n,i,m;
        cin>>n;
        ll a;
        vector<ll>even,odd;
        ll ans=0;
        for(i=0;i<n;i++)
        {
            cin>>a;
            if(a%2==0)
                even.push_back(a);
            else
                odd.push_back(a);
        }
        if(even.size()>=1)
        ans=1;
        
        if(ans==1)
        {
            ans+=odd.size();
        }
        else
        {
            ans+=odd.size()-1;
        }
        cout<<ans<<endl;
    }
    return 0;

}
