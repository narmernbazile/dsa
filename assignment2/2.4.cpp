#include <iostream>
#include <vector>

using namespace std;

void move_zeros(vector<int>& v)
{
  if (v.empty()) return;
  int n = v.size();
  int i = 0;

  for (int j = 0; j < n; j++)
  {
    if (v[j] != 0)
    {
      v[i] = v[j];
      i++;
    }
  }

  for (int j = i; j < n; j++)
  {
    v[j] = 0;
  }
}

int main()
{
  vector<int> v = {0, 1, 0, 3, 12};
  move_zeros(v);
  for (auto i : v) cout << i << " ";
}