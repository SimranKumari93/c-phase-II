#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool canPlaceCows(vector<int> &stalls, int k, int minDist) {
    int count = 1;            
    int lastPos = stalls[0];

    for (int i = 1; i < stalls.size(); i++) {
        if (stalls[i] - lastPos >= minDist) {
            count++;
            lastPos = stalls[i];
            if (count == k) return true;
        }
    }
    return false;
}

int aggressiveCows(vector<int> &stalls, int k) {
    sort(stalls.begin(), stalls.end());

    int s = 0;
    int e = stalls.back() - stalls.front();
    int ans = -1;

    while (s <= e) {
        int mid = s + (e - s) / 2;
        if (canPlaceCows(stalls, k, mid)) {
            ans = mid;       
            s = mid + 1;
        } else {
            e = mid - 1;
        }
    }
    return ans;
}

int main() {
    vector<int> stalls = {1, 2, 8, 4, 9};
    int k = 3;
    cout << aggressiveCows(stalls, k) << endl; 
    return 0;
}
