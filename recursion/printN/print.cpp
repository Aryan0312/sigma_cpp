#include <bits/stdc++.h>

using namespace std;

void printN(int n){
    if(n == 0){
        return;
    }

    printN(n-1);
    cout<<n<<endl;
}

int main(){
    printN(5);
    return 0;
}