#include<bits/stdc++.h>
using namespace std;



int main(){

    string s;
    getline(cin, s);
    stringstream str(s);

    string word;
    int count = 0;

    while(str >> word){
        cout << word << " ";
        count++;
    }

    cout << count;
    return 0;
}