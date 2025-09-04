#include <iostream>
#include <vector>

using namespace std;

int remove_duplicates(vector<int>& v)
{
  auto p = v.begin();
  while (p != v.end())
  {
    auto q = p + 1;
    while (*q == *p && q != v.end()) q++;
    if (q != p + 1) v.erase(p+1, q);
    else p++;
  }
  return v.size();
}

int main()
{
  vector<int> v = {1, 1, 2, 2, 3, 3, 4, 4, 5, 5};
  remove_duplicates(v);
  for (auto i : v) cout << i << " ";
}