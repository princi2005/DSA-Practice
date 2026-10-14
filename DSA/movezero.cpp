#include <iostream>
using namespace std;

int main() {
int nums[] = {0, 1, 0, 3, 12};
int n = 5;
int j = 0;

for (int i = 0; i < n; i++) {
    if (nums[i] != 0) {
        int temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;
        j++;
    }
}

for (int i = 0; i < n; i++) {
    cout << nums[i] << " ";
}

    return 0;
}
