//
// Created by yuanlang on 2020-01-17.
//

#ifndef CPPREFERENCE_HERO_H
#define CPPREFERENCE_HERO_H

#include <string>
#include <ostream>

class Hero {
public:
    Hero();
    virtual ~Hero();
    Hero(const string & nickName);
    Hero(const string & nickName,int level);
    Hero(const string & nickName,int level,int maxLife);
    Hero(const string & nickName,int level,int maxLife,int currLife);

    void move();
    // const 修饰谁，谁就不能被修改
    // 1. 方法前 返回值是常量，外面获取常量不能修改常量的值
    // 2. 方法后 表示方法不可以修改成员的值
    // 编译检查
    const string& GetNickName() const {return m_NickName;}
    int GetLevel() const{
        return m_level;
    }
    int GetMaxLife() const{return m_MaxLife;}
    int GetCurrLife() const{return m_CurrLife;}

    friend ostream &operator<<(ostream& out,const Hero& hero);

protected:

private:
    string m_NickName;
    int m_level;
    int m_MaxLife;
    int m_CurrLife;
};


#endif //CPPREFERENCE_HERO_H
