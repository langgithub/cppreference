//
// Created by yuanlang on 2020-01-16.
//

#include "swap.h"

void swap1(int num1,int num2){
    int temp;
    temp=num1;
    num1=num2;
    num2=temp;
}

void swap2(int* num1,int* num2){
    int temp;
    temp=*num1;
    *num1=*num2;
    *num2=temp;
}

void swap3(int &num1,int &num2){
    int temp;
    temp=num1;
    num1=num2;
    num2=temp;
}