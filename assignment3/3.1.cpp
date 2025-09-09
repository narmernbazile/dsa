#include <iostream>
#include <vector>

using namespace std;

vector<int> search_range(vector<int>& nums, int target) {
  int n = nums.size();
  int p = 0;
  int q = n-1;

  while (p <= q)
  {
    int mid = (p+q)/2;
    if (target == nums[mid])
    {
      int i = mid - 1;
      int j = mid + 1;
      while (i >= 0 && nums[i] == nums[mid]) i--;
      while (j < n && nums[j] == nums[mid]) j++;
      return vector<int> {i+1, j-1};
    } 
    else if (target < nums[mid])
    {
      q = mid - 1;
    }
    else
    {
      p = mid + 1;
    }
  } 
  return vector<int> {-1, -1};
}

int main()
{
  vector<int> v = {5, 7, 7, 8, 8, 10};
  vector<int> results = search_range(v, 8);
  for (auto x : results) cout << x << " ";
  cout << endl;
  return 0;
}