#include<iostream>
using namespace std;
class queue
{public:
	int arr[3];
	int rear,front;
	
		queue()
		{
			rear=front=-1;
			
		}
		bool isEmpty()
		
		{
			if (rear==-1)
			{
				return 1;
			}
			else
			return 0;
			
		}
		bool isFull()
		
		{
			if (rear+1==4)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			
		}
		void enqueue(int x)
		{
			if(isFull())
			{
				cout<<"The queue is full";
			}
			else
			{
				arr[++rear]=x;
			}
			
		}
		void dequeue()
		{
			if(isEmpty())
			{
				cout<<"The queue is empty";
			}
			else
			{ cout<<"element deleted "<<endl;
				front++;
			}
			
		}
		void display()
		{
			for(int i=0;i<=rear;i++)
			{
				cout<<arr[i]<<" ";
			}
			cout<<endl;
		}
		
		
};
int main()
{
	queue q1;
	q1.enqueue(1);
	q1.enqueue(2);
	q1.enqueue(3);
	q1.display();
	cout<<"front element is "<<endl;
	q1.dequeue();
	q1.dequeue();
	q1.display();
	
		
	

	return 0;	
}
