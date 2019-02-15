#pragma once

class A
{
public:
    A(int int_value, float float_value);

    A& print();

private:
    int int_value_;
    float float_value_;
};
