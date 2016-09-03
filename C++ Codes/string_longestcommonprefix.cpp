#include<iostream>
#include<string>
using namespace std;
int main(){
	string str[]={"abcd", "abbd", "abdy", "abc"};
	int i=0;
	int size=sizeof(str)/sizeof(str[0])-1;
	int siz=size+1;
	string comp=str[0];
	i=1;
	string answer="";
	
	while (size!=0){
		
		//cout<<str[i];
		if(comp.length()>=str[i].length())
		{
			comp=str[i];
		}
		i++;
		size--;
	}
	
	//cout<<comp;
	//cout<<siz;
	for (int i=0;i<comp.length();i++){
		int count=0;
		for (int j=0;j<siz;j++){
			
		      if(comp[i]==str[j][i]){
		      	count++;
		      	//	cout<<"hi";
			  }
	}
	//cout<<count<<"\n";
		if(count==siz){ 
		string x(1,comp[i]);
	
		    
			answer.append(x);
		}
	}
	cout<<answer;
	system("pause");
	return 0;
}
