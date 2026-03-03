
// Problem: Palindrome Number
// Platform: GeeksforGeeks
// Approach: Reverse the number and compare with original
// Time Complexity: O(d)  (where d = number of digits)
// Space Complexity: O(1)

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
  
    int reverse(int n){
        int ans = 0;
        while(n){
            ans += n%10;
            n/=10;
            if(n){
                ans = ans*10;
            }
        }
        return ans;
    }
    
    bool isPalindrome(int n) {
        // code here.
        return reverse(n) == n;
    }
};
