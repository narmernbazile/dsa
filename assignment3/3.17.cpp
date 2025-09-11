#include <iostream>
#include <vector>

using namespace std;

int max_product(vector<int>& v)
{
  int local_max = v[0];
  int local_min = v[0];
  int global_max = v[0];

  for (int i = 1; i < v.size(); i++)
  {
    int temp = local_max;
    local_max = max(v[i], max(local_max * v[i], local_min * v[i]));
    local_min = min(v[i], min(temp * v[i], local_min * v[i]));
    global_max = max(global_max, local_max);
  }
  return global_max;
}

int main()
{
  vector<int> v = {2,3,-2,4};
  int _ = max_product(v);
  cout << _ << endl;
  return 0;
}