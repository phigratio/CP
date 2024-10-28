#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define faster                  \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0);
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ll maxi = 1e6 + 1;
#define pb push_back
#define F first
#define S second

ll countDifferBits(ll a,ll b)
{
  ll cnt=0;

  ll xorRes=a^b;

  while(xorRes>0)
  {
    cnt+= (xorRes&1);
    xorRes>>=1;
  }


  return cnt;
}
void muqtu()
{
  ll n,m,k;
  cin>>n>>m>>k;
  ll ans=0;
  vector<ll> arr(m);
  for(int i=0;i<m;i++)
  {
    cin>>arr[i];
  }
  ll x;
  cin>>x;
  
  for(int i=0;i<m;i++)
  {
    ll differ=countDifferBits(arr[i],x);
    if(differ<=k)
    ans++;
  }
  cout<<ans<<endl;
}
int main()
{
  faster;
  ll t;
  t = 1;
  while (t--)
  {
    muqtu();
  }
  return 0;
}