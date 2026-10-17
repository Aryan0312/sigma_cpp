#include <bits/stdc++.h>


using namespace std;
void merge(vector<int> & arr,int l , int m , int r){
    int i = l;
        int j = m+1;

        vector<int> temp;
        while(i<=m && j<= r){
            if(arr[i] <= arr[j]){
                temp.push_back(arr[i++]);
            }else{
                temp.push_back(arr[j++]);

            }
        }

        while(i<=m){
            temp.push_back(arr[i++]);
        }

        while(j<=r){
            temp.push_back(arr[j++]);
        }

        for(int i =0;i<temp.size();i++){
            arr[l+i] = temp[i];
        }
}

void mergeSort(vector<int> & arr,int l ,int r){
    if(l>=r){
            return;
        }

        int mid = (l+r)/2;
        mergeSort(arr,l,mid);
        mergeSort(arr,mid+1,r);

        merge(arr,l,mid,r);
}


int main(){

    vector<int> nums = {2,3,1,1,2,3,8,10,222};
     mergeSort(nums,0,nums.size() -1);

    for(auto it: nums){
        cout<< it <<" ";
    }
    return 0;
}