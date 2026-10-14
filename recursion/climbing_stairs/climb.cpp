#include <bits/stdc++.h>

using namespace std;

int climbStairs(int n) {
        if(n == 1 || n == 2) {
            return n;
        }

        int oneStep = climbStairs(n-1);
        int twoStep = climbStairs(n-2);

        return oneStep + twoStep;
    }


int main(){
    cout<<climbStairs(2);
    return 0;
}