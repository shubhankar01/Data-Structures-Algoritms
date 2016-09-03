#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> a;
int main(){
	a.push_back(0);
	a.push_back(1);
	a.push_back(2);
	while(!a.empty())
	{
		cout<<a[0];
		a.erase(remove(a.begin(),a.end(),0),a.end());
		a.erase(remove(a.begin(),a.end(),1),a.end());
		a.erase(remove(a.begin(),a.end(),2),a.end());
	}
	system("pause");
	return 0;
}
