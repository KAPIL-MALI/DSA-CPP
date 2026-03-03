// Problem: Water the Plants
// Platform: GeeksforGeeks
// Difficulty: Medium
// Approach: Convert sprinklers to intervals and apply greedy interval covering
// Time Complexity: O(n log n)
// Space Complexity: O(n)

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int min_sprinklers(int gallery[], int n) {
        
        vector<pair<int,int>> intervals;
        
        // Step 1: Convert into intervals
        for(int i = 0; i < n; i++){
            if(gallery[i] != -1){
                int left = max(0, i - gallery[i]);
                int right = min(n - 1, i + gallery[i]);
                intervals.push_back({left, right});
            }
        }
        
        // Step 2: Sort by starting point
        sort(intervals.begin(), intervals.end());
        int i = 0, count = 0;
        int target = 0;
        
        // Step 3: Greedy covering
        while(target < n){
            
            int maxReach = -1;
            while(i < intervals.size() && intervals[i].first <= target){
                maxReach = max(maxReach, intervals[i].second);
                i++;
            }
            
            if(maxReach < target)
                return -1;
                
            count++;
            target = maxReach + 1;
        }
        
        return count;
    }
};
