#include <bits/stdc++.h>
using namespace std;

class Cricketer {
    public:
    int jersey;
    string country;
    Cricketer(string country, int jersey) {
        this->country = country;
        this->jersey = jersey;
    }
};
int main() {
    Cricketer  *dhoni = new Cricketer("India", 100);
    Cricketer  *kohli = new Cricketer("India", 18);
    // cout << dhoni->jersey << endl;
    // cout << kohli->jersey << endl;
    // kohli = dhoni;
    /*
    kohli->country = dhoni->country;
    kohli->jersey = dhoni->jersey;
    */
    *kohli = *dhoni;
    // cout << dhoni->jersey << " " << kohli->jersey << endl;
    // delete dhoni;
    delete dhoni;
    cout << kohli->country << " " << kohli->jersey << endl;

    return 0;
}