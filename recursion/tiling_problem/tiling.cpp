#include <bits/stdc++.h>

using namespace std;

// Given a 2 × n board and tiles of size 2 × 1, find the total number of ways to completely fill the board using these tiles. Each tile can be placed either horizontally i.e., as a 1 x 2 tile or vertically i.e., as 2 x 1 tile. 
// Two tiling arrangements are considered different if the placement of at least one tile differs.
int tiling(int n){
    if(n <= 1){
    // base case , for 2* 0 you can have 1 way , that is 0 tile is placed and 
    // for 2* 1 you can only place a 2*1 tile
        return 1;
    }

    // place horizontally
    // while placing horizontally , you can only place two tiles stacked horizontally and you get the remaining space as n-2 
    int ans1 = tiling(n-2);

    // place vertically
    // while placing vertically , you can only fit 1 tile on the board and the remaining space is n-1;
    int ans2 = tiling(n-1);

    return ans1 + ans2;
    
}

int main(){
   cout<< tiling(8);
    return 0;
}