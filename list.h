#ifndef LIST_H
#define LIST_H

#include <string>
#include <fstream>
#include <iomanip>
#include <iostream>
#include "node.h"

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

#include "list.cpp"

#endif
