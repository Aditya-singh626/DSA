#include <iostream>
#include <vector>
#include <queue>
using namespace std;
int main()
{

    // vector of vector
    vector<vector<int>> v(20, vector<int>(10, -1)); // 20-> rows, 10-> colume ,-1-> initial value
    for (int i = 0; i < 20; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            cout << v[i][j] << " ";
        }
        cout << "\n";
    }

    // vector of pair
    vector<pair<int, string>> vp;
    vp.push_back({1, "Aditya"});
    vp.push_back({2, "Ravi"});
    vp.push_back({3, "Neha"});
    for (int i = 0; i < vp.size(); i++)
    {
        pair<int, string> p = vp[i];
        cout << p.first << " -> " << p.second << endl;
    }

    //queue of pair
    queue<pair<int, int>> q;
    q.push({1, 10});
    q.push({2, 20});
    q.push({3, 30});
    while (!q.empty()){
        pair<int,int> p = q.front();
        cout << p.first << " -> " << p.second << endl;
        q.pop();
    }
    return 0;
}