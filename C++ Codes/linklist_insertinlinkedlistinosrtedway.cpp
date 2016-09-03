#include<iostream>
using namespace std;
class list{
	public:
	list *next;
	int data;
};
list *a;
void insert(int num){
	if(a==NULL){
		list *temp=new list();
		temp->data=num;
		temp->next=NULL;
		a=temp;
	}
	else if(a->data>=num){
		list *temp=new list();
		temp->data=num;
		temp->next=a;
		a=temp;
	}
	else {
		list *temp1=a;
		list *temp2=a->next;
		if(temp2==NULL){
			temp2=new list();
			temp2->data=num;
			a->next=temp2;
			return;
		}
		while(temp2!=NULL && temp2->data<=num  ){
			temp1=temp1->next;
			temp2=temp2->next;
		}
		if(temp2==NULL){
			
			list *temp3=new list();
			temp3->data=num;
			temp3->next=NULL;
			temp1->next=temp3;
		}
		else{
			list *temp3=new list();
			temp3->data=num;
			temp3->next=temp2;
			temp1->next=temp3;
			
		}
		
	}
} 
int main(){
	insert(5);
	insert(2);
	insert(4);
    insert(3);
	while (a!=NULL){
		cout<<a->data;
		a=a->next;
	}
	
	system("pause");
	return 0;
}
