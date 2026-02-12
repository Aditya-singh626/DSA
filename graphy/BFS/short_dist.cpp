#include <iostream>
#include <vector>
#include <queue>
using namespace std;
// printing function for adjacency list
void Adjlist(vector<vector<int>> &AdjList, int N)
{
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
}

int main()
{
    // N = Number of Vertices      E = Number of edges
    int N, E;

    cout << "Enter the number of vertices: ";
    cin >> N;

    cout << "Enter the number of edges: ";
    cin >> E;

    vector<vector<int>> AdjList(N);

    // Entering Adjacency List
    for (int i = 1; i <= E; i++)
    {
        int a, b;
        bool valid = false;

        while (!valid)
        {
            cout << "Enter the end points of the Edge " << i << ": ";
            cout << "Enter the vertex (0-" << (N - 1) << "): ";
            cin >> a >> b;

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
    cout << "Adjacency List: " << "\n";
    Adjlist(AdjList, N);

    // Breadth First Search (BFS)
    queue<int> Q;
    vector<int> status(N, -1); // -1 represent that the vertex is not visited yet
    int s;
    cout << "Enter the source vertex " << "\n";
    cin >> s;
    Q.push(s);
    status[s] = 0;

    cout << " Shortest order through BFS order is: ";

    while (!Q.empty())
    {
        int x = Q.front();
        Q.pop();
        for (int i = 0; i < AdjList[x].size(); i++)
        {
            int y = AdjList[x][i];
            if (status[y] == -1)
            {

                status[y] = status[x] + 1;
                Q.push(y);
            }
        }
    }

    cout << " The shortest Order of the vertex form the source vertex is " << "\n";
    for (int i = 0; i < N; i++)
    {
        cout << i << ":" << status[i] << "\n";
    }

    cout << endl;

    return 0;
}