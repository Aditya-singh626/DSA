#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n, m;
    cout << "Enter processes and resource types: ";
    cin >> n >> m;

    vector<vector<int>> alloc(n, vector<int>(m)), maxm(n, vector<int>(m)), need(n, vector<int>(m));
    vector<int> avail(m), safe;
    vector<bool> done(n, false);
    cout << "Enter Allocation Matrix:\n";
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> alloc[i][j];
    cout << "Enter Maximum Matrix:\n";
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> maxm[i][j];
    cout << "Enter Available Resources:\n";
    for (int j = 0; j < m; j++)
        cin >> avail[j];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            need[i][j] = maxm[i][j] - alloc[i][j];
            if (need[i][j] < 0)
                return cout << "Invalid input\n", 0;
        }
    }

    for (int k = 0; k < n; k++)
    {
        bool found = false;
        for (int i = 0; i < n; i++)
        {
            if (done[i])
                continue;
            int j = 0;
            while (j < m && need[i][j] <= avail[j])
                j++;
            if (j == m)
            {
                for (j = 0; j < m; j++)
                    avail[j] += alloc[i][j];
                done[i] = found = true;
                safe.push_back(i);
            }
        }

        if (!found)
            break;
    }

    if ((int)safe.size() != n)
        cout << "System is NOT SAFE\n";
    else
    {
        cout << "System is SAFE\nSafe sequence: ";
        for (int i = 0; i < n; i++)
            cout << 'P' << safe[i] << (i == n - 1 ? '\n' : ' ');
    }
    return 0;
}
