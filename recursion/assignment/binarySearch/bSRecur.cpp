// binary search recursivley

#include <bits/stdc++.h>

using namespace std;
int binarySearch(int high, int low, int key,vector<int> & nums){
    if(low>high){
        return -1;
    }

    int mid = low+(high-low)/2;

    if(nums[mid] == key){
        return mid;
    }else if(nums[mid] > key){
        return binarySearch(mid-1,low,key,nums);
    }else{
        return binarySearch(high,mid+1,key,nums);

    }

    



}
int main(){
    vector<int> nums = {1,2,3,4,5,6,7,8,9,10};
    int i;
    while(true){
        cout<<"enter the value to search: ";
        cin >> i;

        
        
        cout<<"your element is on idx: "<<binarySearch(nums.size() - 1 ,0,i,nums)<<endl;

    }



    return 0;
}