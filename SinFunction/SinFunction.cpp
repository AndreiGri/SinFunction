#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

int Factorial(int n) {
    int summ = 1;
    while (n) {
        summ *= n;
        n--;
    }
    return summ;
}

int main()
{
    system("chcp 1251 > nul");
    int n, k = 1;
    double x;
    cout << "Введите значение x для функции sin(x) ";
    cin >> x;
    double s = x;
    cout << "Введите точность для функции sin(x) ";
    cin >> n;
    for (int i = 3;i <= n;) {
        s -= pow(x, i) / Factorial(i);
        i += 2;
        s += pow(x, i) / Factorial(i);
        i += 2;
    }
    cout << "sin(x) при значении x = " << x << " равен " << s << endl;
    cout << "Проверка " << sin(x) << endl;
    system("pause > nul");
    return 0;
}
