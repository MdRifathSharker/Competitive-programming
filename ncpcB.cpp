#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Function to perform run-length decoding
string runLengthDecode(const string& encoded) {
    string decoded;
    for (int i = 0; i < encoded.length(); i += 2) {
        int count = encoded[i] - '0';
        char ch = encoded[i + 1];
        decoded += string(count, ch);
    }
    return decoded;
}

// Function to perform run-length encoding
string runLengthEncode(const string& decoded) {
    string encoded;
    int count = 1;
    for (int i = 1; i <= decoded.length(); ++i) {
        if (i == decoded.length() || decoded[i] != decoded[i - 1]) {
            encoded += to_string(count);
            encoded.push_back(decoded[i - 1]);
            count = 1;
        } else {
            count++;
        }
    }
    return encoded;
}

// Function to apply the transformation to a string
string applyTransformation(const string& str, int X) {
    string transformed = str;
    for (char &ch : transformed) {
        ch = 'a' + (ch - 'a' + X) % 26;
    }
    return transformed;
}

int main() {
    int Q;
    cin >> Q;

    vector<string> B;
    int X = 0; // Initial value of X

    while (Q--) {
        int type;
        cin >> type;

        if (type == 1 || type == 2) {
            string S;
            int f;
            cin >> S >> f;
            S = runLengthDecode(S);
            S = applyTransformation(S, X);

            if (type == 1) {
                string decodedS = runLengthEncode(S);
                for (int i = 0; i < f; ++i) {
                    B.push_back(decodedS);
                }
            } else {
                for (int i = 0; i < B.size() && f > 0; ++i) {
                    if (B[i] == S) {
                        B.erase(B.begin() + i);
                        --f;
                        --i; // Adjust index since we removed an element
                    }
                }
            }
        } else if (type == 3) {
            string S1, S2;
            cin >> S1 >> S2;
            S1 = runLengthDecode(S1);
            S2 = runLengthDecode(S2);
            S1 = applyTransformation(S1, X);
            S2 = applyTransformation(S2, X);

            sort(B.begin(), B.end());

            int count = 0;
            bool counting = false;
            for (const string& str : B) {
                if (str == S1)
                    counting = true;
                if (counting)
                    ++count;
                if (str == S2)
                    break;
            }
            cout << count << endl;

            // Update X
            X = count;
        }
    }

    return 0;
}
