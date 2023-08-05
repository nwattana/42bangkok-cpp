#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal
{
    protected:
        std::string type;
    public:
        WrongAnimal();
        WrongAnimal(std::string type);
        WrongAnimal(const WrongAnimal &copy);
        virtual ~WrongAnimal();
        // ~WrongAnimal(); // 
        WrongAnimal&	operator=(const WrongAnimal &other);

        std::string	getType() const;
        virtual void	makeSound() const;
};

#endif