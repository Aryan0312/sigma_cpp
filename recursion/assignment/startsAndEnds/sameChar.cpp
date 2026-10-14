// We are given a string S, we need to find the count of all contiguous
// substrings starting and ending with the same character. [Leetcode Premium Qs]


#include <bits/stdc++.h>
using namespace std;
int cnt = 0;
int substri(string s,int start,int i){
    if(start == s.size()){
        return cnt;
    }
    
    if(i == s.size()){
        return substri(s,start+1,start+1);
    }

    if(s[start] == s[i]){
        cnt++;
    }

    return substri(s,start,i+1);


   
}


int main(){
    substri("abcab",0,0);
    cout<<cnt;
    return 0;
}