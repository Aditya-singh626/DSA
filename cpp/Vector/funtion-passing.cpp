#include <iostream>
#include <vector>
using namespace std;

// 1. Pass by reference (recommended for modifying the vector):
void myFunction0(vector<int> &arr){
    // You can modify the vector here
    arr[0] = 10;
}

//2. Pass by const reference (recommended for read-only access):
void myFunction1(const vector<int> &arr) {
    // You cannot modify the vector
    cout << arr[0];
}

//3. Pass by value (creates a copy):
void myFunction2(vector<int> arr) {
    // Works with a copy, original not modified
    arr[0] = 10;
}

int main()
{
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter " << n << " integers:\n";

    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

     myFunction0(arr); // Pass by reference

     for (int i = 0; i < n; i++){
        cout << arr[i] << " ";

     }
     
}