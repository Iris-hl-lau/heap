//
// Created by Iris L on 2018-12-07.
//

#include "designImp.hpp"

/**
 * Defining the constructor for class designImp.
 */
designImp::designImp() {}

//Runs a test for a set vector
void designImp::run() {
    int num = 4;
    vector<int> v = {20, 40, 25, 15, 30};
    heap<int> h(v);
    cout << h << endl;
    cout << "Size: " << h.size() << endl;
    cout << endl;

    h.push(num);
    cout << h << endl;
    cout << "Size: " << h.size() << endl;
    cout << endl;

    cout << h.pop() << endl;
    cout << h << endl;
    cout << "Size: " << h.size() << endl;
    cout << endl;

    h.clear();
    cout << "Is empty: " << h.is_empty() << endl;
    cout << "Size: " << h.size() << endl;
    cout << endl;
}

void designImp::run1() {
    int size = 6;
    int value = 12;
    set<int> pq;

    while(size > 0) {
        int num;
        cout << "Enter a number." << endl;
        cin >> num;
        pq.insert(num);
        --size;
    }

    heap<int> h(pq);
    cout << h << endl;
    cout << "Size: " << h.size() << endl;
    cout << endl;

    h.push(value);
    cout << h << endl;
    cout << "Size: " << h.size() << endl;
    cout << endl;

    cout << h.pop() << endl;
    cout << h << endl;
    cout << "Size: " << h.size() << endl;
    cout << endl;

    h.clear();
    cout << "Is empty: " << h.is_empty() << endl;
    cout << "Size: " << h.size() << endl;
    cout << endl;
}