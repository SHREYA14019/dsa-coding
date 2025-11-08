#include <iostream>
#include <vector>
using namespace std;

bool hasDuplicate(vector<int> nums) {
    for (int i = 0; i < nums.size(); i++) {
        for (int j = i + 1; j < nums.size(); j++) {
            if (nums[i] == nums[j])
                return true;
        }
    }
    return false;
}

int main() {
    int n;
    cin >> n;      
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
        cin >> nums[i];   

    if (hasDuplicate(nums))
        cout << "true";
    else
        cout << "false";
}
