#include<bits/stdc++.h>
using namespace std;

bool givenSumPair(vector<int> &v, int target){

    int n=v.size();

    int i;
    for(i=0;i<n;i++){
        if(v[i]>v[i+1])
        break;
    }
    int low = (i+1)%n;
    int high = i;
    vector<int>res;
    while(low!=high){

        if(v[low]+v[high] == target){
            return true;
        }
        else if(v[low]+v[high] > target){
            high = (high+n-1)%n;
        }
        else{
            low = (low+1)%n;
        }
                cout<<"high "<<high<<endl;
                cout<<"low "<<low<<endl;
    }
    return false;
}
int main(){
    vector<int>v{11,15,68,9,10,6};
    int target = 16;
    cout<<givenSumPair(v,target)<<endl;
    return 0;
}
