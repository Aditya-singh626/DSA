#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Merge sort implementation using stable_sort
void merge(vector<int>& a) {
    stable_sort(a.begin(), a.end());
}

// Introsort implementation using sort
void introsort(vector<int>& a) {
    sort(a.begin(), a.end());
}   

void printvector(const vector<int>& a) {
    for (int i = 0; i < (int)a.size(); i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;
    //Input size of vector
    cout << "Enter number of elements: ";
    if (!(cin >> n) || n <= 0) {
        cout << "Invalid size\n";
        return 1;
    }
    //Input elements of vector
    vector<int> arr(n);
    cout << "Enter " << n << " integers:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    //Before sorting
    cout << "Before sorting:\n";

    merge(arr);
    //After sorting using merge
    cout << "After sorting using merge:\n";
    
    introsort(arr);
    //After sorting using introsort
    cout << "After sorting using introsort:\n";

    printvector(arr);
    return 0 ;
}