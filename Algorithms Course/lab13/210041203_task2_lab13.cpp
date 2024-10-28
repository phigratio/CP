#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compareJobs(const pair<int, pair<int, int>> &a, const pair<int, pair<int, int>> &b)
{
  if (a.second.first != b.second.first)
  {
    return a.second.first < b.second.first;
  }
  else
  {
    return a.second.second > b.second.second;
  }
}

int main()
{
  int N;
  cin >> N;

  vector<pair<int, pair<int, int>>> jobs(N);
  for (int i = 0; i < N; ++i)
  {
    cin >> jobs[i].first >> jobs[i].second.first >> jobs[i].second.second;
  }

  sort(jobs.begin(), jobs.end(), compareJobs);

  int num_jobs_done = 0;
  int max_profit = 0;
  int current_time = 0;

  for (const auto &job : jobs)
  {
    if (current_time <= job.second.first)
    {
      max_profit += job.second.second;
      num_jobs_done++;
      current_time++;
    }
  }

  cout << num_jobs_done << " " << max_profit << endl;

  return 0;
}
