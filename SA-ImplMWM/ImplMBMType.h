#pragma once
#ifndef IMPLMBMTYPE_H
#define IMPLMBMTYPE_H

enum ImplMBMType
{
    /** Naive Greedy Maximal Matching */
    NAIVE_GREEDY = 0,

    /** Bollig-Proeger Implicit Maximal Matching */
    BOLLIG_PROEGER = 1,

    /** Hachtel-Somenzi Implicit Maximal Matching Heuristic */
    HACHTEL_SOMENZI = 2,

    /** Karp-Sipser Maximal Matching Heuristic */
    KARP_SIPSER = 3
};

#endif
