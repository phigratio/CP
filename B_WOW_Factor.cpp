#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;
void muqtu()
{
    string s;
    cin>>s;
    ll n=s.size();
    vector<ll> hesh(n);
    vector<ll> hesh2(n);

    ll w=0;
    for (int i = 0; i < n; i++)
    {
        hesh[i]=w;
        if(s[i]=='v' and s[i+1]=='v')
        {
            w++;
            continue;
        }
        
    }
 
    w=0;
    for (int i = n-1; i>=0 ; i--)
    {
        hesh2[i]=w;
        if(s[i]=='v' and s[i-1]=='v')
        {
            w++;
        }
    }
    ll ans=0;
    for (int i = 0; i < n; i++)
    {
        if(s[i]=='o')
        {
            ans+=(hesh[i]*hesh2[i]);
        }
    }
    
    cout<<ans<<endl;
    
    
}
int main()
{
    ll t;
    t=1;
    while(t--)
    {
        muqtu();
    }

}