#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n1, n2;
    // arr1
    cout << "No of elements in arr1: ";
    cin >> n1;
    vector<int> arr1(n1);
    cout << "Enter the elements in arr1: ";
    for (int i = 0; i < n1; i++) {
        cin >> arr1[i];
    }
    // arr2
    cout << "No of elements in arr2: ";
    cin >> n2;
    vector<int> arr2(n2);
    cout << "Enter the elements in arr2: ";
    for (int i = 0; i < n2; i++) {
        cin >> arr2[i];
    }
    // merge
    vector<int> merged(n1 + n2);
    // merged.reserve(n1 + n2);
    // merged.insert(merged.end(), arr1.begin(), arr1.end());
    // merged.insert(merged.end(), arr2.begin(), arr2.end());
        for (int i = 0; i < n1; i++)
    {
        merged[i]=arr1[i];
    }
    for (int i = 0; i < n2; i++)
    {
        merged[n1+i]=arr2[i];
    }
    cout << "The merged array is: ";
    for (int x : merged) {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}
