class Solution {
public:
    int getMoneyAmount(int n) {
        int s = 0, e = n -1; 
        int mid, ans;

        while(s <= e){
            mid = s + ( e - s) / 2;
            if(getMoneyAmount(ans)){
                ans = min(ans, mid);
                e = mid - 1;
            }else{
                s = mid + 1;
            }
            // mid = s + ( e - s) / 2;
        }
        return ans;
    }
};