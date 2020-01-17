#include <iostream>
#include "swap.cpp"
#include "Computer.cpp"
#include "Array.cpp"
#include "Array.h"
#include "MyVector.h"
#include "Recttangle.cpp"
#include "Hero.cpp"

void show(int &num1,int &num2){
    std::cout << num1 << "," << num2 << std::endl;
}

void test1(){
    int num1=10,num2=3;
    swap1(num1,num2);
    show(num1,num2);

    swap2(&num1,&num2);
    show(num1,num2);

    swap3(num1,num2);
    show(num1,num2);
}
void test2(){
    Computer computer,computer1;
    computer.setCore(2);
    computer1.setCore(3);
    const Computer & com3=getMax(computer,computer1);
    std::cout << com3.getCore() <<std::endl;
}

void test3(){
    Array arr(10);
    arr[0]=1234;
    cout << arr << endl;
}

void vecTest(){
    MyVector<int> myVector;
    MyVector<double> myVector1(10,99.9);
    myVector1.push_back(4.567);
    cout << "vec1: " << myVector << endl;
    cout << "vec2: " << myVector1 << endl;
}
void testRecttangle(){
    Recttangle recttangle;
    Recttangle recttangle1(12,14);
    Recttangle recttangle2(recttangle);
    Recttangle recttangle3= 22;

};

void testHero(){
    Hero hero("盖伦");
    cout << hero << endl;

}

int main() {
    std::cout << "Hello, World!" << std::endl;
    //test1();
    //test2();
    //test3();
//    vecTest();
//    testRecttangle();
    testHero();

    return 0;
}