#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric> // For std::accumulate
using namespace std;
int main()
{
    vector<int> nums = {5, 2, 9, 1, 7, 3};
    // Use std::accumulate to sum all elements
    // std::accumulate(begin, end, initial_value)
      // begin → iterator to the first element
      // end → iterator past the last element
      // initial_value → starting value for the sum (usually 0 for integers)
    int sum = accumulate(nums.begin(), nums.end(), 0);
    cout << "Sum of all elements: " << sum << endl;
    return 0;
}