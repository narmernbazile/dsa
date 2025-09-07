#include <iostream>
#include <vector>
#include <map>

using namespace std;

void sort_colors(vector<int>& v)
{
  int n = v.size();
  map<int, int> m;
  for (int i = 0; i < n; i++)
  {
    if (m.find(v[i]) == m.end())
    {
      m[v[i]] = 1;
    }
    else
    {
      m[v[i]]++;
    }
  }

  int idx = 0;
  for (auto& kv : m)
  {
    int element = kv.first;
    int n = kv.second;
    for (int i = 0; i < n; i++)
    {
      v[idx] = element;
      idx++;
    }
  }
}

int main()
{
  vector<int> v = {2, 0, 2, 1, 1, 0};
  sort_colors(v);
  for (auto i : v) cout << i << " ";
  cout << endl;
}