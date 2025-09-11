#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool can_place_balls(vector<int>& v, int d, int m)
{
  int n = v.size();
  int count = 1;
  int last = v[0];

  for (int i = 0; i < n; i++)
  {
    if (v[i] - last >= d)
    {
      last = v[i];
      count++;
    }
  }
  return count >= m;
}

int max_distance(vector<int>& v, int m)
{
  int n = v.size();
  sort(v.begin(), v.end());

  int p = 0;
  int q = v[n-1];
  while (p <= q)
  {
    int mid = (p+q)/2;

    if (can_place_balls(v,mid, m))
    {
      p = mid + 1;
    }
    else
    {
      q = mid - 1;
    }
  }
  return q;
}

int main()
{
  // vector<int> v = {1,2,3,4,7};
  vector<int> v = {5,4,3,2,1,1000000000};
  int m = 2;
  int _ = max_distance(v, m);
  cout << _ << endl;
  return 0;
}