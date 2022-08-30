#ifndef _ATTACKS_HPP
#define _ATTACKS_HPP

#include "../../config.hpp"

class attacks
{
private:
    int32_t kind;
    int32_t type;
    int32_t strength;
    int32_t accuracy;
    std::string name;    
public:
    attacks(int32_t kind_param, int32_t type_param, int32_t strength_param, 
            int32_t accuracy_param, std::string name_param);
    ~attacks();
};


#endif //!_ATTACKS_HPP