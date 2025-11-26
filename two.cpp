#include <iostream>
#include <vector>
using namespace std;
vector<int> twosum(vector<int> &arr, int target){
    vector<int> arr3;
    for (int i = 0; i < arr.size(); i++){
        for (int j = i + 1; j < arr.size(); j++){
            if (arr[i] + arr[j] == target){
                arr3.push_back(i);
                arr3.push_back(j);
            }
        }
    }
    return arr3;
}
int main()
{
    int n;
    cout << "ENTER SIZE OF ARRAY:" << endl;
    cin >> n;
    vector<int> arr(n);

    cout << "ENTER ELEMENTS:" << endl;
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int target;
    cout << "ENTER TARGET VALUE:" << endl;
    cin >> target;
    vector<int> res = twosum(arr, target);
    for (int i = 0; i < 3; i++){
        cout << res[i] << endl;
    }

    return 0;
}