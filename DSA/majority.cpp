#include <iostream>
using namespace std;

int main() {
int nums[] = {1, 1, 2, 2, 2};
int n = 5;

for (int i = 0; i < n; i++) {
    int count = 1;

    for (int j = 0; j < n; j++) {
        if (i != j && nums[i] == nums[j]) {
            count++;
        }
    }

    if (count > n / 2) {
        cout << nums[i];
        break;
    }
}

return 0;

}
