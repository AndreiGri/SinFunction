#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

int Factorial(int i) {
    int summ = 1;
    while (i) {
        summ *= i;
        i--;
    }
    cout << summ << endl;
    return summ;
}

int main()
{
    system("chcp 1251 > nul");
    int n, k = 1;
    double x;
    cout << "Введите значение x для функции sin(x) ";
    cin >> x;
    double s = 0;
    cout << "Введите точность для функции sin(x) ";
    cin >> n;
    for (;k <= n;) {
        if (n % 2 != 0) {
            s += pow(x, k) / Factorial(k);
            k += 2;
            s -= pow(x, k) / Factorial(k);
            k += 2;
        }
        else {
            n--;
        }
    }
    cout << "sin(x) при значении x = " << x << " равен " << s << endl;
    cout << "Проверка " << sin(x) << endl;
    system("pause > nul");
    return 0;
}
