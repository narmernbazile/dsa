#include <iostream>
#include <vector>

using namespace std;

bool search(vector<int> v, int target)
{
  int n = v.size();
  int p = 0;
  int q = n - 1;

  while (p <= q)
  {
    int mid = (p+q)/2;
    if (v[mid] == target) return true;

    // is left half sorted?
    if (v[p] < v[mid])
    {
      if (v[p] <= target && target < v[mid])
      {
        q = mid - 1;
      }
      else
      {
        p = mid + 1;
      }
    }
    // is the right have sorted?
    else if (v[p] > v[mid])
    {
      if (v[mid] < target && target <= v[q])
      {
        p = mid + 1;
      }
      else
      {
        q = mid - 1;
      }
    }
    else
    {
      p++;
    }
  }
  return false;
}

int main()
{
  vector<int> v = {2, 5, 6, 0, 0, 1, 2};
  bool _ = search(v, 0);
  cout << _ << endl;
}