#include<iostream>
#include<vector>
using namespace std;
vector <int> vec;
int returnsum(int a[],int sum,int size){
	int arrays=0;
	int temp=0,len=123,p=0,q=0;
	for (int i=0;i<size;i++){		
		if(a[i]==sum){
			arrays++;
			//cout<<a[i];
		}
		temp=a[i];
		for (int j=i+1;j<size;j++){
		temp=temp+a[j];
		   if(temp==sum){
			arrays++;
			int r=j-i;
			if(r<len){
				len=r;
				p=i;
				q=j;
			}
			
		}
	}
	}
	cout<<p<<" "<<q<<" ";
	return arrays;
}
int main(){
	int a[]={1,2,3,3,5};
	int size=sizeof(a)/sizeof(a[0]);
	int x=returnsum(a,6,size);
	cout<<x;
	system("pause");
	return 0;
}
