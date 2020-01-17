//
// Created by yuanlang on 2020-01-17.
//

#include "Recttangle.h"
#include <iostream>

using namespace std;

Recttangle::Recttangle() {

}

Recttangle::Recttangle(float width, float height): m_width(0),m_height(0)
{
    m_width=width;
    m_height=height;
}

Recttangle::Recttangle(const Recttangle &recttangle) {
    m_width=recttangle.m_width;
    m_height=recttangle.m_height;
}

Recttangle::Recttangle(float width): m_width(0),m_height(0)
{
    m_height=width;
    m_width=width;
}

Recttangle::~Recttangle() {

}