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
 char a,b;
 string s,t;
 cin>>s>>t;
 ll cnt=0;
 bool flag=false;
  for(int i=0;i<n;i++)
  {
    
    if(s[i]!=t[i] and cnt==0)
    {
      cnt++;
      a=s[i];
      b=t[i];
    }
    else if(s[i]!=t[i] and cnt==1)
    {
      cnt++;
      if(s[i]==a and t[i]==b)
      {
        flag=true;
      }
      else
      {
        flag=false;
        
      }

    }
    else if(s[i]!=t[i])
    {
      cnt++;
    }
    

  }
  if(cnt==0)
    {
      cout<<"YES"<<endl;
 
    }
    else if(cnt>2)
    {
      cout<<"NO"<<endl;
      return;
    }
    else if(flag){
      cout<<"YES"<<endl;
 
    }
    else
    {
      cout<<"NO"<<endl;
    }

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