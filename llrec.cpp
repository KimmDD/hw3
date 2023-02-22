#include "llrec.h"

//*********************************************
// Provide your implementation of llpivot below
//*********************************************

void llpivot(Node *&head, Node *&smaller, Node *&larger, int pivot)
{
  
	if(head==NULL){
    smaller = nullptr;
    larger = nullptr;
    return;
  }
  
  else if (head -> val <= pivot){
    smaller = head;
    Node* temp = head -> next;
    llpivot(temp, smaller->next, larger, pivot);

  }

  else{
    larger = head;
    Node* temp = head -> next;
    llpivot(temp, smaller, larger -> next, pivot);

  }
  
  head = nullptr;

}
