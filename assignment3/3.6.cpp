#include <iostream>
#include <vector>

using namespace std;

int find_peak_element(vector<int>& v)
{
  int n = v.size();
  int p = 0;
  int q = n-1;

  while (p <= q)
  {
    int mid = (p+q)/2;

    if (mid > 0 && v[mid] < v[mid-1]) // is the left neighbor greater?
    {
      q = mid - 1;
    }
    else if (mid < n-1 && v[mid] < v[mid+1]) // is the right neighbor greater?
    {
      p = mid + 1;
    }
    else // otherwise we have found our peak
    {
      return mid;
    }
  }
  return -1;
}

int main()
{
  vector<int> v = {1,2,3,1};
  int _ = find_peak_element(v);
  cout << _ << endl;
  return 0;
}