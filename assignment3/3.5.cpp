#include <iostream>
#include <vector>

using namespace std;

int single_non_duplicate(vector<int>& v)
{
  int result = 0;
  for (int i : v) result ^= i;
  return result;
}

int main()
{
  vector<int> v = {1,1,2,3,3,4,4,8,8};
  int _ = single_non_duplicate(v);
  cout << _ << endl;
  return 0;
}