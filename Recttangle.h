//
// Created by yuanlang on 2020-01-17.
//

#ifndef CPPREFERENCE_RECTTANGLE_H
#define CPPREFERENCE_RECTTANGLE_H


class Recttangle {
public:
    Recttangle();
    Recttangle(float width,float height);
    Recttangle(const Recttangle & recttangle);
    Recttangle(float width);  //转换构造
    virtual ~Recttangle();

protected:

private:
    float m_width;
    float m_height;

};


#endif //CPPREFERENCE_RECTTANGLE_H
