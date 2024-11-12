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
  string a,b;
  cin>>a>>b;
  if(a==b)
  {
    a+="1";
    b+="2";
  }
  else if(stoi(b)-stoi(a)==1)
  {
    a+="9";
    b+="0";
  }
  else if(stoi(a)-stoi(b)==8)
  {
    b+="0";
  }
  else
  {
    cout<<-1<<endl;
    return ;
  }

  cout<<a<<" "<<b<<endl;

}
int main()
{
  faster;
  ll t;

  t=1;
  while (t--)
  {
    muqtu();
  }
  return 0;
}

// thanks for watching my code