#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int c ;
    cout << "Enter the number :" << endl;
    cin >> c ;
    vector<int> OrderID(5);
    cout << "Enter the OrderID :" << endl;
    vector<int> result;
    for(int i = 0 ; i< 5 ; i++){
        cin >> OrderID[i];
    }
    for(int i = 0 ; i < OrderID.size();i++){
        int ans =0 ,add ;
        int num = OrderID[i];
        string num1 = to_string(num);
        int length = num1.length();
        for (int j = 0; j < length ; j++)
        {
            add = num % 10 ;
            ans = ans + add ;   
            num = num / 10 ;
        }
        result.push_back(ans);
    }
    for(int i = 0 ; i < result.size() ; i++){
        if(result[i]  > c){
            cout << OrderID[i] << " ";
        }
    }
    return 0;
}
