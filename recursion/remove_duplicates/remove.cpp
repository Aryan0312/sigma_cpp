#include <bits/stdc++.h>

using namespace std;

void removeDuplicates(string str, int i , string &ans, vector<bool> & map){

    // base case is that when the entire array is traversed
    if(i  ==  str.size()){
        return;
    }


    // kaam : what we decide to do each turn , we decide to just check in the map , whether the current element already was there or not , if it wasnt , then you just add it to answer and mark in map as true
    // basically a hashmap
    if(!map[(str[i]-'a')]){
        ans += str[i];
        map[(str[i]-'a')] = true;
    }


    // then you call your function again for the next element
    return removeDuplicates(str,i+1,ans,map);

}

int main(){
    vector<bool> map(26,false);

    string str = "aarryyaann";

    string ans = "";

    removeDuplicates(str,0,ans,map);

    cout<< ans;


    return 0;
}