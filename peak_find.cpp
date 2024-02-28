#include<iostream>
#include<vector>
using namespace std;
int find_peak(vector<int>&v) {
    int lb=0 ,ub=v.size()-1;
    while(lb <= ub) {
    int mid=lb+(ub-lb)/2;
    if(mid==0) {
        if(v[mid] > v[mid+1]) return mid;
        else return mid+1;
    } 
    else if(mid==v.size()-1) {
      if(v[mid] > v[v.size()-2] ) 
      return mid;
      else return v.size()-2;
    }
    else {
        if(v[mid] > v[mid+1]  and v[mid] > v[mid-1]) return mid;
        else if(v[mid] > v[mid-1]) // increasing curve 
        lb=mid+1;
        else // decreasing curve 
        
        ub=mid-1;
    }
    

        
           }
}

int main() {
vector<int>v={1,2,1,2,6,10,3};
cout<<find_peak(v);
}