// erasing from vector
#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
int partition(int a[],int left,int right){
	int pivot=a[left];
	int l=left+1;
	int r=right;
	while (l<=r){
	    while(a[l]<pivot && l<=right)
		l++;
		while(a[r]>pivot && r>=0)
		r--;
		if(l<=r){
			swap(a[l],a[r]);
		}
		
	}
	swap(a[r],pivot);
	//cout<<a[r];
	return r;
	
	}
	
void quick(int a[],int left,int right){
	if(left<right){
	
	int pi;
	pi=partition(a,left,right);
	quick(a,left,pi-1);
	quick(a,pi+1,right);
}
}
void sort(int a[]){
	for (int i=0;i<5;i++){
		for(int j=i+1;j<5;j++){
			if(a[j]<a[i]){
				swap(a[i],a[j]);
			}
		}
	}
}

int main ()
{
  int array[5]={2,1,6,4,5};
  quick(array,0,4);
  //sort(array);
  cout<<array[0]<<array[1]<<array[2]<<array[3]<<array[4];
  return 0;
}
 
