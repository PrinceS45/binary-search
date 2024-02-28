/* Problems on Binary Search

You have ‘n’ (n ≤ 10^5) boxes of chocolate. Each box contains a[i] (a[i] ≤ 10000) chocolates. You need to distribute these boxes among ‘m’ students such that the maximum number of chocolates allocated to a student is minimum.

Conditions:

One box will be allocated to exactly one student.
All the boxes should be allocated.
Each student has to be allocated at least one box.
Allotment should be in contiguous order; for instance, a student cannot be allocated box 1 and box 3, skipping box 2.
Calculate and return that minimum possible number.

Assume that it is always possible to distribute chocolates.

The first line of input will contain value n, the number of boxes. The second line will contain n numbers denoting the number of chocolates in each box. The third line will contain m number of students.

Input:

4
12 34 67 90
2

Output:

113   */


#include<iostream>
#include<vector>
using namespace std;

bool canDis(vector<int>&v,int mid,int s) {
    int req_stu=1 ,curr_sum=0 , n=v.size(); // no of boxes

    for(int i=0 ;i< n;i++) {
        if(v[i] > mid) return false;
        if(v[i]+curr_sum  > mid) {
            req_stu++;
            curr_sum=v[i];
            if(req_stu > s) return false;
        } 
        else {
            curr_sum+=v[i];
        }
        
    }
    return true;
}
int distChoco(vector<int>&v,int s) {
    int l=0 , h=0 ,ans=-1;
    for(int i=0 ; i<v.size();i++) {
        h+=v[i];
    }

    // apply binarry search
    while(l <= h) {
        int mid=l+(h-l)/2;
        if(canDis(v,mid,s)) {
            ans=mid;
            h=mid-1;

        }
        else l=mid+1;

    }
    return ans;
}

int main() {
    vector<int>v={12,34,67,90};
    int student=2;
    cout<<distChoco(v,student);
    
}