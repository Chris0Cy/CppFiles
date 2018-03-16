///////////////////////////////////////////////////////////////////////
// Class NodeSLList Implementation
//
// Description - This file implements a singly linked list.
///////////////////////////////////////////////////////////////////////
#include "NodeSLList.h"


///////////////////////////////////////////////////////////////////////
// default constructor
///////////////////////////////////////////////////////////////////////
NodeSLList::NodeSLList()
{
	head = tail = 0;
}

///////////////////////////////////////////////////////////////////////
// copy constructor
///////////////////////////////////////////////////////////////////////
NodeSLList::NodeSLList(NodeSLList & list)
{
	IntNode *tmp;
	tmp = nullptr;

	for (int i = 1; i<list.GetSize(); i++)
	{
		*tmp = list.RetrieveNode(i);
		AddToTail(*tmp);
	}
}


///////////////////////////////////////////////////////////////////////
// destructor
///////////////////////////////////////////////////////////////////////
NodeSLList::~NodeSLList()
{
	// call destroyList() to remove all nodes
	// and reset linked list
	DestroyList();
}

///////////////////////////////////////////////////////////////////////
// IsEmpty
///////////////////////////////////////////////////////////////////////
bool NodeSLList::IsEmpty()
{
	// if head is NULL, then the list is empty, and we will return true
	// otherwise, we will return false
	return (head == 0);
}

///////////////////////////////////////////////////////////////////////
// GetSize
///////////////////////////////////////////////////////////////////////
int NodeSLList::GetSize()
{
	// check to see if the list is empty. if 
	// so, just return 0
	if (IsEmpty()) return 0;

	int size = 1;
	IntNode *p = head;
	// compute the number of nodes and return
	while (p != tail)
	{
		// until we reach the tail, keep counting
		size++;
		p = p->next;
	}
	return size;
}

///////////////////////////////////////////////////////////////////////
// AddToHead
///////////////////////////////////////////////////////////////////////
void NodeSLList::AddToHead(const IntNode & node)
{
	// create a new node, and make it the head. the 
	// previous head will become head->next
	IntNode * next = head;
	head = new IntNode;
	head->next = next;
	head->data = node.data;

	// if this is the first node, make the tail the 
	// same as the head
	if (tail == 0)
		tail = head;
}

///////////////////////////////////////////////////////////////////////
// DeleteFromHead
///////////////////////////////////////////////////////////////////////
IntNode NodeSLList::DeleteFromHead()
{
	IntNode temp;
	temp.data = 0;
	temp.next = NULL;
	if (IsEmpty())
	{
		cout << "*****ERROR: Can't delete from head. List is Empty" << endl;
		return temp;
	}

	// get current value of node we are about to delete, 
	// so we can return it.
	temp.data = head->data;

	IntNode *tmp = head;

	// if there is only one node, set the head and pointer tails
	// to NULL (0)
	if (head == tail)
		head = tail = 0;

	// otherwise, move the head pointer to the next node 
	// in the list
	else
		head = head->next;

	// delete head node
	delete tmp;

	// return value of node that was deleted
	return temp;
}

///////////////////////////////////////////////////////////////////////
// AddToTail
///////////////////////////////////////////////////////////////////////
void NodeSLList::AddToTail(const IntNode & node)
{
	IntNode *temporaryNode;
	temporaryNode = nullptr;
	temporaryNode->data = node.data;
	temporaryNode->next = NULL;
	tail->next = temporaryNode;

	if (head == 0)
		tail = temporaryNode;
	
}

///////////////////////////////////////////////////////////////////////
// DeleteFromTail
///////////////////////////////////////////////////////////////////////
IntNode NodeSLList::DeleteFromTail()
{
	IntNode nodeData;

	// get the current data at the tail
	nodeData.data = tail->data;


	// if there is only one node, delete the only node, and set the 
	// head and tail pointers to NULL (0) 
	if (head == tail)
	{
		delete head;
		head = tail = 0;
	}

	// otherwise, traverse to the tail node and delete it
	else
	{
		IntNode * temp;
		// traverse to tail pointer
		for (temp = head; temp->next != tail; temp = temp->next);
		delete tail;
		tail = temp;
		tail->next = 0;
	}

	return nodeData;
}


///////////////////////////////////////////////////////////////////////
// DeleteNode
///////////////////////////////////////////////////////////////////////
IntNode NodeSLList::DeleteNode(int nodeNum)
{
	if (nodeNum <= 0) nodeNum = 1;
	IntNode *prev = head, *temp = head;
	IntNode current;

	// traverse to the node
	for (int loop = 1; loop<nodeNum; loop++)
	{
		prev = temp, temp = temp->next;
		// check for case where nodeNum is > the number of 
		// nodes in the list. if we reach the tail before
		// we traverse to the node, delete the tail 
		if (temp == tail)
			return DeleteFromTail();
	}

	// if deleting the head just call 
	// the appropriate member function 
	// and don't repeat that logic here
	if (temp == head) return DeleteFromHead();

	// otherwise, delete the node we traversed to
	prev->next = temp->next;
	current.data = temp->data;

	delete temp;

	return current;
}

