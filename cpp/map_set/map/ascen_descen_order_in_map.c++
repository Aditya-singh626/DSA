#include <iostream>
#include <map>
#include <string>
#include <vector>
using namespace std;

int main()
{
    vector<int> words = {1, 2, 3, 4, 3, 4, 5, 6, 1, 2, 3, 6, 7, 9, 8, 5, 4};
    
    map<int, int, greater<int>> freq_descending; // Map in descending order
    map<int, int> freq_ascending; // Map in ascending order (default)

    for (int i = 0; i < words.size(); i++)
    {
        freq_descending[words[i]]++; 
        freq_ascending[words[i]]++; 
    }

    cout << "\nDescending Order:\n";
    for (auto &p : freq_descending)
    {
        cout << "Key: " << p.first << ", Frequency: " << p.second << "\n";
    }

    cout << "\nAscending Order:\n";
    for (auto &p : freq_ascending)
    {
        cout << "Key: " << p.first << ", Frequency: " << p.second << "\n";
    }
}