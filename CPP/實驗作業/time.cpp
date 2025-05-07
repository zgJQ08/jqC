#include <iostream>
using namespace std;

class Time {
private:
    int hour;
    int minute;

public:
    Time(int H, int M) : hour(H), minute(M) {}

    void Convert() {
   
        double hA = (hour % 12 + static_cast<double>(minute) / 60.0) * 30.0;

        double mA = minute * 6.0;

        double Df = (hA - mA>0)? (hA - mA) :(mA- hA) ;

        double sA = Df;
        if (sA > 180.0) {
            sA = 360.0 - sA;
        }

        cout <<sA<< endl;
    }
};

int main() {
    int cH, cM;
    while (cin >> cH) {
        if (cH == -1) {
            break;
        }
        cin >> cM;
        Time t(cH, cM);
        t.Convert();
    }
    return 0;
}