///////////////////////////////////////////////////////////////////////
// InsertNode
///////////////////////////////////////////////////////////////////////
void NodeSLList::InsertNode(int nodeNum, const IntNode &node)
{
	IntNode *prevNode = head;
	for (int i = 1; i < nodeNum; i++)
	{
		prevNode = prevNode->next;
	}

	IntNode * insertNode;
	insertNode = new IntNode(node);
	prevNode->next = insertNode;

	insertNode->next = prevNode->next->next;
}


///////////////////////////////////////////////////////////////////////
// UpdateNode
///////////////////////////////////////////////////////////////////////
void NodeSLList::UpdateNode(int nodeNum, const IntNode &node)
{
	IntNode *tmp = head;

	// traverse to the node, or to the last node, whichever comes
	// first. if the last node is reached, then that is the node
	// that is updated
	for (int i = 1; i< nodeNum && tmp != tail; i++)
		tmp = tmp->next;

	tmp->data = node.data;
}

///////////////////////////////////////////////////////////////////////
// SortList
///////////////////////////////////////////////////////////////////////
void NodeSLList::SortList(unsigned int order)
{
	if (head == NULL) {
		return;
	}
	IntNode *p;
	IntNode *q;
	p = head;

	while (p != NULL) {
		q = p->next;
		if (order == 0) { // Ascending
			while (q != NULL) {
				if (p->data > q->data) {
					int temp = p->data;
					p->data = q->data;
					q->data = temp;
				}
			}
		}
		if (order == 1) { // Descending
			while (q != NULL) {
				if (p->data < q->data) {
					int temp = p->data;
					p->data = q->data;
					q->data = temp;
				}
			}
		}
		p = p->next;

	}
}

///////////////////////////////////////////////////////////////////////
// DestroyList
///////////////////////////////////////////////////////////////////////
void NodeSLList::DestroyList()
{
	// while the list is NOT empy
	// keep removing the head node and make
	// the next node the head node
	for (IntNode *p; !IsEmpty(); )
	{
		p = head->next;
		delete head;
		head = p;
	}
	head = tail = 0;
}

///////////////////////////////////////////////////////////////////////
// operator=
///////////////////////////////////////////////////////////////////////
NodeSLList & NodeSLList::operator=(NodeSLList & list)
{
	IntNode *origPtr, *LastPtr;
	origPtr = list.head;
	LastPtr = new IntNode();
	head = LastPtr;

	while (LastPtr != NULL) {
		LastPtr = new IntNode();
		LastPtr = LastPtr->next;
	}
	return *this;
}

///////////////////////////////////////////////////////////////////////
// operator==
///////////////////////////////////////////////////////////////////////
bool NodeSLList::operator==(NodeSLList & list)
{
	IntNode *tmp1;
	tmp1 = nullptr;
	*tmp1 = RetrieveNode(1);

	IntNode *tmp2 = list.head;
	int c = 0;


	for (int i = 2; i<list.GetSize(); i++, tmp2 = tmp2->next)
	{
		*tmp1 = RetrieveNode(i);

		if (tmp1->data == tmp2->data)

			c = 1;

		else

		{
			c = 0;
			break;
		}
	}

	return(c == 1);
}

///////////////////////////////////////////////////////////////////////
// operator!=
///////////////////////////////////////////////////////////////////////
bool NodeSLList::operator!=(NodeSLList & list)
{
	IntNode *tmp1;
	IntNode *tmp2 = list.head;
	int c = 0;

	tmp1 = nullptr;

	for (int i = 1; i<GetSize(); i++, tmp2 = tmp2->next)
	{
		*tmp1 = RetrieveNode(i);

		if (tmp1->data != tmp2->data)
		{
			c = 1;
			break;
		}
	}

	return(c == 1);
}

///////////////////////////////////////////////////////////////////////
// operator+
///////////////////////////////////////////////////////////////////////
NodeSLList NodeSLList::operator+(NodeSLList & list)
{
	NodeSLList output(*this);
	IntNode *tmp;
	tmp = nullptr;
		for (int i = 1; i<list.GetSize(); i++)
		{
			*tmp = list.RetrieveNode(i);
			output.AddToTail(*tmp);
		}
		return output;
}

///////////////////////////////////////////////////////////////////////
// RetrieveNode
// 
// Description: retrieve data from a node without removing it from 
//              the list
// Input: node number (1-N; not 0-N-1)
// Output: none
// Returns: reference to node data
///////////////////////////////////////////////////////////////////////
IntNode & NodeSLList::RetrieveNode(int nodeNum) const
{
	IntNode *tmp = head;

	// traverse to the node, or to the last node, whichever comes
	// first
	for (int i = 1; i< nodeNum && tmp != tail; i++)
		tmp = tmp->next;

	return *tmp;
}

ostream & operator<<(ostream & output, NodeSLList & list)
{
	IntNode *tmp = list.head; 

	for (int i = 1; i <= list.GetSize(); i++)
	{
		output << tmp->data;
		tmp = tmp->next;

	}
	return output;
}
