#include<iostream>
#include<string>
using namespace std;
class list{
	public:
	string data;
	list *next;
};
list * insert (list *link,string num){
	if(link==NULL){
		link=new list();
		link->data=num;
		link->next=NULL;
		return link;
	}
	else{
		list *temp=link;
		while(temp->next!=NULL){
			temp=temp->next;
		}
		list *n=new list();
		n->data=num;
		temp->next=n;
		n->next=NULL;
		return link;
	}
}
void checkpalidrome(list *link){
	list *tempmid=link;
	int i=0;
	while(i!=2){
		tempmid=tempmid->next;
		i++;
	}
	//cout<<tempmid->data;
	list *temp1=tempmid->next;
	list *temp2=temp1->next;
	list *temp3=temp2->next;
	
	if(temp3==NULL && temp2!=NULL){
		tempmid->next=temp2;
		temp2->next=temp1;
		temp1->next=NULL;	
	}
	else{
		temp2->next=temp1;
		temp1->next=NULL;
		temp1=temp2;
		temp2=temp3;
		temp3=temp3->next;
		while(temp3!=NULL){
			temp2->next=temp1;
			temp1=temp2;
			temp2=temp3;
			temp3=temp3->next;
		}
		temp2->next=temp1;		
	    tempmid->next=temp2;
	}
}

int main(){
	list *link=NULL;
	link=insert(link,"a");
	link=insert(link,"b");
	link=insert(link,"c");
	link=insert(link,"c");
	link=insert(link,"b");
	link=insert(link,"a");
	checkpalidrome(link);
	while(link!=NULL){
		cout<<link->data;
		link=link->next;
	}
	system("pause");
	return 0;
}
