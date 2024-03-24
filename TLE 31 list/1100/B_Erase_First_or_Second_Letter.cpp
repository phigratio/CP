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
#define s second

void muqtu()
{
  ll n;
  ll ans = 0;
  cin >> n;
  string s;
  cin >> s;
  set<char> st;
  for (int i = 0; i < n; i++)
  {
    st.insert(s[i]);
    ans += st.size();
  }
  cout << ans << endl;
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
  return 0;
}