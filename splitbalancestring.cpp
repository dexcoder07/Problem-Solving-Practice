#include<bits/stdc++.h>
using namespace std;



int main(){

    string s;
    cin >> s;

    int var = 0;
    int count = 0;

    for(int i = 0 ; i < s.size() ; i++){
        if(s[i] == 'L'){
            var++;
        }
        else{
            var--;
        }
        if(var == 0){
            count++;
        }
    }

    cout << count << endl;
    return 0;
}