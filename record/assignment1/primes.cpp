#include <iostream>

using namespace std;

int main() {
    int num;
    bool valid;

    cout << "Enter the limit of prime numbers: ";
    cin >> num;

    int limit = 2;

    while (num > 0) {
        valid = false;

        for (int i = 2; i <= limit / 2 && i != 0; i++) {
            if (limit % i == 0) {
                // number is not prime
                valid = true;
                break;
            }
        }

        if (!valid) {
            // it's a prime
            cout << limit << " ";
            --num;
        }

        ++limit;
    }

    return 0;
}
