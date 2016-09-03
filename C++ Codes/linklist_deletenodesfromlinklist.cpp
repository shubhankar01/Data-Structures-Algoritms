#include<iostream>
using namespace std;
class list{
	public:
	list *next;
	int data;
};
list * insert(list *head,int num){
	if(head==NULL){
		head=new list();
		head->data=num;
		head->next=NULL;
		return head;
	}
	else{
		list *temp=head;
		while(temp->next!=NULL){
			temp=temp->next;
		}
		list *n=new list();
		n->data=num;
		n->next=NULL;
		temp->next=n;
		return head;
		
	}
}
void deleteNode(list *head,list *del){
	if(head==del){
		if(head->next==NULL){
			cout<<"can't be empty";
		}
		else{
			list *temp1=head;
			temp1->data=temp1->next->data;
			temp1->next=temp1->next->next;
		}
	}
	else{
		list *temp1=head;
		list *temp2=head->next;
		while(temp2!=NULL && temp2!=del){
			temp2=temp2->next;
			temp1=temp1->next;
		} 
		if(temp2->next==NULL){
			temp1->next=NULL;
		}
		else
		{
			temp1->next=temp2->next;
			
		}
	}
	
}
int main(){
	list *item = NULL;
	
	item=insert(item,3);
	item=insert(item,4);
	item=insert(item,5);
	deleteNode(item,item);
	while(item!=NULL){
		cout<<item->data;
		item=item->next;
	}
	
	system("pause");
}
