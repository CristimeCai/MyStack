//
// Created by cristime on 2020/9/6.
//

// 类实现文件: StackSource.cpp
// Author: Cristime
// Git_Repo1(For Chinese People): https://gitee.com/cristime/MyStack
// Git_Repo2(For Global People): https://github.com/CristimeCai/MyStack

#include "MyStack.h"


// 含参数构造函数
mystack::mystack(const item* Init) {
    st = new std::string[maxN];
    top = 0;

    item InitValue = *Init;
    push(InitValue);
}

// 无参数构造函数
mystack::mystack() {
    st = new std::string[maxN];
    top = 0;
}

// 析构函数
mystack::~mystack() { delete[] st; }


// 主要功能：1. push()
void mystack::push(item & pushNum) {
    if (!isfull()) {
        std::cout << "Overflow!" << std::endl;
        return;
    }

    st[++top] = pushNum;
}

// 主要功能：2. pop()
void mystack::pop() {
    if (!isempty()) {
        std::cout << "Overflow!" << std::endl;
        return;
    }

    top--;
}

// 主要功能：3. gettop()		返回top的值
unsigned mystack::gettop() { return top; }

// 主要功能：4. topval()		返回栈中第n个元素的值
item mystack::getval(int subScript) {
    if (subScript < 0 || subScript >= maxN) {
        std::cout << "Value not found!" << std::endl;
        return 0;
    }

    return st[subScript];
}


// 次要功能：1. print()		打印栈中每个元素的值。
void mystack::print() {
    if (!isempty() || !isfull()) {
        std::cout << "Overflow!" << std::endl;
        return;
    }

    std::cout << "Stack top:\t" << top << std::endl;
    for (int i = 1; i <= top; i++)
        std::cout << i << ".\t" << st[i] << std::endl;
}

// 次要功能：2. isempty()		判断栈是否为空
bool mystack::isempty() { return top; }

// 次要功能：3. isfull()		判断栈是否为满
bool mystack::isfull() { return (top == maxN); }



// !STACKSOURCE_CPP_
