#include<iostream>
using namespace std;

int binary_search(int arr[],int n,int k) {
int lb=0;
int ub=n-1;


while(lb <= ub) {
    int mid=lb+ (ub-lb)/2;
    if(arr[mid]==k) return mid;
    else if(arr[mid] > k) ub=mid-1;
    else lb=mid+1;
}

return -1;


}

int main() {
    int arr[]={6,12,18,32,40,50,60,72,84};
    int n=sizeof(arr)/04;
    int x=binary_search(arr,n,32);
if(x != -1) cout<<"\n item is present at "<<x<<"index";
else cout<<"\n item is not present ";

}