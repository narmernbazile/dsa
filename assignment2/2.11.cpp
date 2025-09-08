#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int max_profit(vector<int>& prices)
{
  int n = prices.size();
  int profit = 0;
  int i = 0;
  for (int j = i + 1; j < n; j++)
  {
    if (prices[j] < prices[i])
    {
      i = j;
    }
    if (prices[j] - prices[i] > profit)
    {
      profit = prices[j] - prices[i];
    }
  }
  return profit;
}

int main()
{
  vector<int> v = {2, 4, 1};
  int _ = max_profit(v);
  cout << _ << endl;
}