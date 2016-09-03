#include<iostream>
using namespace std;
class stack{
	public:
	stack *next;
	int data;
};
stack *s1;
stack *head;
stack  *end;
void push(int num){
	if(s1==NULL){
		s1=new stack();
		s1->data=num;
		s1->next=NULL;
		head=s1;
		end=s1;
		
	}
	else{
		stack *temp=new stack();
		temp->data=num;
		temp->next=NULL;
		end->next=temp;
		end=temp;
	
		
	}
}
void pop(){
	if(end==NULL){
		cout<<"empty";
	}
	else{
		stack *t=head;
		while (t->next!=end){
			t=t->next;
		}
		t->next=NULL;

		end=t;
	}
}
int main(){
	push(3);
	push(3);
	push(3);
	pop();
	while(s1!=NULL){
		cout<<s1->data;
		s1=s1->next;
	}
	system("pause");
	return 0;
}
