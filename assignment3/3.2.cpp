#include <iostream>
#include <vector>

using namespace std;

int search(vector<int> v, int target)
{
  int n = v.size();
  int p = 0;
  int q = n-1;

  while (p < q)
  {
    int mid = (p + q)/2;
    
    if (v[mid] > v[q]) // go right
    {
      p = mid + 1;
    }
    
    else // go left
    {
      q = mid;
    }
  }

  int pivot = p;


  if (target >= v[pivot] && target <= v[n-1])
  {
    p = pivot;
    q = n-1;
  }
  else
  {
    p = 0;
    q = pivot - 1;
  }
  
  while (p <= q)
  {
    int mid = (p+q)/2;
    if (v[mid] == target) return mid;
    if (target < v[mid]) q = mid - 1;
    if (target > v[mid]) p = mid + 1;
  }
  return -1;
}

int main()
{
  vector<int> v = {4, 5, 6, 7, 0, 1, 2};
  int _ = search(v, 0);
  cout << _ << endl;
  return 0;
}