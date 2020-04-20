/*
10828.cpp
백준 10828번 스택문제
version 1.0
data 2020.04.21
*/

#include "pch.h"
#include <iostream>
#include <cstring>
using namespace std;

int stack[10001], top = -1;

void push(int x) { // 정수를 스택에 넣음
    stack[++top] = x;
} 
int pop(void) { // 스택에서 가장 위에 있는 정수를 빼고, 그 수를 출력. 만약 스택에 들어있는 정수가 없는 경우에는 -1을 출력
    if (top < 0) return -1;
    else {
        int x = stack[top];
        stack[top--];
        return x;
    }
}
int size() { // 스택에 들어있는 정수의 개수 출력
    return top+1;
}
int empty() { // 스택이 비어있으면 1, 아니면 0 출력
    if (top < 0) return 1;
    else return 0;
}
int pushtop() { // 스택의 가장 위에있는 정수를 출력. 만약 스택에 들어있는 정수가 없는 경우에는 -1을 출력
    if (top < 0) return -1;
    else return stack[top];
}

int main(void)
{

    int n; // 주어지는 명령의 수
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        char cmd[10];
        cin >> cmd;
        if (!strcmp(cmd, "push")) {
            int x; cin >> x;
            push(x);
            cout << x << endl;
        }
        else if (!strcmp(cmd, "pop")) {
            cout << pop() << endl;
        }
        else if (!strcmp(cmd, "size")) {
            cout << size() << endl;
        }
        else if (!strcmp(cmd, "empty")) {
            cout << empty() << endl;
        }
        else if (!strcmp(cmd, "top")) {
            cout << pushtop() << endl;
        }
    }

    return 0;
}

