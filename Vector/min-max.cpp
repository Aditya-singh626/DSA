#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> nums = {5, 2, 9, 1, 7, 3};

    if (nums.empty())
    {
        cout << "Vector is empty.\n";
        return 0;
    }

    auto min_it = min_element(nums.begin(), nums.end());
    auto max_it = max_element(nums.begin(), nums.end());

    cout << "Min: " << *min_it << "\n";
    cout << "Max: " << *max_it << "\n";

    return 0;
}