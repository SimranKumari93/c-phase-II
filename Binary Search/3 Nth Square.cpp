#include<iostream> 

using namespace std; 


int getSquare(int n){
  int s = 0, ans = -1;
  int e = n -1;
  
  int mid = s + (e - s) / 2;

  while(s <= e){
     int sq = mid * mid; 
    if(sq == n){
        return mid;     
    }else if(sq < n){
         ans = mid; 
         s = mid + 1;
    }
    else{
       
       e = mid - 1;
    }
mid = s + (e - s) / 2;
  }
  return ans;
}
int main(){
 int nthRoot= 25;

 int res = getSquare(nthRoot);
   cout<< "root of n is " << res << endl;
    return 0;
}