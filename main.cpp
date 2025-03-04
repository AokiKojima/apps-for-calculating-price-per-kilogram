#include <iostream>
#include <vector>
#include <utility> // for swap
// libpqxx
#include <pqxx/pqxx>

using std::vector;
using std::cout;
using std::endl;
using std::cin;
using std::swap;


class Money {
private:
    int pat;
    int* summ;
    int* mass;
    float* calc;
public:
    void setPat() {
        cout << "Enter the pat" << endl;
        cin >> pat;
        summ = new int[pat];
        mass = new int[pat];
        calc = new float[pat];
    };
    void setSumm() {
        for (int i = 0; i < pat; i++)
        {
            cout << "Enter the summ" << i << endl;
            cin >> summ[i];
            cout << "Enter the mass" << i << endl;
            cin >> mass[i];
        }
    }
    void calcing() {
        for (int i = 0; i < pat; i++)
        {
            calc[i] = (((float)summ[i] / mass[i]) * 1000);
        }
    };
    void print() {
        for (int i = 0; i < pat; i++) {
            cout << summ[i] << " " << mass[i] << " " << calc[i] << endl;
        }
        
    };
    void sorting() {
        for (int i = 0; i < pat; i++) {
            for (int j = 0; j < pat - 1; j++) {
                if (calc[j] > calc[j + 1]) {
                    swap(calc[j], calc[j + 1]);
                    swap(summ[j], summ[j + 1]);
                    swap(mass[j], mass[j + 1]);
                }
            }
        }
    }
    ~Money() {
        cout << "~Money()" << endl;
        delete[] summ;
        delete[] mass;
        delete[] calc;
    }
};

int main() {

    Money m1;
    m1.setPat();
    m1.setSumm();
    m1.calcing();
    m1.sorting();
    cout << endl;
    m1.print();

    return 0;
}