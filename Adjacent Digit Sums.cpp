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
        ll a,b;
        cin>>a>>b;
        if(a+1-b>=0&&(a+1-b)%9==0)
            yes;
        else
        {
                no;
        }
    }
    return 0;

}