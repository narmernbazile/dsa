#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

int longest_consecutive(vector<int>& v)
{
  if (v.empty()) return 0;

  vector<int> a = v;
  sort(a.begin(), a.end());
  a.erase(unique(a.begin(), a.end()), a.end());

  int best = 1;
  int curr = 1;

  for (int i = 1; i < a.size(); i++)
  {
    if (a[i-1]+1 == a[i]) curr++;
    else
    {
      best = max(best, curr);
      curr = 1;
    }
  }
  best = max(best, curr);
  return best;
}

int main()
{
  vector<int> v = {100,4,200,1,3,2};
  int _ = longest_consecutive(v);
  cout << _ << endl;
  return 0;
}