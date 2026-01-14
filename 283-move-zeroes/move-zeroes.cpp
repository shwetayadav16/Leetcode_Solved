class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j = 0; // index for placing non-zero elements

        // Step 1: Move all non-zero elements to the front
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                nums[j] = nums[i];
                j++;
            }
        }

        // Step 2: Fill the rest with zeros
        while (j < nums.size()) {
            nums[j] = 0;
            j++;
        }
    }
};
