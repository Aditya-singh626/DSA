#include <iostream>
using namespace std;
#include <vector>
vector<int> sort(vector<int> &v)
{ sort(v.begin(),v.end());
return v;
}
int main()
{
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    vector<int> v(n);
    cout << "Enter elements of array:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    vector<int> sortedArray = sort(v);  
}