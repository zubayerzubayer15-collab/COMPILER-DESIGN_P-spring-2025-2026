#include <iostream>
using namespace std;
bool isAccepted(string str) {
    int i = 0;
    int n = str.length();

    while (i < n && str[i] == 'a') {
        i++;
    }

    int bCount = 0;
    while (i < n && str[i] == 'b') {
        i++;
        bCount++;
    }
    if (bCount == 0) {
        return false; // must have at least one 'b'
    }

    if (i + 1 == n - 1 && str[i] == 'a' && str[i + 1] == 'b') {
        return true;
    }
    return false;
}
int main() {
    string testCases[5] = {
        "bbab",
        "ab",
        "aabbab",
        "aaabbbab",
        "aab"
    };
    for (int i = 0; i < 5; i++) {
        cout << testCases[i] << " -> ";
        if (isAccepted(testCases[i])) {
            cout << "Accepted" << endl;
        } else {
            cout << "Rejected" << endl;
        }
    }
    return 0;
}
