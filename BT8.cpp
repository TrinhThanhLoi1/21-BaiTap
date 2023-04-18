#include <iostream>
using namespace std;
#define max 100 
int Stack[max];
int Top;

void StackInit(){
	Top = -1;
}

void push(int V){
	if(Top > max-1){
		cout<<"Stack is full";
	}else{
		Top++;
		Stack[Top] = V;
	}
}

int pop(){
	if (Top == -1){
		cout<<"Stack is empty";
		return -1;
	}else{
		int res = Stack[Top];
		Top--;
		return res;
	}
}

int empty(){
	if(Top == -1){
		return 0;
	}
	return 1;
}

int size(){
	return Top+1;
}

int top(){
	if (Top == -1){
		cout<<"Stack is empty";
		return -1;
	}else{
		int res = Stack[Top];
		return res;
	}
}
int main(){
	StackInit();
	
	push(41);
	push(23);
	push(4);
	push(14);
	push(56);
  push(1);
	
	cout<<pop()<<endl;
	
	
	cout<<"Size of Stack after pop = "<<size()<<endl;
	system("pause");
}
