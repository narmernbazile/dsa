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
