#include <iostream>
#include"clsDblLinkedList.h"
using namespace std;

int main()
{
    clsDblLinkedList <int> MydblLinkedList;
   /* if (MydblLinkedList.Is_Empty())
        cout << "Yeas,it's empty" << endl;
    else
        cout << "NO,it's not empty" << endl;*/
    MydblLinkedList.InsertAtBeginning(5);
    MydblLinkedList.InsertAtBeginning(4);
    MydblLinkedList.InsertAtBeginning(3);
    MydblLinkedList.InsertAtBeginning(2);
    MydblLinkedList.InsertAtBeginning(1);
    cout << "The size of Linked list is " << MydblLinkedList.Size()<<endl;
    cout << "The linked list is :" << endl;
    MydblLinkedList.PrintList();
   /* clsDblLinkedList <int>::Node* N1;
    N1 = MydblLinkedList.GetNode(1);
    MydblLinkedList.PrintNodeDetails(N1);*/
    cout << "The item value  " << MydblLinkedList.GetItem(2);
    cout << "Updateing value" << endl;
   // MydblLinkedList.UpdateItem(2, 500);
    MydblLinkedList.InsertAfter(2, 500);
    MydblLinkedList.PrintList();
    cout << "The size of Linked list is " << MydblLinkedList.Size() << endl;
   /* cout << "The value " << N1->_value << endl;
    cout << "The prev " << N1->_prev << endl;*/
   // MydblLinkedList.Reverse();
   /* cout << "The linked list is :" << endl;
    MydblLinkedList.PrintList();*/
   // cout << "Clearing the LinkedList ";
   // MydblLinkedList.Clear();
   // cout << "The size of Linked list is " << MydblLinkedList.Size() << endl;
   
   /* cout << "The linked list is :" << endl;
    MydblLinkedList.PrintList();
    clsDblLinkedList<int>::Node* N1 = MydblLinkedList.Find(2);
    if (N1 != NULL)
        cout << "The node is exist :)" << endl;
    else
        cout << "The node is not exist :(" << endl;

    MydblLinkedList.InsertAfter(N1, 100);
    cout << "The linked list is :" << endl;
    MydblLinkedList.PrintList();

    MydblLinkedList.InsertAtEnd(500);
    cout << "The linked list is :" << endl;
    MydblLinkedList.PrintList();

   
    clsDblLinkedList<int>::Node* N2 = MydblLinkedList.Find(4);
   MydblLinkedList.DeletNode(N2);
    cout << "The linked list is :" << endl;
    MydblLinkedList.PrintList();

    MydblLinkedList.DeletNodeAtBeginnig();
    cout << "The linked list is :" << endl;
    MydblLinkedList.PrintList();

    MydblLinkedList.DeleteLastNode();
    cout << "The linked list is :" << endl;
    MydblLinkedList.PrintList();
    if (MydblLinkedList.Is_Empty())
        cout << "Yeas,it's empty" << endl;
    else
        cout << "NO,it's not empty" << endl;

    cout << "The size of Linked list after all operations is " << MydblLinkedList.Size()<<endl;*/
  
  


    
    
}
