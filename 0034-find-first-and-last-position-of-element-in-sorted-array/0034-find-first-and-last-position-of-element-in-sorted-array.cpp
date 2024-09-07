#include <vector>
using namespace std;

int searchFirst(vector<int>& nums, int target) {
    int start = 0;
    int end = nums.size() - 1;
    int ans = -1;

    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (nums[mid] == target) {
            ans = mid; 
            end = mid - 1;
        } 
        else if (nums[mid] < target) {
            start = mid + 1;
        } 
        else {
            end = mid - 1;
        }
    }
    return ans;
}

int searchLast(vector<int>& nums, int target) {
    int start = 0;
    int end = nums.size() - 1;
    int ans = -1;

    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (nums[mid] == target) {
            ans = mid; // Update answer and search in the right half
            start = mid + 1;
        } 
        else if (nums[mid] < target) {
            start = mid + 1;
        } 
        else {
            end = mid - 1;
        }
    }
    return ans;
}

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        // Call searchFirst and searchLast to find the range
        int first = searchFirst(nums, target);
        int last = searchLast(nums, target);

        // Return both results as a vector
        return {first, last};
    }
};