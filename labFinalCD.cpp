#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <unordered_set>

using namespace std;

int main() {

    ifstream file("identifiers.txt");
    if (!file.is_open()) {
        cerr << "Error: Unable to open identifiers.txt" << endl;
        return 1;
    }


    unordered_set<string> identifiers;


    string identifier;
    while (file >> identifier) {

        identifiers.insert(identifier);
    }


    file.close();


    cout << "Welcome";
    int x = 24 % 10;
    if (x == 4) {
       x = 40;
    }
    int y = 50;
    int z = 60;


    for (const auto& id : identifiers) {
        cout << "\nIdentifier: " << id << endl;

    }

    return 0;
}
