#include <bits/stdc++.h>

using namespace std;

int lOccur(vector<int> & arr, int key,int i){

    if(i >= arr.size()){
        return -1;
    }

    int idx = lOccur(arr,key,i+1);

    if(idx == -1 && arr[i] == key){
       
        return i;
        
    }

    return idx;


}

int main(){
    
    vector<int> arr = {3,3,3,3};

    cout<<lOccur(arr,3,0)<<endl;

    return 0;
}