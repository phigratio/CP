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
#define f first
#define s second
void muqtu()
{
  string str;
  cin >> str;
  vector<string> ans;
  sort(str.begin(), str.end());
  do
  {
    ans.pb(str);
  } while (next_permutation(str.begin(), str.end()));

  cout << ans.size() << endl;
  for (string x : ans)
  {
    cout << x << endl;
  }
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