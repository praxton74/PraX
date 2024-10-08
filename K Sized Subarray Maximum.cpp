class Solution {
  public:
    // Function to find maximum of each subarray of size k.
    vector<int> max_of_subarrays(int k, vector<int> &arr) 
    {
        int n = arr.size();
        if (n == 0) 
        return {};
        
        vector<int> left(n), right(n), result;
    
        
        for (int i = 0; i < n; ++i) 
        {
            if (i % k == 0) 
            {
                left[i] = arr[i];  // Start of a block
            } 
            else 
            {
                left[i] = max(left[i - 1], arr[i]);
            }
        }
    
        
        for (int i = n - 1; i >= 0; --i) 
        {
            if (i == n - 1 || (i + 1) % k == 0) 
            {
                right[i] = arr[i];  // End of a block
            } 
            else 
            {
                right[i] = max(right[i + 1], arr[i]);
            }
        }
    
        // Calculate max for each sliding window
        for (int i = 0; i <= n - k; ++i) 
        {
            result.push_back(max(right[i], left[i + k - 1]));
        }
    
        return result;
   
