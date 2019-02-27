#include "flyweight.hh"
#include "iostream"

CharacterFlyweight::CharacterFlyweight(char character,
                                       std::string font = "papyrus",
                                       int size = 42)
    : character_{character}
    , font_{font}
    ,size_{size}
{}

std::map<char, std::shared_ptr<CharacterFlyweight>> Character::mapped_char_;

Character::Character(char character)
{
    if(mapped_char_[character])
        character_ = mapped_char_[character];
    else
    {
        auto charFW = std::make_shared<CharacterFlyweight>(character);
        mapped_char_[character] = charFW;
        character_ = charFW;
    }
}

void Character::print()
{
    std::cout << "\""<< character_->character_ << "\"" << " in "
              << character_->font_ << "\n";
}

int main()
{
    Character a{'a'};
    Character b{'b'};
    Character a2{'a'};

    a.print();
    b.print();
    a2.print();

    std::cout << "number of character classes: "
              << Character::mapped_char_.size() << "\n";
}
