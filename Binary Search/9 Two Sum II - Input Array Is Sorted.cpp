#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i = 0, j = numbers.size() - 1;

        while (i < j) {
            int sum = numbers[i] + numbers[j];
            if (sum == target)
                return {i + 1, j + 1}; // 1-based index
            else if (sum > target)
                j--;
            else
                i++;
        }
        return {};
    }
};

int main() {
    Solution sol;
    vector<int> numbers = {2, 7, 11, 15};
    int target = 9;

    vector<int> result = sol.twoSum(numbers, target);
    if (!result.empty())
        cout << result[0] << " " << result[1] << endl;
    else
        cout << "No pair found" << endl;

    return 0;
}
