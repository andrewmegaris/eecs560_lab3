#ifndef _LIST
#define _LIST


#include "bucket.h"

class List {
  public: 
    List();
    List(int);
    ~List();
    int hash(int&,int);
    int contains(int&);
    bool isFull();
    bool insert(int&);
    bool remove(int&);
    void print();
    Bucket* bucketTable;
    int tableSize;
};

#include "list.cpp"

#endif
