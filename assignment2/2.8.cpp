#include <iostream>
#include <vector>

using namespace std;

int majority(vector<int>& v, int p, int q)
{
  int n = q - p + 1;
  int mid = (p+q)/2;

  if (n == 1) return v[p];

  int e1 = majority(v, p, mid);
  int e2 = majority(v, mid+1, q);

  int c1 = 0;
  int c2 = 0;

  for (int i = p; i <= q; i++)
  {
    if (v[i] == e1) c1++;
    if (v[i] == e2) c2++;
  }
  return (c1 > c2 ? e1 : e2);
}

int majority_element(vector<int>& v)
{
  return majority(v, 0, v.size()-1);
}

int main()
{
  vector<int> v = {3, 2, 2};
  int _ = majority_element(v);
  cout << _ << endl;
}