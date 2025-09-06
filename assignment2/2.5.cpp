#include <iostream>
#include <vector>

using namespace std;

int missing_number(vector<int>& v)
{
  int n = v.size();
  int sum = 0;
  for (int i = 0; i < n; i++) sum += v[i];
  return ((n * (n+1)) / 2) - sum;
}

int main()
{
  vector<int> v = {3, 0, 1};
  int _ = missing_number(v);
  cout << _ << endl;
}