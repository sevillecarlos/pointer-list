#include "pointerlist.h"

PointerList::PointerList()
{
    this->begin = nullptr;
    this->end = nullptr;
    this->temporal = nullptr;
    this->quantity_elements = 0;
}

/*Insert Element*/
void PointerList::Insert(int position, int value)
{
    if(position < 0 || position > this->quantity_elements)
    {
        cout<<"Invalid Position"<<endl;
        return;
    }
    else
    {
        Node *new_element = new Node(value);
        this->temporal = begin;
        if(position==0)
        {
            begin = new_element;
            begin->next = temporal;
            this->quantity_elements++;
            return;
        }
        for(int i=0;i < position - 1;i++)
        {
            temporal = temporal->next;
        }

        Node *temporal2 = temporal->next;
        temporal->next = new_element;
        temporal->next->next = temporal2;
        this->quantity_elements++;
        return;
    }
}
/*Add Element*/
void PointerList::Add(int value)
{
    Insert(this->quantity_elements,value);
}
/*Obtain Value*/
int PointerList::ObtainValue(int position)
{
    this->temporal = begin;
    for(int i=0;i < this->quantity_elements;i++)
    {
        if(position == i)
        {
            return temporal->value;
        }
        temporal = temporal->next;
    }
    return 0;
}
/*Obtain Position*/
int PointerList::ObtainPosition(int value)
{
   this->temporal = begin;
    for(int i=0;i < this->quantity_elements ;i++)
    {
        if(temporal->value == value)
        {
            return  i;
        }
        temporal = temporal->next;
    }
    return 0;
}
/*Erase Element*/
void PointerList::Erase(int position)
{

       if(this->quantity_elements == 0)
       {
        cout<<"Empty list"<<endl;
        return;
       }

       if(position < 0 || position > this->quantity_elements)
       {
        cout<<"Invalid Position"<<endl;
        return;
       }

        Node *erase_element;
        this->temporal = begin;
        if(position == 0)
        {
            erase_element = begin;
            temporal = begin->next;
            delete erase_element;
            this->quantity_elements--;
        }
        else
        {
        for(int i=0;i < position - 1;i++)
        {
            temporal = temporal->next;
        }
        erase_element = temporal->next;
        temporal->next = temporal->next->next;
        delete erase_element;
        this->quantity_elements--;
        }
}
/*Linked List*/
int PointerList::LinkedList(PointerList *new_list)
{
    if(new_list->quantity_elements==0)
    {
        return -1;
    }
    if(this->quantity_elements==0)
    {
       this->temporal = new_list->begin;
       for(int i=0 ; i < new_list->quantity_elements;i++)
       {
           Add(temporal->value);
           temporal = temporal->next;
       }
    }
    else
    {
        temporal = new_list->begin;
        for(int i=0;i < new_list->quantity_elements;i++)
        {
            if(ObtainValue(temporal->value)==1)
            {
                Add(temporal->value);
                temporal = temporal->next;
            }
        }
    }
    return 0;
}
/*Clone List*/
PointerList* PointerList::Clone()
{
  PointerList *new_list = new PointerList();
  this->temporal = begin;

  for(int i=0; i < this->quantity_elements ;i++)
  {
      new_list->Add(temporal->value);
  }
  return new_list;
}
/*Obtain Initial Position*/
Node *PointerList::ObtainInitialPosition(int initial)
{
    this->temporal = begin;
    for(int i=0 ; i < initial ; i++)
    {
        temporal = temporal->next;
    }
    return temporal;
}
/*Is empty*/
bool PointerList::Empty()
{
    if(this->quantity_elements==0)
    {
        cout<<"SI"<<endl;
        return true;
    }
    else
    {
        cout<<"NO"<<endl;
        return false;
    }
}
/*Get Size*/
int PointerList::getSize()
{
   return this->quantity_elements;
}
/*Print List*/
void PointerList::PrintList()
{
    this->temporal = begin;

    if(this->quantity_elements == 0 )
    {
        cout<<"The list is empty"<<endl;
        return;
    }

    cout<<"Positions----Elements"<<endl;
    for(int i=0;i < this->quantity_elements;i++)
    {
        cout<<    i    << "      :     " <<   temporal->value   <<endl;
        temporal = temporal->next;
    }

}


