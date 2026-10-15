// You have 3 towers and N disks of different sizes which can slide onto any tower. The
// puzzle starts with disks sorted in ascending order of size from top to bottom (i.e., each
// disk sits on top of an even larger one).


#include <bits/stdc++.h>

using namespace std;

int cnt = 0;
void hanoi(int n , string source , string helper , string destination){

    if(n == 1){
        cout<<++cnt<<": transfer disk "<<n << " from " << source<<" to "<<destination<<endl;
        return;
    }

    hanoi(n-1,source , destination,helper);
    cout<<++cnt<<": transfer disk "<<n << " from " << source<<" to "<<destination<<endl;

    hanoi(n-1,helper , source,destination);


}
int main(){
    int n ;
    while(true){
        cnt = 0;
        cout<<"enter height of the tower: ";
        cin>>n;
        hanoi(n,"S","H","D");

    }
    
    return 0;
}

