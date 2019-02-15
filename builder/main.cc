#include "dup.hh"
#include "builder.hh"

int main()
{
    ABuilder builder{};

    builder.set_int(42)
           .set_float(3.14);
    auto result = builder.build();

    result.print();
}
