#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Job
{
  int id;
  int deadline;
  int profit;
};

bool compareJobs(const Job &a, const Job &b)
{
  // Sort by deadline (ascending) and then by profit (descending)
  if (a.deadline != b.deadline)
  {
    return a.deadline < b.deadline;
  }
  else
  {
    return a.profit > b.profit;
  }
}

int main()
{
  int N;
  cin >> N;

  vector<Job> jobs(N);
  for (int i = 0; i < N; ++i)
  {
    cin >> jobs[i].id >> jobs[i].deadline >> jobs[i].profit;
  }

  sort(jobs.begin(), jobs.end(), compareJobs);

  int num_jobs_done = 0;
  int max_profit = 0;
  int current_time = 0;

  for (const Job &job : jobs)
  {
    if (current_time <= job.deadline)
    {
      max_profit += job.profit;
      num_jobs_done++;
      current_time++;
    }
  }

  cout << num_jobs_done << " " << max_profit << endl;

  return 0;
}
