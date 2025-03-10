#ifndef HARL_CPP
 #define HARL_CPP

#include <iostream>
#include <string>


enum eMessage
{
    DEBUG, 
    INFO, 
    WARNING, 
    ERROR,
    DEFAULT
};

class Harl
{
public:
    void    complain(std::string level);
    eMessage    setType(char *arg);
    eMessage    msg;
private:
    void    debug(void);
    void    info(void); 
    void    warning(void); 
    void    error(void);
};

#endif