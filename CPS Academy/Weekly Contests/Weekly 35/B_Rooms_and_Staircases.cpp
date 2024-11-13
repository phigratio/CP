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
 string s;
 cin>>s;
 ll cnt1=0;
 ll cnt2=0;
 ll ans=n*2;
 for(int i=0;i<n;i++)
 {
  if(s[i]=='1')
  {
    break;
   
  }
  else
  {
    cnt1++;
  }
 }
  for(int i=n-1;i>=0;i--)
 {
  if(s[i]=='1')
  {
    break;
  }
  else
  {
    cnt2++;
  }
 }
  ll temp;
  
  temp=(cnt1<cnt2)?cnt1:cnt2;
  if(temp==n)
  {
    cout<<n<<endl;
    return;
  }
  temp=temp*2;
 cout<<ans-temp<<endl;
 

}
int main()
{
  faster;
  ll t;
  cin>>t;
  while (t--)
  {
    muqtu();
  }
  return 0;
}

// thanks for watching my code