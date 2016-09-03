#include<iostream>
using namespace std;
class list{
	public:
	list *next;
	char data;
};
list * insert(list *head,char num){
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
void merge(list *str1,list *str2){
	list *temp1=str1;
	list *temp2=str1->next;
	while(temp2!=NULL){
		temp1->next=str2;
		str2=str2->next;
		temp1->next->next=temp2;
		temp1=temp2;
		temp2=temp2->next;
		
}
	
	
}
int main(){
	list *str1 = NULL;
	list *str2 = NULL;
	str1=insert(str1,'a');
	str1=insert(str1,'b');
	str1=insert(str1,'c');
	str2=insert(str2,'d');
	str2=insert(str2,'e');
	str2=insert(str2,'f');
	merge(str1,str2);
	while(str1!=NULL){
		cout<<str1->data;
		str1=str1->next;
	}
	
	system("pause");
}
