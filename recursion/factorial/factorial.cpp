#include <bits/stdc++.h>

using namespace std;

int fact(int x){
    if(x == 1){
        return 1;
    }

    cout<<x<<endl;
    return x * fact(x - 1);
    

}

int main(){
    int x;
    while(true){
        cout<< "enter num: ";

        cin >> x;
        
        
        cout<<fact(x)<<endl;
    }

    return 0;
}