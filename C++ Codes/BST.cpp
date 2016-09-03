#include<iostream>
using namespace std;
struct BST
{
	public:
	int data;
	BST *left;
	BST *right;
};
BST *tree;
BST *insert(BST *tree,int data)
{
	if (tree==NULL)
	{
		tree=new BST();
		tree->data=data;
		tree->left=NULL;
		tree->right=NULL;
	}
	else{
		if(data>=tree->data)
		{
			tree->right=insert(tree->right,data);
		}
		else{
			tree->left=insert(tree->left,data);
		}
	}
	return tree;
}
void inorder(BST *node)
{
	BST *temp=node;
	if(temp!=NULL)
	{
	   inorder(temp->left);
	   cout<<temp->data;
	   inorder(temp->right);
    }
}
void postorder(BST *node)
{
	BST *temp=node;
	if(temp!=NULL)
	{
	   inorder(temp->left);	   
	   inorder(temp->right);
	   cout<<temp->data;
    }
}
void preorder(BST *node)
{
	BST *temp=node;
	if(temp!=NULL)
	{
		cout<<temp->data;
	   inorder(temp->left);	   
	   inorder(temp->right);
	   
    }
}
BST* giveparent(BST *tree,int a,int b){
	BST *temp=tree;
	if(temp==NULL){
		return temp;
	}
	else if(temp->data>b ){
			temp=giveparent(temp->left,a,b);
		}
	else if(temp->data<a ){
			temp=giveparent(temp->right,a,b);
		}
	else if(temp->data>=a&&temp->data<=b){
	        
	        return temp;
	}
}
int distance(BST *tree,int a,int count)
{
	BST *temp=tree;
	if(temp==NULL)
	{
		return 0;
	}
	else if (temp->data==a){
		return count;
	}
	else {
		if(temp->data>a){
		count+=1;
		distance(temp->left,a,count);
		}
		else{
			count+=1;
		distance(temp->right,a,count);
		}
		
	}
}
void search(BST *tree,int num){
	if(tree==NULL){
		cout<<"item not found";
	}
	else
	{
		if(tree->data==num){
			cout<<"Item Found";
			
		}
		else if(tree->data<num)
		{
			search(tree->right,num);
		}
		else{
			search(tree->left,num);
		}
	}
	
	}
int main()
{
	tree=insert(tree,10);
	tree=insert(tree,5);
	tree=insert(tree,12);
	tree=insert(tree,4);
	tree=insert(tree,7);
	tree=insert(tree,8);
	//cout<<tree->data;
	//BST *temp=tree->left;
	//cout<<temp->data;
	//cout<<tree->right->data;
	//inorder(tree);
	//postorder(tree);
	//preorder(tree);
	search(tree,15);
	//BST *temp=new BST();
	//temp=giveparent(tree,4,5);
	//int x=distance(temp,8,0);
	//cout<<temp->data;
	system("pause");
	return 0;
}
