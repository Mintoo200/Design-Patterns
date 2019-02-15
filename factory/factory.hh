#pragma once

#include <memory>

/* virtual */ class Parent;
class Sub1; /* : Parent */
class Sub2; /* : Parent */
/* ... */

enum class Classes
{
    Sub1,
    Sub2
    /* ... */
};

class Factory
{
public:
    Factory() = default;

    static std::shared_ptr<Parent> Create(Classes to_create); /* Can be overload */
};
