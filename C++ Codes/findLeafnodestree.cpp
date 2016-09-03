#include<iostream>
#include<vector>
using namespace std;
class node{
	public:
	int data;
	node *left;
	node *right;
};

node* insert(node *tree,int data){
	if(tree==NULL){
		tree =new node();
		tree->data=data;
		tree->left=NULL;
		tree->right=NULL;
	}
	else{
		if(tree->data>data){
			tree->left=insert(tree->left,data);
		}
		else{
			tree->right=insert(tree->right,data);
		}
	}
	return tree;
}
vector <node *>list;
vector <node *>leafs;

void leafnodes(node *tree){
	node *temp=tree;
	list.push_back(temp);
	//cout<<list[0]->data;
	while (!list.empty())
	{	
		temp=list[0];
	
	    if(temp->left==NULL&&temp->right==NULL)
	    {
	    	leafs.push_back(temp);
		}
		else
	    {
	    	if(temp->left!=NULL)
	    	{
			   list.push_back(temp->left);
	       	}
	       	if (temp->right!=NULL){
			   list.push_back(temp->right);
	        }
	   } 
	   //cout<<list[0]->data;
	list.erase(list.begin());
	}
}
int recursiveleaf(node *temp){
	if(temp==NULL){
		return 0;
	}
	else if(temp->left==NULL&& temp->right==NULL){
		cout<<temp->data;
		return temp->data;
	}
	else{
		int x=recursiveleaf(temp->left);
		int y=recursiveleaf(temp->right);
	}
}
void findendnoderecursive(node *tree){
	if(tree==NULL){
		return;
	}
	else {
		if(tree->left!=NULL && tree->right!=NULL){
			findendnoderecursive(tree->left);
			findendnoderecursive(tree->right);
		}
		else if (tree->right!=NULL && tree->left==NULL ){
			findendnoderecursive(tree->right);
		}
		else if (tree->right==NULL && tree->left!=NULL ){
			findendnoderecursive(tree->left);
		}
		else{
			cout<<tree->data;
		}
	}
}
int main(){
	node *tree=NULL;
	tree=insert(tree,3);
	//cout<<tree->data;
	tree=insert(tree,2);
	tree=insert(tree,5);
	tree=insert(tree,4);
	tree=insert(tree,6);
	//cout<<tree->data;
	tree=insert(tree,1);
	//leafnodes(tree);
	//recursiveleaf(tree);
	findendnoderecursive(tree);
	//cout<<tree->data;
	//cout<<tree->right->data;
	//cout<<tree->right->right->data;
	
	//for (int i=0;i<leafs.size();i++){
	//	cout<<leafs[i]->data;
	//}
	system("pause");
	return 0;
}
