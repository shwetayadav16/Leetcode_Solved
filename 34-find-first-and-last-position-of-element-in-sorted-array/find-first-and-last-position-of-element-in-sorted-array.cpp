class Solution {
public:

int findFirst(vector<int>& nums, int target) {
    int low = 0, high = nums.size() - 1;
    int index = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (nums[mid] == target) {
            index = mid;         // Potential first occurrence
            high = mid - 1;      // Keep searching in the left half
        } else if (nums[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return index;
}

int findLast(vector<int>& nums, int target) {
    int low = 0, high = nums.size() - 1;
    int index = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (nums[mid] == target) {
            index = mid;         // Potential last occurrence
            low = mid + 1;       // Keep searching in the right half
        } else if (nums[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return index;
}

vector<int> searchRange(vector<int>& nums, int target) {
    int first = findFirst(nums, target);
    int last = findLast(nums, target);
    return {first, last};
}
};
