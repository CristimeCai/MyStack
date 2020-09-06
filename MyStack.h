//
// Created by cristime on 2020/9/6.
//
// Author: Cristime
// Git_Repo1(For Chinese People): https://gitee.com/cristime/MyStack
// Git_Repo2(For Global People): https://github.com/CristimeCai/MyStack

#ifndef MYSTACK_MYSTACK_H
#define MYSTACK_MYSTACK_H

#include <iostream>
#include <string>

const int maxN = 1000 + 10;

typedef std::string item;

class mystack
{
private:
    unsigned top;
    item* st;

public:
    // Functions are in MyStack.cpp
    mystack(const item *);
    mysack();
    ~mystack();

    void push(item &);
    void pop();
    unsigned gettop();
    item getval(int);

    void print();

    bool isempty();
    bool isfull();
};

#endif //MYSTACK_MYSTACK_H