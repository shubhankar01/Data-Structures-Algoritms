#include<iostream>
using namespace std;
class bst{
	public:
		int data;
		bst *right;
		bst *left;
};

bst  *insert(bst *tree,int data){
	if (tree==NULL){
		tree=new bst();
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
//int sun
int checkfulltree(bst *tree){
	if(tree==NULL){
	 return 1;
	}
	else{
		if(tree->left!=NULL && tree->right==NULL || tree->right!=NULL && tree->left==NULL){
			cout<<"Not a binary tree"<<tree->data;
			
			return 0;
		}
		else{
			int x=checkfulltree(tree->left);
			int y=checkfulltree(tree->right);
			
		}
	
	}
}
int main(){
	bst *tree=NULL;
	tree=insert(tree,2);
	tree=insert(tree,1);
	tree=insert(tree,4);
	tree=insert(tree,3);
	
	tree=insert(tree,8);
    tree=insert(tree,5);
	//tree=insert(tree,6);
	int x= checkfulltree(tree);
	cout<<x;
	system("pause");
	return 0;
}
