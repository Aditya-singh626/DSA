#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int m, n;
    cout << "FIRST FIT MEMORY ALLOCATION\n";
    cout << "Enter number of memory blocks: ";
    cin >> m;

    vector<int> blockSize(m);
    cout << "Enter size of each block:\n";
    for (int i = 0; i < m; i++)
        cin >> blockSize[i];

    cout << "Enter number of processes: ";
    cin >> n;
    vector<int> processSize(n), allocation(n, -1), fragment(n, -1), used(m, 0);

    cout << "Enter size of each process:\n";
    for (int i = 0; i < n; i++)
        cin >> processSize[i];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (!used[j] && blockSize[j] >= processSize[i])
            {
                allocation[i] = j;
                fragment[i] = blockSize[j] - processSize[i];
                used[j] = 1;
                break;
            }
        }
    }

    cout << "\nFile No\tFile Size\tBlock No\tBlock Size\tFragment\n";
    for (int i = 0; i < n; i++)
    {
        cout << i + 1 << "\t\t" << processSize[i] << "\t\t";
        if (allocation[i] == -1)
        {
            cout << "Not Allocated\t-\t\t-\n";
        }
        else
        {
            cout << allocation[i] + 1 << "\t\t" << blockSize[allocation[i]] << "\t\t" << fragment[i] << '\n';
        }
    }

    return 0;
}
