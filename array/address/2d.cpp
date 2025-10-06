#include <iostream>
#include <vector>
using namespace std;

int main(){
    int r,c;
    cout << "number of row in an array:";
    cin >> r;
    cout << "number of colume in an array:";
    cin >> c;
    vector<vector<int>>arr(r,vector<int>(c));
    cout << "Enter the element in the array:";
    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){
            cin >> arr[i][j];
        }
    }
    int baseAddress = (int)&arr[0][0]; // Base address of the array
    int indexr,indexc;                      // Index of the element to fin
    cout << "Enter the row index you wnat address:";
    cin >> indexr;
    cout << "Enter the colume index you wnat address:";
    cin >> indexc;
    int elementSize = sizeof(arr[0][0]); // Size of each element in bytes
    int  Addressr = baseAddress+elementSize*((indexr*c)+indexc);
    int  Addressc = baseAddress+elementSize*((indexc*r)+indexr);
    cout << "address in row major" << Addressr<<endl;
    cout << "address in colume major" << Addressc<<endl;
    return 0;
}
