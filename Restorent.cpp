#include<iostream>
using namespace std;
#define MENU_ITEM 2
#define user_NEED 100

string menu [MENU_ITEM]={"veg : price = 100 ","non-veg : price = 200"};
int userBought=0;
int userNeed[user_NEED];
int Price[user_NEED] = {100,200};
int total_price=0;
char Ans;
int A = 0;

int Buy(){
	
	cout<<"your bought "<<userBought<<"things which are : "<<endl;
	int num;
	for(int i=0;i<userBought;i++){
		//cout<<menu[i];
		num = userNeed[i];
		cout<<menu[num-1]<<endl;
		total_price +=  Price[num-1];
	};
	
	cout<<"Total = "<<total_price<<endl;
	cout<<"Buy (y or n) : ";
	cin>>Ans;
	
	if(Ans == 'y' || Ans == 'Y'){
		cout<<"Thnks For Purchse";
	}else{
		cout<<"come Again";
	}
}

int GiveMenu(){
	
	for(int i=0;i<MENU_ITEM;i++){
		cout<<i+1<<" "<<menu[i]<<endl;
	};
	cout<<"Option Number = ";
	cin>>userNeed[A];
	if(userNeed[A] > 3 || userNeed[A] < 1){

		return 0;	
	} 
	A++;
	userBought++;
	cout<<"anyhing Else sir? (y or n) = ";
	cin>>Ans;
	
	if(Ans == 'y' || Ans == 'Y'){
		GiveMenu();
	};
};

int main(){

	int ANS = GiveMenu();
	
	if(ANS != 0){
		Buy();
	}else{
		cout<<"invalid input";
	}
		
}