#include <iostream>
#include <vector>
#include <map>

using namespace std;

int subarray_sum(vector<int>& v, int k)
{
  int n = v.size();
  int count = 0;
  int sum = 0;
  map<int, int> m;
  m[0] = 1;

  for (int i = 0; i < n; i++)
  {
    sum += v[i];
    if (m.find(sum-k) != m.end())
    {
      count += m[sum-k];
    }
    m[sum]++;
  }
  return count;
}

int main()
{
  vector<int> v = {1, 2, 3};
  int _ = subarray_sum(v, 3);
  cout << _ << endl;
  return 0;
}