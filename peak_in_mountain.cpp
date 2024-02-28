#include<iostream>
using namespace std;
#include<vector>
int peak_in_mountain(vector<int>&v) {
    int lb=0 ,ub=v.size()-1 , ans=-1;
    while(lb <= ub ) {
    int mid=lb+(ub - lb)/2;
    if(v[mid] > v[mid-1]) {
        lb=mid+1;
        ans=max(mid,ans);
    }
    else ub=mid-1;

    }
    return ans;
}

int main() {
vector<int>v={0,4,9,6,1,0};
cout<<endl<<peak_in_mountain(v);
return 0;
}