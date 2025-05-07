#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    vector<string> Vincent;
    vector<string> Leo;
    vector<string> Invitee;

    string name;

    cout << "#Vincent's friend:" << endl;
    while (cin >> name) {
        if (name == "0") break;
        Vincent.push_back(name);
    }
    
    cout <<endl;
    
    cout << "#Leo's friend:" << endl;
    while (cin >> name) {
        if (name == "0") break;
        Leo.push_back(name);
    }

    for (int i = 0; i < Vincent.size(); i++) {
        Invitee.push_back(Vincent[i]);
    }

    for (int i = 0; i < Leo.size(); i++) {
        bool duplicated = false;
        for (int j = 0; j < Invitee.size(); j++) {
            if (Leo[i] == Invitee[j]) {
                duplicated = true;
                break;
            }
        }
        if (!duplicated) {
            Invitee.push_back(Leo[i]);
        }
    }

    cout <<endl;
     
    cout << "#Invitee:" << endl;
    for (int i = 0; i < Invitee.size(); i++) {
        cout << Invitee[i] << endl;
    }

    return 0;
}
