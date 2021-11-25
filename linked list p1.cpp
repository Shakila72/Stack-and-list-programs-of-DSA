#include<iostream>
using namespace std;

struct Node{
	int data;
	 Node * next;
};
class linked_list
{
	Node * head;
	public:
		linked_list();
		{
			head= NULL;
			
		}
	 void insert(int x){
   Node * t = new Node;
   t->data = x;
   if (head== NULL){
      t->next = NULL;
      head = t;
   }
   else{
      t->next=head;
      head = t;
   }
	void delete(){
   Node * t = head;
   if (head == NULL){
      return;
   }
   else{
      head = head->next;
      delete t;
   }

	

};

int main(){
	linked_list l1;
	
     l1 insert(10);
      insert (20);
      insert (40);
      delete();     
}

