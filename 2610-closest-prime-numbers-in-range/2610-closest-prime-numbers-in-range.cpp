class Solution {
public:
    vector<int> closestPrimes(int left, int right) {
        vector<bool> isPrime(right + 1, true);
    isPrime[0] = isPrime[1] = false;  // 0 and 1 are not prime

    // Sieve of Eratosthenes
    for (long i = 2; i * i <= right; i++) {
        if (isPrime[i]) {
            for (long j = i * i; j <= right; j += i) {
                isPrime[j] = false;
            }
        }
    }

    vector<int> primes;
    for (int i = left; i <= right; i++) {
        if (isPrime[i]) {
            primes.push_back(i);
        }
    }

    // ✅ Return immediately if less than 2 primes found
    if (primes.size() < 2) return {-1, -1}; 

    int minDiff = INT_MAX;
    vector<int> ans(2, -1);

    // Find the closest prime pair
    for (int i = 1; i < primes.size(); i++) {
        int diff = primes[i] - primes[i - 1];
        if (diff < minDiff) {
            minDiff = diff;
            ans = {primes[i - 1], primes[i]};
        }
    }

    return ans;
        
    }
};