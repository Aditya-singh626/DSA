#include <iostream>
#include <vector>
using namespace std;

int main(){
    int r,c,z;
    cout << "number of row in an array:";
    cin >> r;
    cout << "number of colume in an array:";
    cin >> c;
    cout << "number of colume in an array:";
    cin >> z;
    vector<vector<vector<int>>> arr(r, vector<vector<int>>(c, vector<int>(z)));
    cout << "Enter the element in the array:";
    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){
            for (int k = 0; i < z; k++){
                    cin >> arr[i][j][k];
            }
        }
    }
    int baseAddress = (int)&arr[0][0][0]; // Base address of the array
    int indexr,indexc,indexz;                      // Index of the element to fin
    cout << "Enter the row index you wnat address:";
    cin >> indexr;
    cout << "Enter the colume index you wnat address:";
    cin >> indexc;
    cout << "Enter the z index you wnat address:";
    cin >> indexz;
    int elementSize = sizeof(arr[0][0][0]); // Size of each element in bytes
    int  Addressr = baseAddress+elementSize*((indexr*c*z)+(indexc*z)+indexz);
    int  Addressc = baseAddress+elementSize*((indexz*r*c)+(indexc*r)+indexr);
    cout << "address in row major" << Addressr<<endl;
    cout << "address in colume major" << Addressc<<endl;
    return 0;
}
