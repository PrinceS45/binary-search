#include<iostream>
using namespace std;
#include<vector>

int b_search_rotated(vector<int>&v , int target) {
    int lb=0 , ub= v.size()-1 , ans=-1;
    while (lb <= ub)
    {
        int mid=lb+(ub - lb)/2;
        if(v[mid] >= v[lb] ) {
            if(target >= v[lb] and target <= v[mid]) {
                ub = mid-1;
                if(target == v[mid]) ans=mid;
            }
            else lb=mid+1;
        }
        else {
            if(target <= v[ub] and target >=v[mid]) {
                lb = mid +1;
                if(target == v[mid]) ans = mid;

            }
            else ub = mid -1;
        }
    }
    return ans;
    
}

int main() {
    vector<int>v={3,4,5,1,2};
   int x=b_search_rotated(v,1);

   cout<<endl<<x;
}