#include<iostream>
#define n 4
using namespace std;

int main(){
	int mat[4][4] =
    {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };
    int rotate[4][4];
    int transpose[4][4];
   // n = sizeof(mat)/sizeof(mat[0]);
   // cout<<n;
   int x=n-1;
    for(int i=0;i<n;i++){
    	for (int j=0;j<n;j++){
    		rotate[i][j]=mat[x-j][i];
		}
	}
	for(int i=0;i<n;i++){
    	for (int j=0;j<n;j++){
    		transpose[i][j]=mat[j][i];
		}
	}
	
	for(int i=0;i<n;i++){
    	for (int j=0;j<n;j++){
    		cout<<rotate[i][j]<<"  ";
		}
		cout<<endl;
	}
	cout<<endl;cout<<endl;cout<<endl;
	for(int i=0;i<n;i++){
    	for (int j=0;j<n;j++){
    		cout<<transpose[i][j]<<"  ";
		}
		cout<<endl;
	}
	//n =rotate(a, n);
    //cout << "Maximum contiguous sum is \n" << max_sum;
    return 0;
}

