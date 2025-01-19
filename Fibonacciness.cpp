#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int a1,a2,a3,a4,a5,ans=0,ans2=0; 
        cin>>a1>>a2>>a4>>a5;
        a3=a1+a2;
        ans=1;
        if(a4==a3+a2)
            ans++;
        if(a5==a4+a3)
            ans++;
        a3=a4-a2;
        if(a4==a3+a2)
        ans2++;
        if(a5==a4+a3)
        ans2++;
        cout<<max(ans,ans2)<<endl;
    }
    return 0;

}