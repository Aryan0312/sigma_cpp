#include <bits/stdc++.h>

using namespace std;

bool isSorted(vector<int> & nums,int n,int i){

    if(i == n-1){
        return true;
    }

    if(nums[i] > nums[i+1]){
        cout<<"the array is sorted till the index: "<< i-1 << endl;
        return false;
    }

    return isSorted(nums,n,i+1);

}

int main(){
    vector<int> nums = {1,2,3,6,5};
    cout<< isSorted(nums,nums.size(),0)<<endl;
    return 0;
}