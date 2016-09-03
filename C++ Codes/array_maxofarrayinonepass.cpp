#include<iostream>
using namespace std;
int main(){
	int a[]={1,7,3,4,5};
	int max=0;
	for(int i=0;i<=4;i++){
		if (max<a[i])
		{
			max=a[i];
		}
	}
	cout<<max;
	system("pause");
	return 0;
}
