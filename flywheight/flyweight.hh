#pragma once

#include <memory>
#include <map>

class Character;

class CharacterFlyweight
{
public:
    CharacterFlyweight(char character, std::string font, int size);
    ~CharacterFlyweight() = default;
    friend Character;
private:
    char character_;
    std::string font_;
    int size_;
};

class Character
{
public:
    Character(char character);
    ~Character() = default;
    void print();

    static std::map<char, std::shared_ptr<CharacterFlyweight>> mapped_char_;
private:
    std::shared_ptr<CharacterFlyweight> character_;
};
