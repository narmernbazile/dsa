#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

bool check_capacity(vector<int>& v, int capacity, int days)
{
  int max_weight = *max_element(v.begin(), v.end());
  if (capacity < max_weight) return false;

  int n = v.size();
  int t = 0;
  int sum = 0;
  
  for (int i = 0; i < n; i++)
  {
    if (sum + v[i] > capacity)
    {
      t++;
      sum = v[i];
    }
    else
    {
      sum += v[i];
    }
  }
  if (sum > 0) t++;
  return t <= days;
}

int ship_within_days(vector<int>& v, int days)
{
  int n = v.size();
  int p = 1;  //*max_element(v.begin(), v.end());
  int q = 5e6;  //accumulate(v.begin(), v.end(), 0);

  while (p <= q)
  {
    int mid = (p+q)/2;
    if (check_capacity(v, mid, days)) // go left
    {
      q = mid - 1;
    }
    else // go right
    {
      p = mid + 1;
    }
  }
  return p;
}

int main()
{
  vector<int> v = {1,2,3,1,1};
  int days = 4;
  int _ = ship_within_days(v, days);
  cout << _ << endl;
  // cout << check_capacity(v, 2, 4) << endl;
  return 0;
}