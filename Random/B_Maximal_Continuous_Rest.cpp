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
    cin >> arr[i];

  // Concatenate the array with itself to handle the cyclic nature
  vector<ll> extendedArr = arr;
  extendedArr.insert(extendedArr.end(), arr.begin(), arr.end());

  ll maxRest = 0, currentRest = 0;

  // Find the maximum sequence of 1s in the extended array
  for (int i = 0; i < 2 * n; i++)
  {
    if (extendedArr[i] == 1)
    {
      currentRest++;
      maxRest = max(maxRest, currentRest);
    }
    else
    {
      currentRest = 0;
    }
  }


  maxRest = min(maxRest, n);

  cout << maxRest << endl;
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
