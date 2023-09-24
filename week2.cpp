#include <iostream>
#include <string>

using namespace std;

int main() {
    for (int i = 0; i < 3; i++) {
        string input1;
        cout << "What is the first string: ";
        cin >> input1;

        string input2;
        cout << "What is the second string: ";
        cin >> input2;

        string result = input1 + " " + input2;
        cout << "The concatenated string is " << result << endl;
        cout << "\n";  // Add a newline for better formatting
    }

    return 0;
}
