#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int mat[5][5];
    int rows = 5;
    for (int i = 0; i < rows; i++)
    {
        cout << "Enter the number of elements in the " << i + 1 << " row: ";
        int n;
        cin >> n;
        for (int j = 0; j < n; j++)
        {
            int element;
            cout << "Enter element " << j + 1 << ": ";
            cin >> element;
            mat[i][j] = element;
        }
    }

    return 0;
}