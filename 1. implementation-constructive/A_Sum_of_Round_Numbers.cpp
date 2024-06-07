#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int power(int base, int exponent) {
    int result = 1;
    for (int i = 0; i < exponent; i++) {
        result *= base;
    }
    return result;
}

vector<int> decomposeNumber(int n) {
    vector<int> result;
    int digits = 0, temp = n;
    
    // Count the number of digits
    while (temp > 0) {
        temp /= 10;
        digits++;
    }
    
    // Generate the round numbers
    for (int i = digits; i >= 1; i--) {
        int divisor = power(10, i - 1);
        int roundNumber = (n / divisor) * divisor;
        if (roundNumber > 0) {
            result.push_back(roundNumber);
            n -= roundNumber;
        }
    }
    
    // If there are any remaining digits, add them as separate round numbers
    if (n > 0) {
        while (n > 0) {
            int digit = n % 10;
            n /= 10;
            result.push_back(digit * pow(10, n));
        }
    }
    
    return result;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<int> decomposition = decomposeNumber(n);
        cout << decomposition.size() << endl;
        for (int roundNumber : decomposition) {
            cout << roundNumber << " ";
        }
        cout << endl;
    }
    
    return 0;
}