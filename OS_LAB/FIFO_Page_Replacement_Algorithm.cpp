#include <iostream>

#include <vector>
using namespace std;
int main()
{
    int n, frameCount, pointer = 0, faults = 0;
    cout << "Enter number of page references: ";
    cin >> n;
    vector<int> pages(n);

    cout << "Enter the page reference string: ";
    for (int i = 0; i < n; i++)
        cin >> pages[i];
    cout << "Enter number of frames: ";
    cin >> frameCount;

    vector<int> frames(frameCount, -1);

    cout << "\nRef\tFrames\n	\n";

    for (int page : pages)
    {
        bool found = false;
        cout << page << "\t";
        for (int x : frames)
        {
            if (x == page)
            {
                found = true;
                break;
            }
        }

        if (!found)
        {
            faults++;
            frames[pointer] = page;

            pointer = (pointer + 1) % frameCount;
        }

        for (int x : frames)
        {

            if (x == -1)
                cout << "- ";
            else
                cout << x << ' ';
        }

        cout << '\n';
    }

    cout << "\nTotal Page Faults: " << faults << '\n';
    return 0;
}
