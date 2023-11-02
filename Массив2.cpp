#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;

int t = 0;
int n;

int subtraction();
void fin();

int main()
{
    setlocale(0, "");

    cout << "Введите число" << endl;
    cin >> n;

    subtraction();


    do {
        fin();

    } while (t % 10 == 0);

    cout << t << endl;

    return 0;
}

int subtraction()
{
    t = 0;
    while (n > 0) {
        t += n % 10;
        n /= 10;
    }


    return n;
}

void fin()
{
    do {
        cout << t << endl;
        n = t;
        subtraction();

    } while (n % 10);
}