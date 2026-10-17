#include <bits/stdc++.h>

using namespace std;

int partition(vector<int> & nums,int l , int r){
    int i = l-1;
    int j = l;

    int pivot = nums[r];
    while(j < r){
        if(nums[j] <= pivot){
            i++;

            cout<<"swapping "<<nums[i]<<" and "<<nums[j]<<endl;
            swap(nums[i],nums[j]);
        }
        j++;
    }

    i++;
    cout<<"shifting pivot: "<<nums[r]<<" with "<< nums[i]<<endl;
    swap(nums[i],nums[r]);
    cout<<"array after partition: ";
    for(int i =l;i<=r;i++){
        cout<<nums[i]<< " ";
    }

    cout<<endl;
    cout<<"pivot is  "<<nums[i]<<endl;
    return i;
}
void quickSort(vector<int> & nums, int l , int r){
    if( l >=r){
        return;
    }

    cout<<"inside partition with nums: ";
    for(int i =l;i<=r;i++){
        cout<<nums[i]<< " ";
    }

    cout<<endl;
    int pivotIdx = partition(nums,l,r);

    cout<<"outside partition with nums: ";
    for(int i =l;i<=r;i++){
        cout<<nums[i]<< " ";
    }

    cout<<endl;

    quickSort(nums,l,pivotIdx - 1);
    quickSort(nums,pivotIdx + 1,r);
}
int main(){
    vector<int> nums = {3,2,1,9,8,7,4,3,1,2,3};
    int n = nums.size();
    quickSort(nums,0,n-1);

    for(int i =0;i<n;i++){
        cout<<nums[i]<< " ";
    }
    return 0;
}