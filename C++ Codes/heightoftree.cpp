#include<iostream>
using namespace std;
class node{
	public:
	int data;
	node *left;
	node *right;
};
node *insert(node *tree,int data){
	if (tree==NULL){
		tree=new node();
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
int height(node *tree){
	node *temp=tree;
	if(temp==NULL){
		return 0;
	}
	else{
		int lheight=height(temp->left);
		int rheight=height(temp->right);
		if (lheight>rheight){
			return lheight+1;
		}
		else{
			return rheight+1;
		}
	}
}
int main(){
	node *tree=NULL;
	tree=insert(tree,3);
	tree=insert(tree,4);
	tree=insert(tree,5);
	int x=height(tree);
	cout<<x;
	system("pause");
	return 0;
}
