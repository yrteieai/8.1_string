#include <iostream>
#include <string>
using namespace std;

// ������� ��� ����������� ������� ������ ������
int FindThirdDot(const string& s) {
    int dotCount = 0;
    for (size_t i = 0; i < s.length(); ++i) {
        if (s[i] == '.') {
            dotCount++;
            if (dotCount == 3) {
                return i; // ��������� ������ ������ ������
            }
        }
    }
    return -1; // ��������� -1, ���� ����� ������ �� ��������
}

// ������� ��� ����� ������� ���������� ������� �� ������
string ReplaceEveryFourth(string s) {
    for (size_t i = 3; i < s.length(); i += 4) {
        s[i] = '.'; // �������� ������ ��������� ������ �� ������
    }
    return s; // ��������� ������������� �����
}

int main() {
    string str;
    cout << "Enter string:" << endl;
    getline(cin, str);

    // ��������� ������ ������ ������
    int thirdDotIndex = FindThirdDot(str);
    if (thirdDotIndex != -1) {
        cout << "Index of third dot: " << thirdDotIndex << endl;
    }
    else {
        cout << "The string does not contain three dots." << endl;
    }

    // �������� ������ ��������� ������ �� ������
    string modifiedStr = ReplaceEveryFourth(str);
    cout << "Modified string: " << modifiedStr << endl;

    return 0;
}
