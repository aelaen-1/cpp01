#include "Harl.hpp"

eMessage    Harl::setType(char *arg)
{
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    std::string message = arg;
    eMessage    type = DEFAULT;

    for (int i = 0; i < 4; ++i)
    {
        if (message == levels[i])
        {
            if (i == 0)
                type = DEBUG;
            else if (i == 1)
                type = INFO;
            else if (i == 2)
                type = WARNING;
            else
                type = ERROR;
            break;
        }
    }
    return (type);
}

void    Harl::complain(std::string level)
{
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    void    (Harl::*levelFuncPtr[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

    for (int i = 0; i < 4; ++i)
    {
        if (level == levels[i])
        {
            (this->*levelFuncPtr[i])();
            std::cout << std::endl;
            return ;
        }
    }
    std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}

void    Harl::debug(void)
{
    std::cout << "[ DEBUG ]" << std::endl;
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger. I really do!" << std::endl;
}

void    Harl::info(void)
{
    std::cout << "[ INFO ]" << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money." 
    << " You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void    Harl::warning(void)
{
    std::cout << "[ WARNING ]" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free." <<
    " I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void    Harl::error(void)
{
    std::cout << "[ ERROR ]" << std::endl;
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}