#include "heap.hpp"
#include <deque>

int main() {
    int num = 4;
    deque<int> v = {20, 40, 25, 15, 30};
    heap<deque<int>> h(v);
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


    return 0;
}