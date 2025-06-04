class Solution {
  public:
 
    // Function to find the minimum number of platforms required at the
    // railway station such that no train waits.
    int findPlatform(vector<int>& arr, vector<int>& dep) {
        // Your code here
        
    
        int n = arr.size();
        sort(arr.begin(), arr.end());
    sort(dep.begin(), dep.end());

    int plat_needed = 1, maxPlat = 1;
    int i = 1, j = 0;

    // Traverse all events in sorted order
    while (i < n && j < n) {
        // If next train arrives before the current one departs
        if (arr[i] <= dep[j]) {
            plat_needed++;
            i++;
        }
        // If train departs before next arrival
        else {
            plat_needed--;
            j++;
        }
        maxPlat = max(maxPlat, plat_needed);
    }

    return maxPlat;
    }
};

