#include<iostream>
using namespace std;
#include<vector>
int first_occurence(vector<int>&v,int target) {
int lb=0,ub=v.size()-1;
int ans=-1;
while(lb<=ub) {
    int mid=lb+(ub-lb)/2;
    if(v[mid]==target) {
        ans=mid;
        ub=mid-1;
    }
    else if(v[mid] > target) ub=mid-1;
    else lb=mid+1;

}
return ans;
}
int main() {
int n;
cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++) {
        int x;
        cin>>x;
        v.push_back(x);
    }
int target;
cout<<" \n give target to find its firsst occuurence ";
cin>>target;
int i=first_occurence(v,target);
cout<<i;


}