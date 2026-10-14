#include <bits/stdc++.h>

using namespace std;

void removeDuplicates(string str , string &ans, vector<bool> & map){
    
    if(str.size()  ==  0){
        return;
    }
    
    
    if(!map[(str[str.size() -1]-'a')]){
        ans = str[str.size() -1] + ans;
        map[(str[str.size() -1]-'a')] = true;
    }
    
    str.pop_back();
    return removeDuplicates(str,ans,map);


}

int main(){
    vector<bool> map(26,false);

    string str = "aarryyaann";

    string ans = "";

    removeDuplicates(str,ans,map);

    cout<< ans;


    return 0;
}