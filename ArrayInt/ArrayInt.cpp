#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    system("chcp 1251 > nul");
    const int n = 10;
    int j = 0, k;
    cout << "Введите с какого числа начать заполнение массива ";
    cin >> k;
    int ar[n];
    while (j < n) {
        if (k % 2 != 0) {
            ar[j] = k;
            cout << ar[j] << ", ";
            j++;
        }
        k++;
    }
    cout << ar[n];
    system("pause > nul");
    return 0;
}
