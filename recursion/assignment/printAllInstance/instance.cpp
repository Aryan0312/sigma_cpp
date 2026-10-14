#include <bits/stdc++.h>

using namespace std;
void search(int i , vector<int> & nums, int key){

    if(i == nums.size()){
        return;
    }

    if(nums[i] == key){
        cout<<i<<" ";
    }

    search(i+1,nums,key);

}
int main(){
    vector<int> nums = {3, 2, 4, 5, 6, 2, 7, 2, 2};
    search(0,nums,2);
    
    return 0;
}