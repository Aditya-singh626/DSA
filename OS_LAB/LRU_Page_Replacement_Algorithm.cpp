#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n, frameCount, faults = 0;
    cout << "\nLRU PAGE REPLACEMENT ALGORITHM\n";
    cout << "Enter no. of Frames: ";
    cin >> frameCount;
    cout << "Enter no. of reference string: ";
    cin >> n;
    vector<int> pages(n);
    cout << "Enter reference string: ";
    for (int i = 0; i < n; i++)
        cin >> pages[i];

    vector<int> frames(frameCount, -1);
    vector<int> lastUsed(frameCount, -1);

    cout << "\nExecution Trace:\n";
    for (int t = 0; t < n; t++)
    {
        int page = pages[t], idx = -1;
        cout << "Reference " << page << " -> Frames: ";
        for (int i = 0; i < frameCount; i++)
        {
            if (frames[i] == page)
            {
                idx = i;
                break;
            }
        }
        if (idx != -1)
        {
            lastUsed[idx] = t;
        }
        else
        {
            faults++;
            int replace = -1;
            for (int i = 0; i < frameCount; i++)
            {
                if (frames[i] == -1)
                {
                    replace = i;
                    break;
                }
            }
            if (replace == -1)
            {
                replace = 0;
                for (int i = 1; i < frameCount; i++)
                {
                    if (lastUsed[i] < lastUsed[replace])
                        replace = i;
                }
            }

            frames[replace] = page;
            lastUsed[replace] = t;
        }

        for (int x : frames)
        {
            if (x == -1)
                cout << "-\t";
            else
                cout << x << "\t";
        }
        cout << '\n';
    }
    cout << "\nTotal Page Faults: " << faults << '\n';
    return 0;
}
