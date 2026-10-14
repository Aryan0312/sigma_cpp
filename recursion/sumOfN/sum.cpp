#include <bits/stdc++.h>

using namespace std;
int sum(int n ){
    if(n <= 0){
        return 0;
    }

    return n+ sum(n-1);
}

int main(){
    int x ;
    while(true){
        cout<< " give me a number: ";
        cin >> x;

        cout<<sum(x)<<endl;
    }


    return 0;
}