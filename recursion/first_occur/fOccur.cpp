#include <bits/stdc++.h>

using namespace std;

int fOccur(vector<int> & arr, int key,int i){

    if(i >= arr.size()){
        return -1;
    }

    if(arr[i] == key){
        return i;
    }

    return fOccur(arr,key,i+1);

}

int main(){
    
    vector<int> arr = {3,3,3,3};

    cout<<fOccur(arr,9,0)<<endl;

    return 0;
}