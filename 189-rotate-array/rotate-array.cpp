class Solution {
public:
    void rotate(vector<int>& arr, int k) {
        int n = arr.size();
        k = k % n; // Handle cases where k > n
        if (k == 0) return; // No rotation needed if k is 0
        
        int temp[k]; // Temporary array to store the last k elements
        
        // Store the last k elements in the temporary array
        for (int i = 0; i < k; i++) {
            temp[i] = arr[n - k + i];
        }
        
        // Shift the rest of the array to the right
        for (int i = n - 1; i >= k; i--) {
            arr[i] = arr[i - k];
        }
        
        // Copy the elements from temp back to the start
        for (int i = 0; i < k; i++) {
            arr[i] = temp[i];
        }
    }
};
