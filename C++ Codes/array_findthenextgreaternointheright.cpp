#include<iostream>
using namespace std;
int main(){
	int a[]={12,15,22,9,7,2,18,23,27};
	int max=0;
	for(int i=0;i<(sizeof(a)/sizeof(*a))-1;i++){
		max=a[i+1];
		for(int j=i+1;j<(sizeof(a)/sizeof(*a));j++){
			if(a[j]>=a[i]){
				cout<<a[j]<<" ";
				break;
			}
		}
	}
	
	system("pause");
	return 0;
}
