#ifndef PAIR_MANAGER_H
#define PAIR_MANAGER_H

#include <iostream>
#include <string>

namespace PairManager {

    template <typename T, typename U>
    class Pair {
    public:
        Pair(T firstValue, U secondValue);

        void displayPair();

        void displayPair(const std::string& prefix);

    private:
        T first;
        U second;
    };

} 

//#include "PairManager/PairManager.cpp"

#endif
