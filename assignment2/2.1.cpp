#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>

using namespace std;

int second_largest(vector<int> nums) 
{
  int n = nums.size();
  int largest = INT_MIN;
  int second_largest = INT_MIN;

  for (int i = 0; i < n; i++)
  {
    if (nums[i] > largest)
    {
      second_largest = largest;
      largest = nums[i];
      continue;
    }

    if (nums[i] > second_largest && largest != nums[i])
    {
      second_largest = nums[i];
    }
  }

  return (second_largest != INT_MIN ? second_largest : -1);
}

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