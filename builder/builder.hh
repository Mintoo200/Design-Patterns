#pragma once

#include "dup.hh"

class ABuilder
{
public:
    ABuilder() = default;

    ABuilder& set_int(int value);
    ABuilder& set_float(float value);

    A build();

private:
    int int_value_;
    float float_value_;
};
