#include <iostream>
#include <unordered_map>
#include <queue>
#include <string>
using namespace std;
/*
Take input
Count frequencies
Build the tree
Generate codes
Encode
Decode
*/
// Tree Node structure
struct Node {
    char ch;
    int freq;
    Node *left, *right;
    Node(char c, int f) : ch(c), freq(f), left(nullptr), right(nullptr) {}
};

// Comparator for priority queue (min-heap)
struct Compare {
    bool operator()(Node* a, Node* b) {
        return a->freq > b->freq;
    }
};

// Function declarations
string takeInput();
unordered_map<char, int> countFrequencies(const string& input);
Node* buildHuffmanTree(const unordered_map<char, int>& freqMap);
void generateCodes(Node* root, const string& code, unordered_map<char, string>& huffmanCode);
string encode(const string& input, const unordered_map<char, string>& huffmanCode);
string decode(Node* root, const string& encodedStr);
void freeTree(Node* root);

int main() {
    // Step 1: Take Input
    string input = takeInput();

    // Step 2: Count Frequencies
    unordered_map<char, int> freqMap = countFrequencies(input);

    // Step 3: Build Huffman Tree
    Node* root = buildHuffmanTree(freqMap);

    // Step 4: Generate Huffman Codes
    unordered_map<char, string> huffmanCode;
    generateCodes(root, "", huffmanCode);

    // Step 5: Encode the input
    string encodedStr = encode(input, huffmanCode);
    cout << "Encoded string: " << encodedStr << endl;

    // Step 6: Decode the encoded string
    string decodedStr = decode(root, encodedStr);
    cout << "Decoded string: " << decodedStr << endl;

    // Free memory
    freeTree(root);

    return 0;
}

// Step 1: Take Input
string takeInput() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);
    return input;
}

// Step 2: Count Frequencies
unordered_map<char, int> countFrequencies(const string& input) {
    // TODO: Implement this function
    return {};
}

// Step 3: Build Huffman Tree
Node* buildHuffmanTree(const unordered_map<char, int>& freqMap) {
    // TODO: Implement this function
    return nullptr;
}

// Step 4: Generate Huffman Codes
void generateCodes(Node* root, const string& code, unordered_map<char, string>& huffmanCode) {
    // TODO: Implement this function
}

// Step 5: Encode Input
string encode(const string& input, const unordered_map<char, string>& huffmanCode) {
    // TODO: Implement this function
    return "";
}

// Step 6: Decode Encoded String
string decode(Node* root, const string& encodedStr) {
    // TODO: Implement this function
    return "";
}

// Optional: Free Memory
void freeTree(Node* root) {
    // TODO: Implement this function
}
