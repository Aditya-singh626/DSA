#include <iostream>
using namespace std;
char print (){
    cout << "Hello, World!" << endl;
    return 32;
}
int main(){
    // print();
    int c = print();
    cout << c << endl;
    return 0;
}
