#include <iostream>
#include <string>

using namespace std;

bool hasSQorQS(const string& str) {
    return str.find("SQ") != string::npos || str.find("QS") != string::npos;
}

string replaceSQorQS(string str) {
    size_t pos;
    while ((pos = str.find("SQ")) != string::npos || (pos = str.find("QS")) != string::npos) {
        str.replace(pos, 2, "***");
    }
    return str;
}

int main() {
    string str;
    cout << "Enter string:" << endl;
    getline(cin, str);

    if (hasSQorQS(str))
        cout << "The string contains 'SQ' or 'QS'." << endl;
    else
        cout << "The string does not contain 'SQ' or 'QS'." << endl;

    string modifiedStr = replaceSQorQS(str);
    cout << "Modified string: " << modifiedStr << endl;

    return 0;
}
