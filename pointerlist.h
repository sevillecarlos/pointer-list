#ifndef POINTERLIST_H
#define POINTERLIST_H
#include"node.h"
#include<iostream>
#define EMPTY 0
using namespace std;

class PointerList
{
public:
    PointerList();

    /*Variables*/
    int quantity_elements;
    Node *begin;
    Node *end;
    Node *temporal;

    /*Functions*/
    void Insert(int position,int value);
    void Add(int value);
    int ObtainValue(int position);
    int ObtainPosition(int value);
    void Erase(int position);
    void PrintList();
    bool Empty();
    int getSize();
    int LinkedList(PointerList *new_list);
    Node *ObtainInitialPosition(int initial);
    PointerList *Clone();
};

#endif // POINTERLIST_H
