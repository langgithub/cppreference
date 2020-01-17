//
// Created by yuanlang on 2020-01-16.
//

#ifndef CPPREFERENCE_COMPUTER_H
#define CPPREFERENCE_COMPUTER_H


class Computer {
public:
    Computer();
    ~Computer();


    void setCore(int core){
        this->_core=core;
    };
    int getCore() const {return this->_core;} //没有修改成员变量

private:
    int _core;
};


#endif //CPPREFERENCE_COMPUTER_H
