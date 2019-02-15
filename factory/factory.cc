#include "factory.hh"
#include "dup.hh"
#include <stdexcept>

std::shared_ptr<Parent> Factory::Create(Classes to_create)
{
    Parent* result;

    switch (to_create)
    {
    case Classes::Sub1:
        result = new Sub1{};
        break;
    case Classes::Sub2:
        result = new Sub2{};
        break;
    /* ... */
    default:
        throw std::invalid_argument("Invalid class name");
    }

    std::shared_ptr<Parent> result_ptr{result};
    return result_ptr;
}

int main()
{
    auto created_class = Factory::Create(Classes::Sub1);
    created_class->Print() << '\n';

    created_class = Factory::Create(Classes::Sub2);
    created_class->Print() << '\n';
}
