#include <iostream>
#include <vector>
#include <cmath>
#include <numeric>

using namespace std;

int sum_threshold(vector<int>& v, int divisor)
{
  int sum = 0;
  for (int x : v) sum += ceil((double)x / divisor);
  return sum;
}

int smallest_divisor(vector<int>& v, int threshold)
{
  int p = 1;
  int q = 1e6;

  while (p <= q)
  {
    int mid = (p+q)/2;
    if (sum_threshold(v, mid) <= threshold)
    {
      q = mid - 1;
    }
    else
    {
      p = mid + 1;
    }
  }
  return p;
}

int main()
{
  vector<int> v = {44,22,33,11,1};
  int _ = smallest_divisor(v, 5);
  cout << _ << endl;
  return 0;
}