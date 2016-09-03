#include<iostream>
#include<algorithm>
#include<map>
using namespace std;
class node{
	public:
	int data;
	node *next;
	node *random;
	void insert();
}*link;
void node::insert()
{
	node *temp=new node();
	temp->data=3;
	temp->next=NULL;
	temp->random=NULL;
	link=temp;
	
    temp=new node();
	temp->data=4;
	temp->next=NULL;
	temp->random=link;
	link->next=temp;
	
}

int main()
{   
    
    map<node *,node *> x;
    node *templink=new node();
    node obj;
    obj.insert();
	templink=link;
	node *newlink=new node();
	//cout<<templink->data;
	while(templink!=NULL){
    	node *newlist=new node();
    	x.insert(pair<node *,node *>(templink,newlist));
    	newlist->data=templink->data;
    	newlink=newlist;
    	templink=templink->next;
	}
	//cout<<x[link->next]->data;
	int size=x.size();
	cout<<size;
	while (size){
		cout<<x[link]->data<<"\n";
		x[link]->random=link->random;
		link=link->next;
		size--;
	}
	system("pause");
}
