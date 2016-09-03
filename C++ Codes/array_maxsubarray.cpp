// C++ program to print largest contiguous array sum
#include<iostream>
using namespace std;
 
int maxSubArraySum(int a[], int size)
{
    int max_so_far = 0, max_ending_here = 0;
 
    for (int i = 0; i < size; i++)
    {
        max_ending_here = max_ending_here + a[i];
        if (max_ending_here < 0)
            max_ending_here = 0;
        if (max_so_far < max_ending_here)
            max_so_far = max_ending_here;
    }
    return max_so_far;
}
void triplet(int a [],int num){
	int n=8;
	
	int ans=0;
	for (int i=0;i<n-2;i++){
		int k=n-1;int j=i+1;
		while(j<k){
			if (a[i]+a[j]+a[k]<num){
				ans+=k-j;
				j++;
			}
			else{
				k--;
			}
		}
	}
	cout<<ans;
}
/*Driver program to test maxSubArraySum*/
int main()
{
    int a[] = {1,1,2,3,4,5,6};
    int n = sizeof(a)/sizeof(a[0]);
    //int max_sum = maxSubArraySum(a, n);
    triplet(a,4);
    //cout << "Maximum contiguous sum is \n" << max_sum;
    return 0;
}
