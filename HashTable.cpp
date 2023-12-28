//
// Created by rashadalsharpini on 28/12/23.
//

#include "HashTable.h"

void HashTable::insert(int value) {
    int index=value%10;
    ll[index].insert_sorted(value);
}

void HashTable::print() {
    for (int i = 0; i < 10; ++i) {
        cout<<"linked list "<<i<<" : ";
        ll[i].print();
    }
}

int HashTable::search(int value) {
    int index=value%10;
    return ll[index].Search(value);
}

void HashTable::delete_value(int value) {
    int index=value%10;
    ll[index].delete_value(value);
}
