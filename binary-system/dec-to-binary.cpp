#include <iostream>
using namespace std;
int number(int decimal){
    int power=1,ans=0;
      while (decimal>0){
        
        int binary_digit = decimal % 2;
        cout << binary_digit;
        decimal = decimal / 2;
        ans=binary_digit*power + ans;
        power=power*10;
    }
    return ans;
}
int main(){
    int decimal;
    cout << "Enter a decimal number: ";
    cin >> decimal;
    int ans=number(decimal);
    cout << "\nThe binary equivalent is: " << ans << endl;
    return 0;
}
