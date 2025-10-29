 #include <iostream>
using namespace std;
int number(int decimal){
    int power=1,ans=0;
      while (decimal>0){
        
        int binary_digit = decimal % 10;
        cout << binary_digit;
        decimal = decimal / 10;
        ans=binary_digit*power + ans;
        power=power*2;
    }
    return ans;
}
int main(){
    int decimal;
    cout << "Enter a binary number: ";
    cin >> decimal;
    int ans=number(decimal);
    cout << "\nThe decimal equivalent is: " << ans << endl;
    return 0;
}
