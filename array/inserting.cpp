#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> arr;
    int n;
    cout << ("Enter the size of array 1\n");
    cin >> n;
    for (int i = 0; i <n; i++){
        
        cin>>arr[i];
    }
    sort(arr.begin(), arr.end());   
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}