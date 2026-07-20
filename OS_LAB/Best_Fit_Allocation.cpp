#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int m, n;

    cout << "BEST FIT MEMORY ALLOCATION\n";

    cout << "Enter number of memory blocks: ";
    cin >> m;
    vector<int> blockSize(m);

    cout << "Enter size of each block:\n";

    for (int i = 0; i < m; i++)
        cin >> blockSize[i];
    cout << "Enter number of files/processes: ";
    cin >> n;
    vector<int> fileSize(n), allocation(n, -1), fragment(n, -1), allocBlockSize(n, -1), remaining = blockSize;
    cout << "Enter size of each file/process:\n";
    for (int i = 0; i < n; i++)
        cin >> fileSize[i];
    for (int i = 0; i < n; i++)
    {
        int bestIdx = -1;

        for (int j = 0; j < m; j++)
        {

            if (remaining[j] >= fileSize[i])
            {

                if (bestIdx == -1 || remaining[j] < remaining[bestIdx])
                    bestIdx = j;
            }
        }

        if (bestIdx != -1)
        {
            allocation[i] = bestIdx;
            allocBlockSize[i] = remaining[bestIdx];
            fragment[i] = remaining[bestIdx] - fileSize[i];

            remaining[bestIdx] -= fileSize[i];
        }
    }

    cout << "\nFile No\tFile Size\tBlock No\tBlock Size\tFragment\n";
    for (int i = 0; i < n; i++)
    {
        cout << i + 1 << "\t\t" << fileSize[i] << "\t\t";

        if (allocation[i] == -1)
            cout << "Not Allocated\t-\t\t-\n";

        else
            cout << allocation[i] << "\t\t" << allocBlockSize[i] << "\t\t" << fragment[i] << '\n';
    }

    return 0;
}
