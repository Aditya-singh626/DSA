#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

int main()
{
    vector<int> words = {1, 2, 3, 4, 3, 4, 5, 6, 1, 2, 3, 6, 7, 9, 8, 5, 4};
    map<int, int> freq;

    for (int i = 0; i < words.size(); i++)
    {
        freq[words[i]] =freq[words[i]]+ 5; // counts frequency
    }

    for (auto p : freq)
    {
        if (p.second > 0)
        {
            cout << p.second << "\n";
        }
    }
    // isomorfic
    /*class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char,int>S;
        map<char,int>T;
        if(s.size()==1&&t.size()==1){
            return true;
        }
        for(int i =0 ; i <s.size();i++){
            S[s[i]]  += 1;
            T[t[i]]  += 1;
        }
        if(S.size()==T.size()){
            for(int i = 0 ;i <s.size();i++){
                if(s[i]==t[i]){
                    return false;
                }else{
                    return true;
                }
            }
        }
        return false;
    }
};*/
}