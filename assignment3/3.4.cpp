#include <iostream>
#include <vector>

using namespace std;

int find_k_rotation(vector<int>& v)
{
  int n = v.size();

  int i = 0;
  int j = 1;

  while (i < n & j < n)
  {
    if (v[i] > v[j])
    {
      return i + 1;
    }
    i++;
    j++;
  }
  return 0;
}

int main()
{
  vector<int> v = {5, 1, 2, 3, 4};
  int _ = find_k_rotation(v);
  cout << _ << endl;
}