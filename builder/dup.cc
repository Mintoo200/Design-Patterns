#include "dup.hh"
#include <iostream>

A::A(int int_value, float float_value)
    : int_value_{int_value}
    , float_value_{float_value}
{}

A& A::print()
{
    std::cout << "{int: " << int_value_ << ", float: " << float_value_ << "}\n";
    return *this;
}
