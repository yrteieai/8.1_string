#include <iostream>
#include <string>
using namespace std;

// Функція для знаходження індексу третьої крапки
int FindThirdDot(const string& s) {
    int dotCount = 0;
    for (size_t i = 0; i < s.length(); ++i) {
        if (s[i] == '.') {
            dotCount++;
            if (dotCount == 3) {
                return i; // повертаємо індекс третьої крапки
            }
        }
    }
    return -1; // повертаємо -1, якщо третя крапка не знайдена
}

// Функція для заміни кожного четвертого символу на крапку
string ReplaceEveryFourth(string s) {
    for (size_t i = 3; i < s.length(); i += 4) {
        s[i] = '.'; // замінюємо кожний четвертий символ на крапку
    }
    return s; // повертаємо модифікований рядок
}

int main() {
    string str;
    cout << "Enter string:" << endl;
    getline(cin, str);

    // Знаходимо індекс третьої крапки
    int thirdDotIndex = FindThirdDot(str);
    if (thirdDotIndex != -1) {
        cout << "Index of third dot: " << thirdDotIndex << endl;
    }
    else {
        cout << "The string does not contain three dots." << endl;
    }

    // Замінюємо кожний четвертий символ на крапку
    string modifiedStr = ReplaceEveryFourth(str);
    cout << "Modified string: " << modifiedStr << endl;

    return 0;
}
