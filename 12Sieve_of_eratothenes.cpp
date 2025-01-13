// SIEVE OF ERATOSTHENES
//it is an algorithms which is used to count the prime numbers to n which is under complexity and Time Limit Exceed
// CHECK PDF FOR BETTER UNDERSTANDING
#include<iostream>
#include<vector>
class Solution {
public:
    int countPrimes(int n) {
        int cnt = 0;
        vector<bool> prime(n+1, true);

        prime[0] = prime[1] = false;
        for(int i=2; i<n; i++) {
            if(prime[i]){
                cnt++;
                for(int j=2*i; j<n; j=j+i) {
                    prime[j] = 0;
                }
            }
        }
        return cnt;
    }
};