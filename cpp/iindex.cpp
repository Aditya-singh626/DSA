#include <iostream>

using namespace std;
int main()
{
    int n, m;
    cout << "enter the number of row";
    cin >> n;
    cout << "enter the number of row";
    cin >> m;
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int i = 0; i < m; i++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    cout << sum;
}
