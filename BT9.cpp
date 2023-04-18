#include <iostream>
using namespace std;

#define max 100
int Queue[max];
int front, rear;

void QueueInit(){
	front = 0;
	rear = -1;
}

void enqueue(int V){
	if(rear >= max-1){
		cout<<"Queue is full";
	}else{
		rear++;
		Queue[rear] = V;
	}
}

int dequeue(){
	if(front > rear){
		cout<<"Queue is empty";
		return -1;
	}else{
		int res = Queue[front];
		front++;
		return res;
	}
}

void printQueue(){
	if(front > rear){
		cout<<"Queue is empty";
	}else{
		cout<<"Elements in Queue:";
		for(int i=front;i<=rear;i++){
			cout<<Queue[i]<<" ";
		}
	}
}

int main(){
	QueueInit();

	enqueue(41);
	enqueue(23);
	enqueue(4);
	enqueue(14);
	enqueue(56);
  enqueue(1);
	printQueue();
  
  cout<<endl<<"Enqueue fromt Queue:";
	cout<<enqueue()<<" 55";
	cout<<enqueue()<<endl;
  cout<<endl<<"Dequeue fromt Queue:";
	cout<<dequeue()<<" 23";
	cout<<dequeue()<<endl;
  
	cout<<"Print Queue after dequeue"<<endl;
	printQueue();
	system("pause");
}
