//
// Created by yuanlang on 2020-01-16.
//

#ifndef CPPREFERENCE_MYVECTOR_H
#define CPPREFERENCE_MYVECTOR_H

#include <iostream>
#include <cstring>

using namespace std;
// 使用了模版技术，模版技术一般用来做算法，比如重载100次某个类型算法
// 如果使用模版技术，方法和申明都需要在同一个头文件中
template <typename T>
class MyVector {
public:
    MyVector();
    MyVector(int len,T element);
    MyVector(const MyVector<T> & vec);

    MyVector<T> &operator==(const MyVector<T> & vec);
    T &operator[](int index);
    void push_back(T element);

    template <typename T2>
    friend ostream &operator<<(ostream & out,const MyVector<T2> vec);
    virtual ~MyVector();

protected:

private:
    T * m_element; //用来存放元素的数组
    int m_length;
    int m_capacity; //当前元素数组的大小

};

template <typename T>
MyVector<T>::MyVector() : m_capacity(16),m_length(10)
{
    this->m_element=new T[m_length];
}

template <typename T>
MyVector<T>::MyVector(int len, T element) :m_capacity(16){
    m_capacity=len+m_capacity;
    m_length=len;
    m_element=new T[m_capacity];
    for(int i=0;i<m_length;i++){
        //m_element[i]=element 每次都会调用重载的赋值运算符
        memcpy(&m_element[i],&element, sizeof(T));
    }
}

template <typename T>
MyVector<T>::MyVector(const MyVector<T> &vec) {
    m_capacity=vec.m_capacity;
    m_length=vec.m_length;
    m_element=new T[m_capacity];
    memcpy(m_element,vec.m_element,m_length* sizeof(T));
}

template <typename T>
MyVector<T>& MyVector<T>::operator==(const MyVector<T> &vec) {
    if (this==&vec) return *this;
    if(NULL!=m_element){
        delete[] m_element;
        m_element=NULL;
    }
    m_capacity=vec.m_length +m_capacity;
    m_length=vec.m_length;
    m_element=new T[m_capacity];
    memcpy(m_element,vec.m_element,m_length* sizeof(T));
}

template <typename T>
T& MyVector<T>::operator[](int index) {
    return m_element[index];
}

template <typename T>
void MyVector<T>::push_back(T element) {
    if (NULL==m_element){
        m_capacity=16;
        m_length=0;
        m_element= new T[m_capacity];
    }
    if(m_length==m_capacity){
        //如果满了，就扩容
        T * newElement=new T[m_capacity*2+1];
        //把原来的元素拷贝到新空间中
        memcpy(newElement,m_element,m_length* sizeof(T));
        delete[] m_element;
        m_element=newElement;
    }
//    m_element[m_length++]=element;
    memcpy(&m_element[m_length++],&element, sizeof(T));
}

template <typename T2>
ostream & operator<<(ostream &out, const MyVector<T2> vec) {
    for(int i=0;i<vec.m_length;i++){
        out << vec.m_element[i] << ",";
    }
    out << endl;
    return out;
}

template <typename T>
MyVector<T>::~MyVector() {
    delete[] m_element;
}

#endif //CPPREFERENCE_MYVECTOR_H
