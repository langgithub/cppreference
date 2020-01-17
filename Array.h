//
// Created by yuanlang on 2020-01-16.
//

#ifndef CPPREFERENCE_ARRAY_H
#define CPPREFERENCE_ARRAY_H

#include <iostream>

using namespace std;
class Array {
public:
    Array(int length=0);
    Array(const Array & arr);

//    int operator[](int index);
    int & operator[](int index);

    const Array & operator=(const Array & arr);
    friend ostream & operator<<(ostream & out, const Array & arr);
    friend istream & operator>>(istream & in, const Array & arr);

    virtual ~Array();

protected:

private:
    int m_length;
    int * m_datas;

};


#endif //CPPREFERENCE_ARRAY_H
