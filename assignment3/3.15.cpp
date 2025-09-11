#include <iostream>
#include <vector>

using namespace std;

void next_permutation(vector<int>& v)
{
  int i = v.size() - 2;
  while(i >= 0 && v[i] >= v[i+1]) i--;

  if (i >= 0)
  {
    int j = v.size()-1;
    while (j >= 0 && v[j] <= v[i]) j--;
    swap(v[i], v[j]);
  }
  reverse(v.begin()+i+1, v.end());
  return;
}

int main()
{
  vector<int> v = {1,2,3};
  next_permutation(v);
  for (int x : v) cout << x << " ";
  cout << endl;
  return 0;
}