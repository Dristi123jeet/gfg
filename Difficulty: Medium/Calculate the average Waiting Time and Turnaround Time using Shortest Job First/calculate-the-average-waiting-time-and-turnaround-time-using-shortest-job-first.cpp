// User function Template for C++

//Back-end complete function Template for C++

class Solution {
public:
    vector<double> averageTimes(vector<int> arrivalTime, vector<int> burstTime, int n) {
        vector<int> wt(n, 0), tat(n, 0), completed(n, 0);
        int currentTime = 0;
        int completedCount = 0;
        double totalWT = 0, totalTAT = 0;

        while (completedCount < n) {
            int idx = -1;
            int minBT = INT_MAX;

            // Find the shortest job that has arrived
            for (int i = 0; i < n; i++) {
                if (!completed[i] && arrivalTime[i] <= currentTime && burstTime[i] < minBT) {
                    minBT = burstTime[i];
                    idx = i;
                }
            }

            if (idx == -1) {
                // No process has arrived yet, move time forward
                currentTime++;
                continue;
            }

            wt[idx] = currentTime - arrivalTime[idx];
            currentTime += burstTime[idx];
            tat[idx] = wt[idx] + burstTime[idx];

            completed[idx] = 1;
            completedCount++;

            totalWT += wt[idx];
            totalTAT += tat[idx];
        }

        return {totalWT / n, totalTAT / n};
    }
};

  
  
  