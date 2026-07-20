#include<iostream>
using namespace std;
#include <vector>
int main()
{
    vector<int> v1; // zero length vector
    vector<int> v2(10); // ten length vector
    vector<int> v3(10, 5); // ten length vector with all values as 5
    vector<int> v4{1, 2, 3, 4, 5}; // ten length vector with all values as 5

    cout << "Size of v1: " << v1.size() << endl;
    cout << "Size of v2: " << v2.size() << endl;
    cout << "Size of v3: " << v3.size() << endl;
    cout << "Size of v4: " << v4.size() << endl;
    string s = " ";

    // Accessing elements
    cout << "Elements of v4: ";
    for (int i = 0; i < v4.size(); i++) {
        cout << v4[i] << " ";
    }
    cout << endl;

    // Modifying elements
    v4[0] = 10;
    cout << "After modifying first element of v4: ";
    for (int i = 0; i < v4.size(); i++) {
        cout << v4[i] <<s;
    }
    cout << endl;

    // Adding elements
    v4.push_back(6);
    cout << "After adding an element to v4: ";
    for (int i = 0; i < v4.size(); i++) {
        cout << v4[i] <<s;
    }
    cout << endl;

    // Removing elements
    v4.pop_back();
    cout << "After removing the last element from v4: ";
    for (int i = 0; i < v4.size(); i++) {
        cout << v4[i] <<s;
    }
    cout << endl;
   
    for(int i=0;i<10;i++){
        cout<<v3[i]<<endl; //garbage values
    }   
     return 0;
}   
