#include <iostream>
#include <vector>
#include <unordered_set>
#define ll long long
using namespace std;
const ll MOD = 1e9 + 7;
void muqtu()
{
  ll n, k;
  cin >> n >> k;
  ll ans = 1;
  for (int i = 0; i < k; i++)
  {
    ans = (ans * n) % MOD;
  }
  cout << ans << endl;
}
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    muqtu();
  }
  return 0;
}
