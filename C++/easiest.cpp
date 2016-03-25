#include <iostream>

using namespace std;

int sumInput(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main() {
    int num;
    cin >> num;

    while (num != 0) {
        int m = 11;

        while (sumInput(m * num) != sumInput(num)) {
            if (sumInput(m * num) == sumInput(num)) {
                break;
            } else {
                m++;
            }
        }
        cout << m << endl;
        cin >> num;
    }

    return 0;
}
