//
// Created by yuanlang on 2020-01-16.
//

#include "Computer.h"
const Computer & getMax(const Computer & com1, const Computer & com2){
    if(com1.getCore() > com2.getCore()){
        return com1;
    } else{
        return com2;
    }
}

Computer::~Computer() {

}

Computer::Computer() {

}
