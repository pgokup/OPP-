

#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
    map<string, long long> statePopulation;

    statePopulation["Maharashtra"] = 123000000;
    statePopulation["UttarPradesh"] = 231000000;
    statePopulation["Delhi"] = 19800000;
    statePopulation["Punjab"] = 30000000;
    statePopulation["Bengal"] = 96000000;

    string stateName;

    cout << "Enter the name of a state: ";
    getline(cin, stateName);

    auto it = statePopulation.find(stateName);

    if (it != statePopulation.end()) {
        cout << "The population of " << stateName << " is " << it->second << endl;
    } else {
        cout << "State not found in the database!" << endl;
    }

    return 0;
}
