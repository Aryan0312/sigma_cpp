#include <bits/stdc++.h>

using namespace std;
int i = 0;

int pow(int x,int n){
    // base case

    i++;
    if(n == 0){
        return 1;
    }

    long long halfPower = pow(x,n/2);
    long long halfPowerSq = halfPower * halfPower;

    if(n % 2 != 0){
        // when the power is odd , then you multiply by n once more
        return x* halfPowerSq;
    }

    return halfPowerSq;
}
int main(){
    cout<<pow(10,100)<<endl<< "depth: "<<i;
    return 0;
}