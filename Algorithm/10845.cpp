/*
10845.cpp
백준 10845번 큐문제
큐 라이브러리 이용
version 1.0
data 2020.04.22
*/

#include "pch.h"
#include <iostream>
#include <string>
#include <queue>
using namespace std;

int main(void)
{

    int n; // 주어지는 명령의 수
    cin >> n;

    queue<int> q;
    string str;

    for (int i = 0; i < n; i++) {
        cin >> str;

        if (str == "push") {
            int x; cin >> x;
            q.push(x);
        }
        else if (str == "pop") {
            if (!q.empty())
            {
                cout << q.front() << endl;
                q.pop();
            }
            else {
                cout << "-1" << endl;
            }
        }
        else if (str == "size") {
            cout << q.size() << endl;
        }
        else if (str == "empty") {
            if (q.empty()) {
                cout << "1" << endl;
            }
            else {
                cout << "0" << endl;
            }
        }
        else if (str == "front") {
            if (!q.empty()) {
                cout << q.front() << endl;
            }
            else {
                cout << "-1" << endl;
            }
        }
        else if (str == "back") {
            if (!q.empty()) {
                cout << q.back() << endl;
            }
            else {
                cout << "-1" << endl;
            }
        }
    }

    return 0;
}

