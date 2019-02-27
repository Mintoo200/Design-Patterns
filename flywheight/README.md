# Flyweight

From wikipedia:


>A flyweight is an object that minimizes memory usage by sharing as much data as possible with other similar objects; it is a way to use objects in large numbers when a simple repeated representation would use an unacceptable amount of memory. Often some parts of the object state can be shared, and it is common practice to hold them in external data structures and pass them to the objects temporarily when they are used.

<https://en.wikipedia.org/wiki/Flyweight_pattern>

## Use case

This design pattern is used when the theorical representation of a program would necessitate a huge amount of reoccuring data, rapidly filling the computer memory. (e.g. text editing: we would like to have each character have it's own object containing its font and size. we will instead create a flyweight design pattern and each identical character will point to the same object.)
