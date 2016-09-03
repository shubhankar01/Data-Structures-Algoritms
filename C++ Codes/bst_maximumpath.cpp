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
int findmaxpath(bst *tree,int sum){
	if(tree==NULL){
	 return 0;
	}
	else{
		int x=tree->data;
	    int l=findmaxpath(tree->left,sum);
	    int r=findmaxpath(tree->right,sum);
	    int ld=sum+tree->data+l;
	    int rd=sum+tree->data+r;
	    if(ld>rd){
	    	sum=ld;
	    	return sum;
		}
		else{
			sum=rd;
			return sum;
		}
	}
}
int main(){
	bst *tree=NULL;
	tree=insert(tree,1);
	tree=insert(tree,2);
	//tree=insert(tree,4);
	tree=insert(tree,3);
	
	//tree=insert(tree,-1);
	//tree=insert(tree,-2);
	//tree=insert(tree,5);
	int x=findmaxpath(tree,0);
	cout<<x;
	system("pause");
	return 0;
}
