// Дано літерний рядок, який містить послідовність символів s[0], ... , s[n], ...
// Вилучити з цієї послідовності групи символів, які знаходяться між дужками «(», «)».
// Самі дужки теж мають бути вилучені.
// Якщо всередині деякої пари дужок є пара інших дужок(вкладені дужки), то вилучаються всі символи, які знаходяться між самими зовнішніми дужками і самі ці дужки.

#include <iostream>

using namespace std;

string deleteBetweenBrackets(const string& str) {
    string result = "";
    int openBracketsCount = 0;

    for (char ch : str) {
        if (ch == '(') {
            openBracketsCount++;
        }
        else if (ch == ')' && openBracketsCount > 0) {
            openBracketsCount--;
        }
        else if (openBracketsCount == 0) {
            result += ch;
        }
    }

    return result;
}

int main() {
    string str = "This is a string with (several) parentheses, (including (nested) parentheses).";

    cout << str << endl;
    cout << deleteBetweenBrackets(str) << endl;

    return 0;
}

