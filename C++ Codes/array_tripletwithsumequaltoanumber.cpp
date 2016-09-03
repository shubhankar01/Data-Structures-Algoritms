#include<iostream>
using namespace std;

void triplet(int a[],int num,int n){

	
	for(int i=0;i<n;i++){
		int k=n-1;
		int j=i+1;
		while(j<k){
		
			if(a[i]+a[j]+a[k]==num){
				cout<<a[i]<<"+"<<a[j]<<"+"<<a[k]<<"="<<num;
				k--;
			}
			else if (a[i]+a[j]+a[k]<num) {
				j++;
			}
			else{k--;
			}
			
			
		}
	}
}
int main(){
	int a[] = {1,2,3,3,4,5,6,7,8};
    int n = sizeof(a)/sizeof(a[0]);
   triplet(a,6, n);
    //cout << "Maximum contiguous sum is \n" << max_sum;
    return 0;
}
