#include "josephusList.h"

#include <assert.h>
#include <stdlib.h>

struct jCircle
{
    int soldierNumber;

    Soldier* pFirstS;
    Soldier* pCurrentS;
};

typedef struct soldier Soldier;

JCircle* pJCircle(int soldierNumber)
{
    assert(soldierNumber > 0);

    JCircle* pJCircle;
    if(!(pJCircle = malloc(sizeof(JCircle))))
        return NULL;

    pJCircle->soldierNumber = soldierNumber;
    pJCircle->pFirstS = NULL;
    pJCircle->pCurrentS = NULL;

    return pJCircle;
}

