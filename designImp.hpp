//
// Created by Iris L on 2018-12-07.
//

#ifndef ASN4_DESIGNIMP_HPP
#define ASN4_DESIGNIMP_HPP

#include "heap.hpp"
#include <vector>

/**
 * Prototype for class designImp.
 * Uses the Singleton design method.
 */
class designImp {
private:
    designImp(); //designImp constructor.

public:
    static designImp& getInstance() {
        static designImp designImp1;
        return designImp1;
    }

    void run();
};


#endif //ASN4_DESIGNIMP_HPP
