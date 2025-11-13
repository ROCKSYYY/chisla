/************************
* Автор: Долинин Никита *
* Название: Вариант 5   *
************************/
#include <iostream>
#include <string>

using namespace std;

int main() {
  const int one[13] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
  const string two[13] = {"M",  "CM", "D",  "CD", "C", "XC", "L","XL", "X", "IX", "V",  "IV", "I"};

  string rim = "";
  int num;

  cout << "chislo: ";
  cin >> num;

  if (!cin || num <= 0 || num > 3999) {
    cout << "Error\n";
    return 1;
  }

  for (int i = 0; i < 13; ++i) {
    while (num >= one[i]) {
      rim += two[i];
      num -= one[i];
    }
  }

  cout << rim << '\n';
  return 0;
}
