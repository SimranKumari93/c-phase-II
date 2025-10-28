#include <iostream>
#include <vector>
#include <algorithm>
#include <numbers>
using namespace std;

// before i apply binary search i need to check the constraints 

bool isPossible(vector<int> &arr, int k, int mid){
     
    int cnt = 1;
   // int pages = 0;

    int pageSum = 0;

    for(int pages: arr){
        if(pageSum + pages <= mid){
            pageSum += pages;
        }else {
            cnt++;
            if(cnt > k || pages > mid)
            pages = pageSum;
             return false;
        }
    }
    return true;
}

int findPages(vector<int> &arr, int k) {   // k is the numbe rof students 
        // code here
            if (k > arr.size()) return -1;  // not enough books

        int s = *max_element(arr.begin(), arr.end());
        int e = accumulate(arr.begin(), arr.end(), 0);

        int ans = -1; 
        int mid = s + (e - s) / 2;
        
        while(s <= e){
            if(isPossible(arr, k, mid)){
               ans = mid;
               e = mid - 1;

            }
            else {
            s = mid + 1;
            }
            mid = s + ( e - s) / 2;
        }
        return  ans; 
    }
int main()
{
  vector<int> arr = {12, 34, 67, 90};   
  int k = 2;
  cout<< findPages(arr, k)<< endl;
} // namespace std;

