#include<bits/stdc++.h>
using namespace std;


    bool isAnagram(string s, string t) {
        
        if(s.size() != t.size()){
            return false;
        }
        else{
            unordered_map<char, int> mp;
            for(auto it : s){
                mp[it]++;
            }
            
            for(auto it : t){
                mp[it]--;
                if(mp[it] < 0){
                    return false;
                }
            }
        }
        return true;
    }

int main(){

    string s,t;

    cin >> s >> t;
    
    if(isAnagram(s,t)){
        cout << "Anagram\n";
    }
    else{
        cout << "Not Anagram\n";
    }
    return 0;
}