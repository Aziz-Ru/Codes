#include <bits/stdc++.h>
using namespace std;
int ans = 100000000;
// the answer is stored in ans
// we call this function solve
void solve(int a[], int n, int k, int index, int sum,
    int maxsum)
{
  // K=1 is the base Case
  if (k == 1) {
    maxsum = max(maxsum, sum);
    sum = 0;
    for (int i = index; i < n; i++) {
      sum += a[i];
    }
    // we update maxsum
    maxsum = max(maxsum, sum);
    // the answer is stored in ans
    ans = min(ans, maxsum);
    return;
  }
  sum = 0;
  // using for loop to divide the array into K-subarray
  for (int i = index; i < n; i++) {
    sum += a[i];
    // for each subarray we calculate sum ans update
    // maxsum
    maxsum = max(maxsum, sum);
    // calling function again
    solve(a, n, k - 1, i + 1, sum, maxsum);
  }
}
// Driver Code
int main()
{ 
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
freopen("Error.txt", "w", stderr);
#endif
  int arr[] = { 2, 4, 7, 3,5 };
  int k = 3; // K divisions
  int n = 5; // Size of Array
  solve(arr, n, k, 0, 0, 0);
  cout << ans << "\n";
}
