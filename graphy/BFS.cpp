#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main()
{
    // N = Number of Vertices      E = Number of edges
    int N, E;

    cout << "Enter the number of vertices: ";
    cin >> N;

    cout << "Enter the number of edges: ";
    cin >> E;

    vector<vector<int>> AdjList(N + 1);

    // Entering Adjacency List
    for (int i = 1; i <= E; i++)
    {
        int a, b;
        bool valid = false;

        while (!valid)
        {
            cout << "Enter the end points of the Edge " << i << ": ";
            cout << "First vertex (0-" << (N - 1) << "): ";
            cin >> a;
            cout << "Second vertex (0-" << (N - 1) << "): ";
            cin >> b;

            if (a >= 0 && a < N && b >= 0 && b < N)
            {
                valid = true;
            }
            else
            {
                cout << "Invalid! Vertices must be between 0 and " << (N - 1) << ". Try again.\n";
            }
        }

        AdjList[a].push_back(b);
        AdjList[b].push_back(a);
    }

    // Printing Adjacency List
    for (int i = 0; i < N; i++)
    {
        cout << i << ": ";
        for (int j = 0; j < AdjList[i].size(); j++)
        {
            cout << AdjList[i][j];
            if (j < AdjList[i].size() - 1)
                cout << ", ";
        }
        cout << endl;
    }

    // Breadth First Search (BFS)
    queue<int> Q;
    vector<int> status(N, 0);

    Q.push(0);
    status[0] = 1;

    cout << "BFS order is: ";

    while (!Q.empty())
    {
        int x = Q.front();
        Q.pop();
        cout << x;

        for (int k = 0; k < AdjList[x].size(); k++)
        {
            int e = AdjList[x][k];

            if (status[e] == 0)
            {
                status[e] = 1;
                Q.push(e);
            }
        }

        if (!Q.empty())
            cout << " -> ";
    }

    cout << endl;

    return 0;
}