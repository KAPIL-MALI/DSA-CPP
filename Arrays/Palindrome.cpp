
// Problem: Palindrome Number
// Platform: GeeksforGeeks
// Approach 1: Reverse the number and compare with original
// Approach 2: Converting number into the string 
// Approach 3: Doing the same work using a function ✅ (Implemented below)
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
