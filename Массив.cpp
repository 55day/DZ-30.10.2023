#include <iostream>
#include <cstdlib>
using namespace std;

const int SizeMass1 = 20;
const int SizeMass2 = 10;
int num1[SizeMass1];
int num2[SizeMass2];

void random();

int main()
{
    setlocale(0, "");
    srand(time(0));

    random();

    return 0;
}
void random() {
    for (int i = 0; i < SizeMass1; i++)
    {
        num1[i] = 1 + rand() % 20;
        cout << num1[i]<<" ";
    }
    cout << endl;
    for (int j = 0; j < SizeMass2; j++) {
         num2[j] = 1 + rand() % 20;
         cout << num2[j]<<" ";
    }
}
