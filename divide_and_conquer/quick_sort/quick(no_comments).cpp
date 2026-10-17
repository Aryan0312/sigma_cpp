#include <bits/stdc++.h>

using namespace std;

int partition(vector<int> & nums,int l , int r){


    // the i tracks the idx of the last element that is smaller then pivot 
    int i = l-1;

    // j is used to traverse the array 
    int j = l;



    int pivot = nums[r];
    while(j < r){
        // if current index is smaller the pivot , then update i adn swap j with i 
        if(nums[j] <= pivot){
            i++;
            swap(nums[i],nums[j]);
        }
        j++;
    }


    // after all elements are placeed before the pivot , shift pivot 
    i++;
 
    swap(nums[i],nums[r]);

    return i;
}
void quickSort(vector<int> & nums, int l , int r){
    if( l >=r){
        return;
    }

//    find pivot index
    int pivotIdx = partition(nums,l,r);

    // after partition , the pivot element is in its right place , quick sort left and right parts

// call quick sort on left part 
    quickSort(nums,l,pivotIdx - 1);
// call quick sort on right part 
    quickSort(nums,pivotIdx + 1,r);
}


int main(){
    vector<int> nums = {3,2,1,9,8,7,4,3,1,2,3};
    int n = nums.size();
    quickSort(nums,0,n-1);

    return 0;
}

// quick sort works on pivot and partition
// basically
// pick pivot
// partition smaller elements to pivot left and larger to right
// call quick sort on left and right part