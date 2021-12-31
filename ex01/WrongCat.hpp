#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal{
    public:
        WrongCat(void);
        WrongCat(const std::string name);
        ~WrongCat(void);

        std::string getType(void) const;

        void makeSound(void) const;
};

#endif