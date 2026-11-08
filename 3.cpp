#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

double ARecurrence(const int n);
double AFormula(const int n);

int main()
{
    int n;
    cout << "n = "; cin >> n;

    cout << fixed << setprecision(0);
    cout << "------------------------------------------" << endl;
    cout << "|" << setw(4) << "k" << "  |"
                << setw(12) << "  рекурентність" << " |"
                << setw(20) << "формула" << "   |" << endl;
    cout << "------------------------------------------" << endl;
    for (int k = 0; k <= n; k++)
        cout << "|" << setw(4) << k << "  |"
                    << setw(14) << ARecurrence(k) << "  |"
                    << setw(14) << AFormula(k) << "  |" << endl;
    cout << "------------------------------------------" << endl;

    return 0;
}

// a(i) = 2*a(i-1) + 8*a(i-2) + 3*(-2)^(i-2)
double ARecurrence(const int n)
{
    if (n == 0)
        return 1;                       // a0
    if (n == 1)
        return 1;                       // a1

    double prev2 = 1;                   // a(i-2)
    double prev1 = 1;                   // a(i-1)
    double a = 0;
    for (int i = 2; i <= n; i++)
    {
        a = 2 * prev1 + 8 * prev2 + 3 * pow(-2, i - 2);
        prev2 = prev1;
        prev1 = a;
    }
    return a;
}

// a(n) = (7 * 4^n + (5 + 3n) * (-2)^n) / 12
double AFormula(const int n)
{
    return (7 * pow(4, n) + (5 + 3 * n) * pow(-2, n)) / 12;
}