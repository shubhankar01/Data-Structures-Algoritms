#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

class product{
	public:
		int PID;
		string category;
	
    public:
    	product(){
    		category="";
    		PID=0;
		}
    	friend void addproduct(product obj);
    	friend void viewproduct(vector <product> prodobj);
    	friend void updateproduct(vector <product> &prodobj,int prductID);
};
class user{
	private:
		int userID;
		
	public:
		vector <int>productID;
		friend void adduser(user obj);
		friend void viewuser();
		friend void purchase(int UID,int PID);
		friend void blacklist();
};
vector <product> prodobj;
void addproduct(product p){
	p.category="Shoes";
	p.PID=12;
    prodobj.push_back(p);	
}
void viewproduct(vector <product> prodobj){
	cout<<prodobj[0].PID;
	cout<<prodobj[0].category;

}

void updateproduct(vector <product> &prodobj,int productID){
	for (int i=0; i<=prodobj.size();i++){
		if (prodobj[i].PID==productID){
			prodobj[i].category="Electronic";
			cout<<prodobj[i].category;
		}
	}
}
vector <user> users;
void adduser(user obj){
     obj.userID=123;
     obj.productID.push_back(1234);
     users.push_back(obj);
}
void purchase(int UID,int PID){
	for (int i=0; i<=users.size();i++){
		if(users[i].userID==UID){
			users[i].productID.push_back(PID);
		}
	}
	
}
void viewuser(){
	for (int i=0; i<users.size();i++){
		cout<<"usID -> "<<users[i].userID;
		for (int j=0;j<users[i].productID.size();j++){
	
	cout<<"PID -> "<<users[i].productID[j];
}
}
}
void blacklist(){
	users[0].productID.clear();
  //  users[0].productID.erase(remove(users[0].productID.begin(), users[0].productID.end(), 12), users[0].productID.end());
}
int main(){
	product obj;
	addproduct(obj);
	
	updateproduct(prodobj,12);
    cout<<"\n";
    
    user userobj;
    adduser(userobj);
    purchase(123,12);
    cout<<"\n";
    viewuser();
     cout<<"\n";
     blacklist();
     viewuser();
	system("pause");
	return 0;
}
