//
// Created by Iris L on 2018-12-07.
//

#ifndef ASN4_HEAP_HPP
#define ASN4_HEAP_HPP
#include <algorithm>
#include <iostream>
#include <deque>
using namespace std;


template <typename T>
/**
 * Template class heap.
 * @tparam T Heap type.
 */
class heap {
private:
    deque<T> my_container; //Heap container.

    //Turns a copy a STL container into a heap.
    void heapify() {
        make_heap(my_container.begin(), my_container.end());
    };

public:
    template<template<typename, typename> class STL, typename ARG>
    //Heap constructor.
    //Accepts and copies a STL with one argument .
    heap(STL<T, ARG> container) {
        for(auto element : container) {
            my_container.push_back(element);
        }
        heapify();
    }

    template <typename element_type>
    //Pushes element of type into heap.
    void push(element_type element) {
        my_container.push_back(element);
        push_heap(my_container.begin(), my_container.end());
        heapify();
    }

    //Pops max element from heap and returns the value.
    auto pop() {
        auto max = my_container.front();
        my_container.pop_front();
        pop_heap(my_container.begin(), my_container.end());
        heapify();
        return max;
    };

    //Returns the size of the heap
    int size() {
        return my_container.size();
    };

    //Returns a boolean to whether the heap is empty.
    bool is_empty() {
        return my_container.empty();
    }

    //Clears the heap
    void clear() {
        my_container.clear();
    }

    //Prints all the elements in the heap.
    friend ostream& operator<< (ostream& os, const heap& heap) {
        for(auto& element : heap.my_container) {
            os << element << " ";
        }
        return os;
    }
};


#endif //ASN4_HEAP_HPP
