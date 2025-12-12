#include <iostream>
#include <vector>
using namespace std;
int main()
{

    int car = 9;
    int* p;
    int** c;
    p = &car;
    c = &p;
    cout << p << " " << c << " " << **c << endl;
}