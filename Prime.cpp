#include<iostream>
using namespace std;

int main() {
    int n, i;
    cin >> n;

    for(i = 2; i < n; i++) {
        if(n % i == 0) {
            cout << "Not Prime";
            return 0;
        }
    }

    if(n > 1)
        cout << "Prime";
    else
        cout << "Not Prime";

    return 0;
}