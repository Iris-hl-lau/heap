//
// Created by Iris L on 2018-12-07.
//

#ifndef ASN4_HEAP_HPP
#define ASN4_HEAP_HPP
#include <algorithm>
#include <iostream>
using namespace std;
template <typename STL>
class heap {
private:
    STL my_container;

    void heapify() {
        make_heap(my_container.begin(), my_container.end());
    };

public:
    heap(STL container) : my_container(container){
        make_heap(my_container.begin(), my_container.end());
    };

    template <typename element_type>
    void push(element_type element) {
        my_container.push_back(element);
        push_heap(my_container.begin(), my_container.end());
        heapify();
    }

    auto pop() {
        auto max = my_container.front();
        my_container.pop_back();
        pop_heap(my_container.begin(), my_container.end());
        heapify();
        return max;
    };

    int size() {
        int size = 0;
        for(auto element : my_container) {
            size++;
        }
        heapify();
        return size;
    };

    bool is_empty() {
        if(size() == 0) {
            return true;
        }
        return false;
    }

    void clear() {
        for(auto element : my_container) {
            pop();
        }
    }

    friend ostream& operator<< (ostream& os, const heap& heap) {
        for(auto& element : heap.my_container) {
            os << element << " ";
        }
        return os;
    }
};


#endif //ASN4_HEAP_HPP
