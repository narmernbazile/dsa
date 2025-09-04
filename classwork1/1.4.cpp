#include <iostream>
#include <vector>

using namespace std;

int count_positive(vector<int> v)
{
  int count = 0;
  for (int x : v) if (x > 0) count++;
  return count;
}

int main()
{
  int n; cin >> n;
  vector<int> v;
  for (int i = 0; i < n; i++)
  {
    int x; cin >> x;
    v.push_back(x);
  }
  int npos = count_positive(v);
  cout << npos;
}