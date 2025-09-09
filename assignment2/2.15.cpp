#include <iostream>
#include <vector>
#include <climits>

using namespace std;

vector<int> leaders(vector<int>& v)
{
  int n = v.size();
  int max = INT_MIN;
  vector<int> results;
  
  for (int i = n -1; i >= 0; i--)
  {
    if (v[i] >= max)
    {
      results.push_back(v[i]);
      max = v[i];
    }
  }
  reverse(results.begin(), results.end());
  return results;
}

int main()
{
  vector<int> v = {16, 17, 4, 3, 5, 2};
  vector<int> results = leaders(v);
  for (auto x : results) cout << x << " ";
  cout << endl;
  return 0;
}