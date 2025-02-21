#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b,c,t1,t2,g,l,t3,t4;
        cin>>a>>b>>c;
        g=gcd(b,c);
        l=(b*c)/g;
        t1=(a/b);
        t2=(a/c);
        t3=t1-(a/l);
        t4=t2-(a/l);
        ll firstpod=(a-t3+1);
        ll sum=(t3*(2*firstpod+(t3-1)))/2;
        ll sum2=(t4*(2+(t4-1)))/2;
        cout<<sum-sum2<<endl;
    }
    return 0;
}