#include<iostream>
using namespace std;
int maxSubArraySum(int a[],int n){
	int globalsum=0;
	int localsum=0;
	
	for (int i=0;i<n;i++){
		localsum+=a[i];
		if(localsum<=0){
	        localsum=0;
		}
		else{
			if(localsum>=globalsum){
				globalsum=localsum;
			}
		}
	}
	return globalsum;
}
int main(){
	int a[] = {-2, -3, 4, -1, -2, 1, 5, -3};
    int n = sizeof(a)/sizeof(a[0]);
    int max_sum = maxSubArraySum(a, n);
    cout << "Maximum contiguous sum is \n" << max_sum;
    return 0;
}
