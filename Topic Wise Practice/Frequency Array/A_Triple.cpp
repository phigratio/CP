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

void muqtu()
{
  ll n;
  cin>>n;
  unordered_map<ll,ll> cnt;
  for(ll i=0;i<n;i++)
  {
    ll x;
    cin>>x;
    cnt[x]++;
  }
  bool flag=false;
  for(auto it=cnt.begin();it!=cnt.end();it++)
  {
    if(it->second>=3)
    {
      cout<<it->first<<endl;
      flag=true;
      break;
    }
  }

  if(!flag)
  cout<<-1<<endl;
  return;
}
int main()
{
  faster;
  ll t;
  cin >> t;
  // t=1;
  while (t--)
  {
    muqtu();
  }
  return 0;
}

// thanks for watching my code


