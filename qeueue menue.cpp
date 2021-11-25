#include<iostream>
using namespace std;
class queue
{
	public:
		int arr[50];
	int front=-1;
	int rear=-1;
	void insert()
	{
		int a;
		if(rear+1==50)
		{
			cout<<"queue overflow";
			
		}
		else 
		{
			if(front==-1)
			front=0;
			cout<<"insert element in que";
			cin>>a;
			rear++;
			queue[rear]=a;
			
		}
	}
	void delet()
	{
		if(front==-1||front>rear)
		{
			cout<<"que underflow";
			
		}
		else
		{
			cout<<"data deletd from que= "<<arr[front];
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
queue q1;
	char ch;
	do
	{
		cout<<"Enter an option:\n 1. For insert\n 2. For delet\n 3. For display"<<endl;
		int op;
		cin>>op;
		switch(op)
		{
			case 1:
				q1.insert();
				break;
				case 2:
					q1.delet();
					break;
					case 3:
						q1.display();
						break;
		}
		cout<<"Do you wish to contiune [y/n]";
		cin>>ch;
		
	} while(ch=='y');
	
	return 0;	
}
