#include <iostream>
#include <vector>
#include <map>

using namespace std;

vector<int> two_sum(vector<int> v, int target)
{
  int n = v.size();
  map<int, int> m;

  for (int i = 0; i < n; i++)
  {
    if (m.find(v[i]) == m.end())
    {
      m[target - v[i]] = i;
    }
    else
    {
      return {m[v[i]], i};
    }
  }
  return {-1, -1};
}

int main()
{
  vector<int> v = {2, 7, 11, 15};
  vector<int> _ = two_sum(v, 9);
  cout << _[0] << " " << _[1] << endl;
}