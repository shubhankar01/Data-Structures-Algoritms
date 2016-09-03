#include<iostream>
using namespace std;
int main(){
	int num=1234;
	int answer=0;
	while (num){
		int d=num%10;
		
		answer=answer*10+d;
		//cout<<d;
		num=num/10;
	}
	cout<<answer;
	system("pause");
	return 0;
}
