#include <iostream>
#include <vector>
#include <climits>
#include <numeric>

using namespace std;

int count_students(vector<int>& v, int pages)
{
  int n = 1;
  long long p = 0;
  
  for (int c : v)
  {
    if (p + c <= pages)
    {
      p += c;
    }
    else
    {
      n++;
      p = c;
    }
  }
  return n;
}

int find_pages(vector<int>& v, int k)
{
  int n = v.size();
  if (k > n) return -1;

  int p = *max_element(v.begin(), v.end());
  int q = accumulate(v.begin(), v.end(), 0);

  while (p <= q)
  {
    int mid = (p+q)/2;
    int students = count_students(v, mid);
    if (students > k)
    {
      p = mid + 1;
    }
    else
    {
      q = mid - 1;
    }
  }
  return p;
}

int main()
{
  vector<int> v = {12,34,67,90};
  int _ = find_pages(v, 2);
  cout << _ << endl;
  return 0;
}