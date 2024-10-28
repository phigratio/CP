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
  cin >> n;
  vector<ll> arr(n);
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  ll maxSum = INT_MIN;
  ll currSum = 0;
  for (int i = 0; i < n; i++)
  {
    currSum += arr[i];
    maxSum = max(maxSum, currSum);

    // Check if the current element and the next one have the same parity
    if (i < n - 1 && ((arr[i] % 2 == 0 && arr[i + 1] % 2 == 0) || (arr[i] % 2 != 0 && arr[i + 1] % 2 != 0)))
    {
      currSum = 0;
    }

    if (currSum < 0)
    {
      currSum = 0;
    }
  }

  cout << maxSum << endl;
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
