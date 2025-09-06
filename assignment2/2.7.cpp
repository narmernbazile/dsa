#include <iostream>
#include <vector>
#include <map>

using namespace std;

int longest_subarray(vector<int>& v, int k)
{
  int n = v.size();
  map<int, int> m;
  int l = 0;
  m[0] = -1;
  int sum = 0;
  for (int i = 0; i < n; i++)
  {
    sum += v[i];
    if (m.find(sum-k) != m.end())
    {
      l = max(l, i-m[sum-k]);
    }
    if (m.find(sum) == m.end())
    {
      m[sum] = i;
    }
  }
  return l;
}

int main()
{
  vector<int> v = {10, 5, 2, 7, 1, -10};
  int _ = longest_subarray(v, 15);
  cout << _ << endl;
}