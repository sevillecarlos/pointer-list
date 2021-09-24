#include <iostream>
#include"pointerlist.h"

using namespace std;

int main()
{
    PointerList pointerlist;

    int value;
    int option;

    do{
        cout<<"**********************"<<endl;
        cout<<"1.Add Element"<<endl;
        cout<<"2.Print List"<<endl;
        cout<<"3.Find Value"<<endl;
        cout<<"4.Find Position"<<endl;
        cout<<"5.Erase Element"<<endl;
        cout<<"6.Get Size"<<endl;
        cout<<"7.Empty?"<<endl;
        cout<<"8.Exit"<<endl;
        cout<<"**********************"<<endl;
        cout<<"Answer : " ;
        cin>>option;

        switch(option)
    {
        case 1:
           cout<<"Give me a number to add : "<<endl;
           cin>>value;
           pointerlist.Add(value);
           cout<<"You add an element !"<<endl;
            break;
        case 2:
            cout<<"All the Element in the list"<<endl;
            cout<<"*****************"<<endl;
            pointerlist.PrintList();
            cout<<"*****************"<<endl;
            break;
        case 3:
            cout<<"Give me the position of the value in the list"<<endl;
            cin>>value;
            cout<<"***************"<<endl;
            cout<<" The Value is : "<< pointerlist.ObtainValue(value)<<endl;
            cout<<"***************"<<endl;
            break;
        case 4:
            cout<<"Give me the value of the position in the list"<<endl;
            cin>>value;
            cout<<"***************"<<endl;
            cout<<" The Position is : "<< pointerlist.ObtainPosition(value)<<endl;
            cout<<"***************"<<endl;
            break;
        case 5:
            cout<<"Give me the position of the value that you want to erase : "<<endl;
            cin>>value;
            pointerlist.Erase(value);
            cout<<"The value was erased!"<<endl;
            break;
        case 6:
            cout<<"The amount of element : "<< pointerlist.getSize() <<endl;
            break;
        case 7:
            cout<<"The list if empty : "<< pointerlist.Empty() <<endl;
            break;
       case 8:
            cout<<"Thank You!"<<endl;
            exit(0);
            break;
    }

    }while(-8);
    return 0;
}

// Made my @sevillcarlos