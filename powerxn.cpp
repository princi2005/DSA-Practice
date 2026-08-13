#include <iostream>
using namespace std;

class Solution {
public:
    double myPow(double x, int n) {

        long long binform = n;

        // Negative exponent
        if (binform < 0) {
            x = 1 / x;
            binform = -binform;
        }

        double ans = 1;

        // Binary Exponentiation
        while (binform > 0) {

            // If current binary bit is 1
            if (binform % 2 == 1) {
                ans *= x;
            }

            // Square x
            x *= x;

            // Move to next binary bit
            binform /= 2;
        }

        return ans;
    }
};

int main() {
    Solution obj;

    double x;
    int n;

    cout << "Enter x: ";
    cin >> x;

    cout << "Enter n: ";
    cin >> n;

    cout << "Answer = " << obj.myPow(x, n) << endl;

    return 0;
}