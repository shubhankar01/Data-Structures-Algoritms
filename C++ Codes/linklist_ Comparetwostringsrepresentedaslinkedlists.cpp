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
void cmpstr(list *str1,list *str2){
	while(str1 && str2 && str1->data ==str2->data){
		str1=str1->next;
		str2=str2->next;
	}
	
		if(str1 ==NULL && str2==NULL){
			cout<<"0";
		}
		else if(str1->data > str2->data)
		{
			cout<<"1";
		}
		else {
			cout<<"-1";
		}
	
	
}
int main(){
	list *str1 = NULL;
	list *str2 = NULL;
	str1=insert(str1,'a');
	str1=insert(str1,'b');
	str1=insert(str1,'a');
	str2=insert(str2,'a');
	str2=insert(str2,'a');
	str2=insert(str2,'a');
	cmpstr(str1,str2);
	
	
	system("pause");
}
