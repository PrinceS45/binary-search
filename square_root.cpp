#include<iostream>
using namespace std;
// square root of non negetive number
int sqrt (int c) {
    int lb=1,ub=c;
    int ans=-1,mid;
while (lb<=ub)
{
    mid=lb+(ub-lb)/2;
    if(mid*mid<=c) {
        ans=mid;
        lb=mid+1;
    }
   else
        ub=mid-1;
    
}
return ans;

}

int main() {
    cout<<sqrt(100);
}