#include "attacks.hpp"

attacks::attacks(int32_t kind_param, int32_t type_param, int32_t strength_param, 
                 int32_t accuracy_param, std::string name_param)
{
    kind = kind_param;
    type = type_param;
    strength = strength_param;
    accuracy = accuracy_param;
    name = name_param;   
}

attacks::~attacks()
{
}