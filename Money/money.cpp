#include <iostream>
#include "money.h"

using namespace std;

void Money::setPat() {
    cout << "Enter the pat" << endl;
    cin >> pat;
    summ = new int[pat];
    mass = new int[pat];
    calc = new float[pat];
};

void Money::setSumm() {
    for (int i = 0; i < pat; i++)
    {
        cout << "Enter the summ" << i << endl;
        cin >> summ[i];
        cout << "Enter the mass" << i << endl;
        cin >> mass[i];
    }
};

void Money::calcing() {
    for (int i = 0; i < pat; i++)
    {
        calc[i] = (((float)summ[i] / mass[i]) * 1000);
    }
};

void Money::sorting() {
    for (int i = 0; i < pat; i++) {
        for (int j = 0; j < pat - 1; j++) {
            if (calc[j] > calc[j + 1]) {
                swap(calc[j], calc[j + 1]);
                swap(summ[j], summ[j + 1]);
                swap(mass[j], mass[j + 1]);
            }
        }
    }
};

void Money::print() {
    for (int i = 0; i < pat; i++) { 
        cout << summ[i] << " " << mass[i] << " " << calc[i] << endl;
    }
    
};

// Money::~Money() {
//     cout << "~Money()" << endl;
//     delete[] summ;
//     delete[] mass;
//     delete[] calc;
// };

void Money::kill() {
    delete[] summ;
    delete[] mass;
    delete[] calc;
}