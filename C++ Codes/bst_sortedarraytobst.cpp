#include<iostream>
using namespace std;
class bst{
	public:
	int data;
	bst *left;
	bst *right;
};
bst * insert(bst *root,int a){
	if(root==NULL){
		root=new bst();
		root->data=a;
		root->left=NULL;
		root->right=NULL;
		
	}
	else if(root->data>a){
		root->left=insert(root->left,a);
	}
	else{
		root->right=insert(root->right,a);
	}
	return root;
}
bst * func(bst *root,int arr[],int start,int end){
	if(start==end){
		
		return root;
	}
	else{
		int mid=(start+end)/2;
		root=insert(root,arr[mid]);
		
		func(root,arr,start,mid);
		func(root,arr,mid+1,end);
		
	}
}

int main(){
	bst *root=NULL;
	int arr[]={1,2,3,4,5,6};
    root=func(root,arr,0,5);
    
	//root =insert(bst *root,1);
	cout<<root->left->left->data;
	system("pause");
	return 0;
}
