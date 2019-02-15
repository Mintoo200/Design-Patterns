#pragma once

#include <iostream>

class Factory;

class Parent
{
    friend class Factory;

public:
    virtual std::ostream& Print() = 0;

protected:
    Parent() = default;
};

class Sub1 : public Parent
{
public:
    Sub1() = default;
    std::ostream& Print();
};

class Sub2 : public Parent
{
public:
    Sub2() = default;
    std::ostream& Print();
};
