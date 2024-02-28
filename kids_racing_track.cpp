/* A new racing track for kids is being built in New York with ‘n’ starting spots. The spots are located along a straight line at positions (x_1, x_2, \ldots, x_n) ((x_i < 10^9)). For each (i), (x_{i+1} > x_i).

At a time only ‘m’ children are allowed to enter the race. Since the race track is for kids, they may run into each other while running. To prevent this, we want to choose the starting spots such that the minimum distance between any two of them is as large as possible. What is the largest minimum distance?

The first line of input will contain the value of (n), the number of starting spots. The second line of input will contain the (n) numbers denoting the location of each spot. The third line will contain the value of (m), number of children.

Input

5
1 2 4 8 9
3

Output

3  
*/

#include<iostream>
#include<vector>
using namespace std;
bool can_place(vector<int>&v,int c,int mid) {
    int lp=v[0];
    int c_req=1;
    for(int i=0;i<v.size();i++) {
        if(v[i]-lp >=mid) {
            c_req++;
            lp=v[i];
            if(c_req==c) return true;
        }
    }
    return false;
}


int max_dis_track(vector<int>&v,int c) {
    int n=v.size(), ans=-1;
    int lb=1;// minimum 1 unit to hoga he 
    int ub=v[n-1]-v[0];
    while(lb <= ub) {
        int mid=lb+(ub-lb)/2;
        if(can_place(v,c,mid)) {
            ans=mid;
            lb=mid+1;
        }
        else ub=mid-1;

    }
    return ans;
}

int main() {
    vector<int>v={1,2,4,8,9};
    int child=3;
    cout<<max_dis_track(v,child);
}