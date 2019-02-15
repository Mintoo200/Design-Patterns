#include "builder.hh"


ABuilder& ABuilder::set_int(int value)
{
    int_value_ = value;
    return *this;
}

ABuilder& ABuilder::set_float(float value)
{
    float_value_ = value;
    return *this;
}

A ABuilder::build()
{
    return A{int_value_, float_value_};
}
