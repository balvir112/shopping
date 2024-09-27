#include <iostream>
#include <vector>
#include <string>

using namespace std;

int factorial(int n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}

// Function to remove vowels from a word
string removeVowels(const string& word) {
    string result;
    for (char c : word) {
        if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u' &&
            c != 'A' && c != 'E' && c != 'I' && c != 'O' && c != 'U') {
            result += c;
        }
    }
    return result;
}

// Function to calculate the number of permutations without vowels
unsigned long long calculatePermutations(const string& word) {
    string wordWithoutVowels = removeVowels(word);
    int length = wordWithoutVowels.length();
    return factorial(length);
}

int main() {
    // Input array of words
    vector<string> words;
    int numwords;

    cout << "Enter the number of words: ";
    cin >> numwords;
    cin.ignore();

    for(int i = 0; i < numwords; i++){
        string word;
        cout << "Enter word " << i + 1 << ": ";
        getline(cin, word);
        words.push_back(word);
    }



    cout << "Maximum possible permutations of words without vowels:\n";

    for (const string& word : words) {
        string wordWithoutVowels = removeVowels(word);
        unsigned long long permutations = calculatePermutations(word);
        cout << "Word: " << word << " -> Without Vowels: " << wordWithoutVowels
             << " -> Permutations: " << permutations << endl;
    }

    return 0;
}