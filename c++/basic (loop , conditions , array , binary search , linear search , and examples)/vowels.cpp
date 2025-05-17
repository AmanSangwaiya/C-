#include<iostream>
using namespace std;

int main() {
    string name;
    int vowelCount = 0;

    // Prompt the user for input
    cout << "Enter a name: ";
    getline(cin, name); // Using getline to allow spaces in the name

    // Convert the name to lowercase to make the vowel check case-insensitive
    for (char c : name) {
        // Check if the character is a vowel
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            vowelCount++;
        }
    }

    // Output the result
    cout << "Number of vowels in the name: " << vowelCount << endl;

    return 0;
}