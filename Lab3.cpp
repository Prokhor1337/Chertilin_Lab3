#include <iostream>
#include <cmath>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    double a = 0, b = 5;
    double epsilon = 0.0001;
    double c;

    do {
        c = (a + b) / 2;
        double fc = c * c - 4;

        if (fc == 0 || (b - a) / 2 < epsilon) {
            break;
        }

        if (fc > 0) {
            b = c;
        }
        else {
            a = c;
        }
    } while ((b - a) >= epsilon);

    cout << "Корінь рівняння приблизно дорівнює: " << c << endl;
    return 0;
}
