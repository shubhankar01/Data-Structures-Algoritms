// erasing from vector
#include <iostream>
#include <vector>
#include<algorithm>
#include<time.h>
using namespace std;
class card{
	public:
		int number;
		string color;
		void allot(int number);
		void viewcards();
		void distribute();
};
vector<card> cards;

void card::allot(int num){
	while (num!=0)
	{
		if (num%2==0){
			card obj;
			srand (time(NULL));
			obj.number=rand()%num;
			obj.color="black";
			cards.push_back(obj);
		}
		else if (num%3==0){
			card obj;
			obj.number=rand()%num;
			obj.color="red";
			cards.push_back(obj);
		}
		else{
			card obj;
			obj.number=rand()%num;
			obj.color="green";
			cards.push_back(obj);
		}
		num--;
	}
}
void card::viewcards(){
	cout<<"\n\nALL CARD\n";
	for (int i=0;i<cards.size();i++){
		cout<<cards[i].number<<" - "<<cards[i].color;
		cout<<"\n";
	}
} 
class player{
	public:
	string name;
	vector <card> cards;
	void addplayer(player obj);
	void usercard();
	
};
vector <player>users;
void player::usercard(){
	for (int i=0;i<users.size();i++)
	{
		cout<<users[i].name;
		cout<<"\n\n";
		for(int j=0;j<users[i].cards.size();j++)
		{
			cout<<users[i].cards[j].number<<" - "<<users[i].cards[j].color<<"\n";
		}
	}
}
void player::addplayer(player obj)
{
	users.push_back(obj);
}
void card::distribute(){
	for (int i=0;i<10;i++)
	{
		users[0].cards.push_back(cards[i]);
	
	}
	for (int i=10;i<20;i++)
	{
		users[1].cards.push_back(cards[i]);	
	}
}
void logic()
{
	int j=10;
	int count1=0;
	int count2=0;
	int size=users[0].cards.size();
	for (int i=0 ;i<=9;i++){
		    
			if (users[0].cards[i].number==cards[j].number )
			{
				count1++;
                   //users[0].cards.erase(users[0].cards.begin()+i);
                   //cards.erase(cards.begin()+j);
                   
			}
			if (users[1].cards[i].number==cards[j].number )
			{
                   //users[1].cards.erase(users[1].cards.begin()+i);
                   //cards.erase(cards.begin()+j);
                   count2++;
			}
			j++;
		
	}
    
	if(count1>count2){
			cout<<"user1 wins -"<<count1<<"-"<<count2;
			
	}
		else if(count1<count2){
			cout<<"user2 wins - "<<count1<<"-"<<count2;
			
		}
		else{
			cout<<"Draw"<<count1<<"-"<<count2;
			
		}
}
void playGame()
{
	//while (!users[0].cards.empty() || !users[0].cards.empty() || !cards.empty()) 
	//{
		logic();
		
	//}
	
		
}

int main ()
{
  card obj;
  player obj1;
  obj1.name="player1";
  obj1.addplayer(obj1);
  player obj2;
  obj2.name="player2";
  obj2.addplayer(obj2);
  
  obj.allot(50);
  obj.viewcards();
  obj.distribute();
  
  obj2.usercard();
  
  playGame();
  
 // obj2.usercard();
  //obj.viewcards();
  return 0;
}// erasing from vector
 
