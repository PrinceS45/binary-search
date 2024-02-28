#include<iostream>
#include<vector>
using namespace std;
// to find minimum index in rotated sorted array 
int min_in_rs(vector<int>& v ) {
    int lb =0 , ub = v.size()-1 ;
    while(lb <= ub ) {
        int mid=lb+(ub-lb)/2;
        if(v[ub] > v[lb]) return v[0];
        if(v[mid] < v[mid-1]) return mid;
        if(v[mid] > v[mid+1]) return mid+1;
        if(v[mid] > v[0]) lb=mid+1;
        else ub=mid-1;
    }

}

int main() {
    vector<int>v={3,4,5,6,1,2,3};
    cout<<min_in_rs(v);
}