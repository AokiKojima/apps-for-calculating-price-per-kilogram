#include <iostream>
#include <vector>
#include <utility> // for swap

#include "Money/money.h"
// libpqxx
#include <pqxx/pqxx>


using std::vector;
using std::cout;
using std::endl;
using std::cin;
using std::swap;

int main() {

    Money m1;
    m1.setPat();
    m1.setSumm();
    m1.calcing();
    m1.sorting();
    cout << endl;
    m1.print();
    m1.kill();

    return 0;
}