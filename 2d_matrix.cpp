#include<iostream>
#include<vector>
using namespace std;
/* search the target value in 2d matrix of dimensions n x m and return 1 if found 
else return 0. this matrix has the following properties :
1. integer in each row are sorted from left to right 
2. the first integer of each row is greater than the last integer of the previous row . */
    
bool b_search(vector<vector<int> > & v , int target ) {
    int n=v.size()  , m=v[0].size();
// no of row            no of coloumn
int lb=0, ub=n*m-1;
while(lb <= ub) {
    int mid=lb + (ub - lb )/2 ;
    int x= mid/m;  // row no 
    int y = mid % m; //  coloumn no
    if(v[x][y] == target ) return true;
    else if(v[x][y] > target ) ub=mid-1;
    else lb=mid+1;
    }
return false;

}


int main() 
{
vector<vector<int> > v= { {1,3,5,7} ,{10,11,16,20} , {23,30,34,60}};
cout<<b_search(v,3);

    return 0;
}