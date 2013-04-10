#pragma once
#ifndef GRAPHFILETYPE_H
#define GRAPHFILETYPE_H

enum GraphFileType
{
    /** Custom format
      * L1: (numNodes maxWeight)
      * x y d */
    CUSTOM = 0,

    /** Lemon Graph file */
    LEMON = 1,

    /** DIMACS Challenge Graph file */
    DIMACS = 2
};

#endif
