#ifndef _TYPES_H_
#define _TYPES_H_

#include "../../../config.hpp"

// maybe namespace?

namespace types{
static const int32_t NUMBER = 18;

enum class types {
    UNINIT,
    NOR,
    FIR,
    WAT,
    ELE,
    GRA,
    ICE,
    FIG,
    POI,
    GRO,
    FLY,
    PSY,
    BUG,
    ROC,
    GHO,
    DRA,
    DAR,
    STE,
    FAI
};

// [attack][defender]
static const float AFFINITIES[NUMBER][NUMBER] = 
{
    { 1     ,1    ,1    ,1    ,1    ,1    ,1    ,1    ,1    ,1    ,1    ,1    ,0.5f ,0    ,1    ,1    ,0.5f ,1    },
    { 1     ,0.5f ,0.5f ,1    ,2    ,2    ,1    ,1    ,1    ,1    ,1    ,2    ,0.5f ,1    ,0.5f ,1    ,2    ,1    },
    { 1     ,2    ,0.5f ,1    ,0.5f ,1    ,1    ,1    ,2    ,1    ,1    ,1    ,2    ,1    ,0.5f ,1    ,1    ,1    },
    { 1     ,1    ,2    ,0.5f ,0.5f ,1    ,1    ,1    ,0    ,2    ,1    ,1    ,1    ,1    ,0.5f ,1    ,1    ,1    },
    { 1     ,0.5f ,2    ,1    ,0.5f ,1    ,1    ,0.5f ,2    ,0.5f ,1    ,0.5f ,2    ,1    ,0.5f ,1    ,0.5f ,1    },
    { 1     ,0.5f ,0.5f ,1    ,2    ,0.5f ,1    ,1    ,2    ,2    ,1    ,1    ,1    ,1    ,2    ,1    ,0.5f ,1    },
    { 2     ,1    ,1    ,1    ,1    ,2    ,1    ,0.5f ,1    ,0.5f ,0.5f ,0.5f ,2    ,0    ,1    ,2    ,2    ,0.5f },
    { 1     ,1    ,1    ,1    ,2    ,1    ,1    ,0.5f ,0.5f ,1    ,1    ,1    ,0.5f ,0.5f,1     ,1    ,0    ,2    },
    { 1     ,2    ,1    ,2    ,0.5f ,1    ,1    ,2    ,1    ,0    ,1    ,0.5f ,2    ,1    ,1    ,1    ,2    ,1    },
    { 1     ,1    ,1    ,0.5f ,2    ,1    ,2    ,1    ,1    ,1    ,1    ,2    ,0.5f ,1    ,1    ,1    ,0.5f ,1    },
    { 1     ,1    ,1    ,1    ,1    ,1    ,2    ,2    ,1    ,1    ,0.5f ,1    ,1    ,1    ,1    ,0    ,0.5f ,1    },
    { 1     ,0.5f ,1    ,1    ,2    ,1    ,0.5f ,0.5f ,1    ,0.5f ,2    ,1    ,1    ,0.5f ,1    ,2    ,0.5f ,0.5f },
    { 1     ,2    ,1    ,1    ,1    ,2    ,0.5f ,1    ,0.5f ,2    ,1    ,2    ,1    ,1    ,1    ,1    ,0.5f ,1    },
    { 0     ,1    ,1    ,1    ,1    ,1    ,1    ,1    ,1    ,1    ,2    ,1    ,1    ,2    ,1    ,0.5f ,1    ,1    },
    { 1     ,1    ,1    ,1    ,1    ,1    ,1    ,1    ,1    ,1    ,1    ,1    ,1    ,1    ,2    ,1    ,0.5f ,0    },
    { 1     ,1    ,1    ,1    ,1    ,1    ,0.5f ,1    ,1    ,1    ,2    ,1    ,1    ,2    ,1    ,0.5f ,1    ,0.5f },
    { 1     ,0.5f ,0.5f ,0.5f ,1    ,2    ,1    ,1    ,1    ,1    ,1    ,1    ,2    ,1    ,1    ,1    ,0.5f ,2    },
    { 1     ,0.5f ,1    ,1    ,1    ,1    ,2    ,0.5f ,1    ,1    ,1    ,1    ,1    ,1    ,2    ,2    ,0.5f ,1    }
};

}

#endif //!_TYPES_H_