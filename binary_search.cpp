#include <iostream>
#include <vector>

using namespace std;

int binary_search(vector<int>& v, int x)
{
  int p = 0;
  int q = v.size() - 1;

  while (p <= q)
  {
    int mid = (p + q) / 2;
    if (v[mid] == x) return mid;

    if (x < v[mid])
    {
      q = mid - 1;
    }
    else
    {
      p = mid + 1;
    }
  }
  return -1;
}

int recursive_binary_search(vector<int>& v, int p, int q, int x)
{
  if (p > q) return -1;

  int mid = (p + q) / 2;
  if (x == v[mid]) return mid;

  if (x < v[mid])
    return recursive_binary_search(v, p, mid - 1, x);
  else
    return recursive_binary_search(v, mid + 1, q, x);
}

int lower_bound(vector<int>& v, int key)
{
  int p = 0;
  int q = v.size() - 1;
  int ans = v.size();

  while (p < q)
  {
    int mid = (p + q) / 2;
    if (v[mid] > key)
    {
      ans = mid;
      q = mid - 1;
    }
    else
    {
      p = mid + 1;
    }
  }
  return ans;
}

int upper_bound(vector<int>& v, int key)
{
  int p = 0;
  int q = v.size() - 1;
  int ans = v.size();

  while (p <= q)
  {
    int mid = (p + q) / 2;
    if (v[mid] > key)
    {
      ans = mid;
      q = mid - 1;
    }
    else
    {
      p = mid + 1;
    }
  }
  return ans;
}

void binary_insert(vector<int>& v, int x)
{
  int idx = lower_bound(v, x);
  v.insert(v.begin() + idx, x);
}

int main()
{
  vector<int> v = {1, 7, 13, 45, 67,89, 90, 105};
  lower_bound(v, 45);
  // int idx = recursive_binary_search(v, 0, v.size()-1, 89);
  // cout << v[idx] << endl;
}