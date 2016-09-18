#ifndef _LIST
#define _LIST

#include "node.cpp"

class List {
  public:
    List(int);
    ~List();
    int hash(int,int);
    bool insert(int);
    void remove(int);
    void print();
    bool contains(int);
    bool isFull();
    int search(int);

  private:
    int size;

};


#endif
