#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{ // the is a optimized way to find the first, second and third largest and smallest element in an array
    vector<int> nums = {1, 2, 4, 7, 7, 5};
    if (nums.empty())
    {
        cout << "Vector is empty.\n";
        return 0;
    }
    int flargest, slargest, thirdlargest;
    int fsmallest, ssmallest, thirdsmallest;
    // largest
    flargest = nums[0];
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] > flargest)
        {
            thirdlargest = slargest;
            slargest = flargest;
            flargest = nums[i];
        }
        else if (nums[i] > slargest && nums[i] != flargest)
        {
            slargest = nums[i];
        }
        else if (nums[i] > thirdlargest && nums[i] != slargest && nums[i] != flargest)
        {
            thirdlargest = nums[i];
        }
    }
    cout << "First largest: " << flargest << endl;
    cout << "Second largest: " << slargest << endl;
    cout << "Third largest: " << thirdlargest << endl;
    // smallest
    fsmallest = nums[0];
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] < fsmallest)
        {
            thirdsmallest = ssmallest;
            ssmallest = fsmallest;
            fsmallest = nums[i];
        }
        else if (nums[i] < ssmallest && nums[i] != fsmallest)
        {
            ssmallest = nums[i];
        }
        else if (nums[i] < thirdsmallest && nums[i] != ssmallest && nums[i] != fsmallest)
        {
            thirdsmallest = nums[i];
        }
    }
    cout << "First smallest: " << fsmallest << endl;
    cout << "Second smallest: " << ssmallest << endl;
    cout << "Third smallest: " << thirdsmallest << endl;
    return 0;
}
