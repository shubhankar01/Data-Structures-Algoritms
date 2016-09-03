#include<iostream>
using namespace std;
class node
{ 
    public:
	int data;
	node *next;
}*linklist;
void add(int data1){
	if (linklist==NULL)
	{
		node *temp=new node();
		temp->data=data1;
		temp->next=NULL;
		linklist=temp;
	}
	else{
		node *temp=new node();
		temp->data=data1;
		temp->next=linklist;
		linklist=temp;
		
	}
}
void display()
{
	node *temp=new node();
	temp=linklist;
	while (temp!=NULL){
		cout<<"data -> "<<temp->data<<"\n";
		temp=temp->next;
	}
}
void removeduplicate(){
	/*
	node *temp1=linklist;
	node *temp2=new node();
	node *temp3=new node();
	while (temp1!=NULL)
	{
	temp2=linklist->next;
	if(temp2==NULL)
	{
		break;
	}
	else{
	
	if(temp2->data==linklist->data){
		temp1=temp1->next;
		temp2=temp1->next;
	}
	else{
	if(temp2==NULL)
	{
		break;
	}
	
	temp3=temp2->next;
	while(temp3!=NULL)
	{
		if(temp1->data==temp3->data){
			temp2->next=temp3->next;
			temp3=temp3->next;
			temp2=temp2->next;
		}
		else{	
		temp3=temp3->next;
		temp2=temp2->next;
	}
	}
	display();
	cout<<"\n\n\n";
	temp1=temp1->next;
}
}
}
*/
   node *temp1=linklist;
   node *temp2=new node();
   
   while(temp1!=NULL){
   	temp2=linklist->next;
   	while (temp2!=NULL)
	   {
	   if (temp1->data==temp2->data){
   		 node *temp3=temp2->next;
   		 temp1->next=temp3;
   		 temp2=temp3;
	   }
	   else{
	   temp2=temp2->next;
      }
   }
   temp1=temp1->next;
}
	     
	
}
int main()
{
	add(4);
	add(4);
	add(3);
	add(3);
	add(2);
	add(6);
	removeduplicate();
	display();
	
	system("pause");
	return 0;
}
