#include <bits/stdc++.h>
using namespace std;

string commentIdentifier(string str)
{
    if (str.find("//") == 0)
     {
        return "Single-line comment";
     }
    else if (str.find("/*") == 0 && str.find("*/") == str.size() - 2)
     {
        return "Multiple line comment";
     }
    else
     {
        return "Not a comment";
     }
}

int main() {
    string input;
    cout << "Enter string : ";
    getline(cin, input);
    cout << commentIdentifier(input) << endl;
    return 0;
}
