#include<iostream>
#include<vector>
using namespace std;

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
vector <bst *> q;
void levelorder(bst *tree){
	bst *temp=tree;
	q.push_back(tree);
	while (!q.empty()){
		if(q[0]->left!=NULL){
			q.push_back(q[0]->left);
		}
		if(q[0]->right!=NULL){
			q.push_back(q[0]->right);
		}
		//cout<<q[0]->data;
		q.erase(q.begin());
	}
}
void size(bst *tree){
	bst *temp=tree;
	int count =0,count2=-1;
	while(temp!=NULL){
		temp=temp->left;
		count++;
	}
	bst *temp2=tree;
	while(temp2!=NULL){
		temp2=temp2->right;
		count2++;
	}
	cout<<count2;
	
}
int main(){
	
	bst *tree=NULL;
	tree=insert(tree,5);
	tree=insert(tree,4);
	tree=insert(tree,10);
	tree=insert(tree,9);
	tree=insert(tree,3);
	tree=insert(tree,11);
	//levelorder(tree);
	size(tree);
	//tree=insert(tree,-2);
	//cout<<tree->data;
	//tree=insert(tree,5);
	system("pause");
	return 0;
}
