#include <iostream>
#include <string>
using namespace std;
int main() {
    string firstString, secondString;

    // Input the first string
    cout << "Enter the first string: ";
    getline(cin, firstString);

    // Input the second string
    cout << "Enter the second string: ";
    getline(cin, secondString);

    // Find the position of the second string in the first string
    size_t position = firstString.find(secondString);

    // Check if the second string exists in the first string
    if (position != string::npos) {
        cout << "The second string exists in the first string at position " << position << endl;
    } else {
        cout << "The second string does not exist in the first string." << endl;
    }

    return 0;
}
