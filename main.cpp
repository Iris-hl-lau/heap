#include "designImp.hpp"

/**
 * Drives the program.
 */
int main() {
//    int num = 4;
//    vector<int> v = {20, 40, 25, 15, 30};
//    heap<int> h(v);
//    cout << h << endl;
//    cout << "Size: " << h.size() << endl;
//    cout << endl;
//
//    h.push(num);
//    cout << h << endl;
//    cout << "Size: " << h.size() << endl;
//    cout << endl;
//
//    cout << h.pop() << endl;
//    cout << h << endl;
//    cout << "Size: " << h.size() << endl;
//    cout << endl;
//
//    h.clear();
//    cout << "Is empty: " << h.is_empty() << endl;
//    cout << "Size: " << h.size() << endl;
//    cout << endl;

    designImp& ref  = designImp::getInstance();
    ref.run();
    ref.run1();
    return 0;
}