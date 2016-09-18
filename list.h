#ifndef _LIST
#define _LIST

#include "node.h"

class List {
  public:
    List(int);
    ~List();
    int hash(int);
    void insert(int);
    void remove(int);
    void print();
    bool contains(int[],int,int);
    bool isFull();

  private:
    int size;
};


#endif
