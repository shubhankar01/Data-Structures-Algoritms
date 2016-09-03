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

int findminheight(bst *tree){
	if(tree==NULL){
	 return 0;
	}
	else{
	    int lheight=findminheight(tree->left);
	    int rheight=findminheight(tree->right);
	    if(lheight<rheight){
	    	return lheight+1;
		}
		else {
			return rheight+1;
		}
	}
}
int main(){
	bst *tree=NULL;
	tree=insert(tree,3);
	tree=insert(tree,4);
	tree=insert(tree,5);
	int x=findminheight(tree);
	cout<<x<<endl<<tree->data;
	
	system("pause");
	return 0;
}
