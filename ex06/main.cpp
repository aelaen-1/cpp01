#include "Harl.hpp"

int main (int ac, char **argv)
{
    if (ac != 2)
    {
        std::cout << "One argument only:  ./harlFilter 'message'" << std::endl;
        return (0);
    }

    std::string message = argv[1];
    if (message.compare("DEBUG") && message.compare("INFO") && message.compare("WARNING") &&message.compare("ERROR"))
    {
        std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
        return (0);
    }
    std::cout << "[ " << argv[1] << "]" << std::endl;
    return (0);
}