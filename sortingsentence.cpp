#include<bits/stdc++.h>
using namespace std;



int main(){

    string str;
    getline(cin, str);

    vector<vector<string>> vstr(10);
    string st;
    int index;

    //cout << vstr.size();

    for(int i = 0 ; i < str.size() ; i++){
        if(str[i] >='1' && str[i] <= '9'){
            index = (int)str[i] - '0';
            vstr[index].push_back(st);
            st.clear();
        }
        else{
            st.push_back(str[i]);
        }
    }


    for(auto it : vstr){
        for(auto jt : it){
            cout << jt;
        }
        cout <<" ";
    }
    return 0;
}