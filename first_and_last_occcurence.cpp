#include<iostream>
using namespace std;
#include<vector>
// first and last position of given target.

 int lb(vector<int>&v , int target) {
    int l=0 , h=v.size()-1;
    int cand=-1;
    while(l <= h) {
      int mid=l+(h-l)/2;
      if(v[mid] >= target ) {
         h=mid-1;
         if(v[mid]== target) cand=mid;
      }
      else l=mid+1;
    
 }
 return cand;
 }
 
 int ub(vector<int>&v,int target) {
    int l=0 , h=v.size()-1 ,cand=-1;
    while(h>=l) {
      int mid=l+(h-l)/2;
      if(v[mid] <= target)
         l=mid+1;
         if(v[mid]==target) cand =mid;        
         else h=mid-1;
 }
 return cand;
 }



int main() {
vector<int>v={1,2,3,3,3,5,11};
int target =3;
vector<int>ans;
int x=lb(v,target);
if(x != -1) {
int y=ub(v,target);
ans.push_back(x);
ans.push_back(y);
}
else {
   ans.push_back(-1);
   ans.push_back(-1);

}
for(int i=0;i<ans.size();i++) {
   cout<<ans[i]<<" ";
}
}