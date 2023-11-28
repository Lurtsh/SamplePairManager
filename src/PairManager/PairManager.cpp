#include "PairManager/PairManager.h"

namespace PairManager {

    template <typename T, typename U>
    Pair<T, U>::Pair(T firstValue, U secondValue) : first(firstValue), second(secondValue) {}

    template <typename T, typename U>
    void Pair<T, U>::displayPair() {
        std::cout << "Pair: (" << first << ", " << second << ")" << std::endl;
    }

    template <typename T, typename U>
    void Pair<T, U>::displayPair(const std::string& prefix) {
        std::cout << prefix << " Pair: (" << first << ", " << second << ")" << std::endl;
    }

    template class Pair<int, double>;

    template class Pair<std::string, char>;
}
