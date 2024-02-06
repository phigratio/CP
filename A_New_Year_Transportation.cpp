#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, t;
  cin >> n >> t;
  vector<int> arr(n + 1);

  for (int i = 1; i <= n; i++)
  {
    cin >> arr[i];
  }

  int res = 1;
  queue<int> q;
  q.push(res);

  while (!q.empty() && res < n)
  {
    int ans = arr[q.front()];
    res += ans;

    if (res == t)
    {
      cout << "YES" << endl;
      return 0;
    }
    else if (res > t)
    {
      cout << "NO" << endl;
      return 0;
    }
    else
    {
      q.push(res);
      q.pop();
    }
  }

  cout << "NO" << endl;
  return 0;
}
