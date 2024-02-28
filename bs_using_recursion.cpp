#include<iostream>
using namespace std;
// binary search using recursion

int binary_search(int arr[],int lb ,int ub,int k) {
int mid=lb+(ub -lb)/2;
if(lb > ub) return -1;
if(arr[mid]==k) return mid;
else if (arr[mid] > k) return binary_search(arr,lb,mid-1,k);
else return binary_search(arr,mid+1,ub,k);

}


int main() {
    int arr[]={6,12,18,32,40,50,60,72,84};
    int n=sizeof(arr)/04;
    int x=binary_search(arr,0,n-1,32);
if(x != -1) cout<<"\n item is present at "<<x<<"index";
else cout<<"\n item is not present ";

}