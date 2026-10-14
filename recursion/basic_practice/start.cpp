#include <bits/stdc++.h>

using namespace std;

void aryan(string s,int i){
    if(i >= 5){
        return;
    }

    cout<<s<<" "<<i<<endl;
    aryan("aryan",++i);
    cout<<s<<" "<<i<<endl;

}
int main(){

    aryan("aryan",0);
    return 0;
}