#include<iostream>
#include<string>
using namespace std;
void swap(string &str,int x, int y)
{
   char temp;
   
    temp = str[x];
   str[x] = str[y];
   str[y] = temp;
}
 
void func(string &str,int l,int r){
	if(l==r){
		cout<<str<<endl;
	}
	else{
		for (int i=l;i<r;i++){
		

		     swap(str,l,i);
		     func(str,l+1,r);
		     swap(str,l,i);
		 }
	
	}
}
int main(){
	string str="abc";
	int x=str.size();
	int l=0;
	func(str,l,x);
	
	//func(str);
	system("pause");
	return 0;
}
