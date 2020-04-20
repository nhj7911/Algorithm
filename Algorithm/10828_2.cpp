/*
10828.cpp
백준 10828번 스택문제
version 1.0
data 2020.04.21
*/

#include "pch.h"
#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main(void)
{

    int n; // 주어지는 명령의 수
    cin >> n;

    stack<int> s;
    //char cmd[10];
    string str;

    for (int i = 0; i < n; i++) {
        cin >> str;

        if (str == "push") {
            int x; cin >> x;
            s.push(x);
        }
        else if (str == "pop") {
            if (!s.empty())
            {
                cout << s.top() << endl;
                s.pop();
            }
            else {
                cout << "-1" << endl;
            }
        }
        else if (str=="size") {
            cout << s.size() << endl;
        }
        else if (str == "empty") {
            if (s.empty()) {
                cout << "1" << endl;
            }
            else {
                cout << "0" << endl;
            }
        }
        else if (str == "top") {
            if (!s.empty()) {
                cout << s.top() << endl;
            }
            else {
                cout << "-1" << endl;
            }
        }
    }

    return 0;
}

