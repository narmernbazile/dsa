#include <iostream>
#include <vector>

using namespace std;

int single_number(vector<int>& v)
{
  int result = 0;
  for (int i : v) result ^= i;
  return result;
}

int main()
{
  vector<int> v = {2, 2, 1};
  int _ = single_number(v);
  cout << _ << endl;
}