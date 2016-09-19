#ifndef _LIST
#define _LIST


#include "bucket.h"

template<class ItemType>
class List {
  public: 

    List();
    List(int);
    ~List();


    int hash(ItemType&,int);
    int contains(ItemType&);
    bool isFull();
    bool insert(ItemType&);
    bool remove(ItemType&);
    void print();


    Bucket<ItemType>* bucketTable;
    int tableSize;
};

#include "list.cpp"

#endif
