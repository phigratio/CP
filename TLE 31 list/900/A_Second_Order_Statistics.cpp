#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define faster                  \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0);
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
#define pb push_back
#define f first
set<ll> st;
#define s second
void muqtu()
{
  ll x;
  cin >> x;
  st.insert(x);
}
int main()
{
  faster;
  ll t;
  cin >> t;
  while (t--)
  {
    muqtu();
  }
  if (st.size() == 1)
  {
    cout << "NO" << endl;
    return 0;
  }
  set<ll>::iterator it = st.begin();
  *it++;
  cout << *it << endl;

  return 0;
}