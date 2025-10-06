#include <vector>
#include <algorithm> // for sort
#include <iostream>
using namespace std;

int main()
{
    int n, r;
    cout << "Enter the size of array 1\n";
    cin >> n;
    vector<int> v1(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v1[i];
    }

    cout << "Enter the size of array 2\n";
    cin >> r;
    vector<int> v2(r);
    for (int i = 0; i < r; i++)
    {
        cin >> v2[i];
    }

    vector<int> c(n + r);

    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());

    int i = 0, j = 0, k = 0;

    while (i < n && j < r)
    {
        if (v1[i] < v2[j])
        {
            c[k++] = v1[i++];
        }
        else if (v1[i] == v2[j])
        {
            c[k++] = v1[i++];
            j++;
        }
        else
        {
            c[k++] = v2[j++];
        }
    }
    while (i < n)
    {
        c[k++] = v1[i++];
    }

    while (j < r)
    {
        c[k++] = v2[j++];
    }

    for (int u = 0; u < k; u++)
    {
        cout << c[u] << " ";
    }
    cout << endl;

    return 0;
}