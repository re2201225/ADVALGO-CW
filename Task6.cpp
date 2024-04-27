//#include <iostream>
//#include <sstream>
//#include <vector>
//
//using namespace std;
//
//// Function that splits a string into words based on spaces
//vector<string> splitIntoWords(const string& text) {
//    vector<string> words; // Vector to store the resulting words
//    stringstream ss(text); // Use stringstream to break the string into words
//    string word;
//    // Extract each word from stream and push into vector
//    while (ss >> word) {
//        words.push_back(word);
//    }
//    return words; // Return the vector containing all words
//}
//
//// Function to print words neatly within a specified maximum width per line
//void printNeatly(const vector<string>& words, int maxWidth) {
//    int currentLength = 0; // Current line length including spaces
//    int lineStart = 0; // Index of the first word in the current line
//
//    // Loop through all words
//    for (int i = 0; i < words.size(); i++) {
//        // Check if adding this word would exceed the max width
//        if (currentLength + static_cast<int>(words[i].size()) > maxWidth) {
//            // Print all words in the current line
//            for (int j = lineStart; j < i; j++) {
//                cout << words[j];
//                if (j < i - 1) cout << " "; // Add a space between words, not after the last one
//            }
//            cout << "\n"; // Start a new line
//            lineStart = i; // Reset the starting word of the new line
//            currentLength = 0; // Reset the current line length
//        }
//        // Update the line length including one space between words
//        currentLength += static_cast<int>(words[i].size()) + 1;
//    }
//
//    // Print the last line of words
//    for (int i = lineStart; i < words.size(); i++) {
//        cout << words[i];
//        if (i < words.size() - 1) cout << " "; // Add space between words, not at the end
//    }
//    cout << endl; // Add a newline at the end of the output
//}
//
//int main() {
//    // Example text to be formatted neatly
//    string text = "Please pass Rola, Rola does not like to code.";
//    int lineWidth = 10; // Max width of the line
//
//    // Split text into words
//    vector<string> words = splitIntoWords(text);
//    // Print words neatly according to specified line width
//    printNeatly(words, lineWidth);
//
//    return 0; // End of program
//}
