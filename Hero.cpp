//
// Created by yuanlang on 2020-01-17.
//

#include "Hero.h"

Hero::Hero() {
    m_NickName="默认英雄";
    m_level=1;
    m_MaxLife=100;
    m_CurrLife=100;
    cout << "调用hero默认构造函数" << endl;
}
Hero::Hero(const string &nickName):Hero(nickName,1,100,100) {

}
Hero::Hero(const string &nickName, int level):Hero(nickName,level,100,100) {

}
Hero::Hero(const string &nickName, int level, int maxLife, int currLife) :m_NickName(nickName),m_level(level),m_MaxLife(maxLife),m_CurrLife(currLife)
{
    cout << "调用hero3默认构造函数" << endl;
}

ostream & operator<<(ostream &out, const Hero &hero) {
    out << "昵称： " << hero.GetNickName() << "\n";
    out << "等级：" << hero.GetLevel() << "\n";
    out << "生命值：" << hero.GetCurrLife() << "\n";
    out << "当前生命值：" << hero.GetCurrLife() << endl;
}

void Hero::move() {
    cout << m_NickName << "move" << endl;
}

Hero::~Hero() {

}