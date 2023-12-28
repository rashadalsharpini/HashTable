#include <iostream>
#include "HashTable.h"
using namespace std;
int main() {
    HashTable ht;
    ht.insert(17);
    ht.insert(2);
    ht.insert(16);
    ht.insert(6);
    ht.insert(20);
    ht.insert(25);
    ht.insert(7);
    ht.insert(8);
    ht.insert(9);
    ht.insert(10);
    ht.print();
    ht.delete_value(7);
    ht.print();
    cout << "\n\n\nانا جامد" << endl;
    return 0;
}
