#include<iostream>
using namespace std;

int buy(string item, int Need , int Stoke, int price){
	if(Need<=Stoke){
		cout<<"Your cart has "<<Need<<" "<<item<<endl<<"Total cost = "<<price * Need<<"thanks for the purchse :)";
	}
	else{
		cout<<"We do not have that many "<<item<<endl;
	}
};

int main(){
	int input ,userNeed , iphonePrice, samsungPrice, xiomiPrice , iphoneStoke , samsungStoke , xiomiStoke;
	iphonePrice = 100000;
	samsungPrice = 50000;
	xiomiPrice = 10000;
	
	iphoneStoke = 10;
	samsungStoke = 50;
	xiomiStoke = 100;
	
	char Ans;
	cout<<"1. iphone "<<endl<<"2. samsung "<<endl<<"3. xiomi "<<endl<<"input Number = ";
	cin>>input;
	
	cout<<"How many Do you want ? = ";
	cin>>userNeed;
	
	switch(input){
		case 1:{
			cout<<"this phone costs = 100000"<<endl<<"You sure ? = ";
			cin>>Ans;
		
			if( Ans == 'y' || Ans=='Y' ){
				buy("Iphone",userNeed,iphoneStoke,iphonePrice); 
			}else{
				cout<<"visit Again !"<<endl;
			}
			break;
		}
		case 2:{
			cout<<"this phone costs = 50000"<<endl<<"You sure ? = ";
			cin>>Ans;
			if(Ans == 'y' || Ans=='Y' ){
				buy("Samsung",userNeed,samsungStoke,samsungPrice);
			}else{
				 cout<<"visit Again !"<<endl;
			}
			break;
		}
		case 3:{
			cout<<"this phone costs = 10000"<<endl<<"You sure ? = ";
			cin>>Ans;
			if(Ans == 'y' || Ans=='Y' ) {
				buy("Xiomi",userNeed,xiomiStoke,xiomiPrice); 
			}else{
				cout<<"visit Again !"<<endl;
			}
			break;
		}
		default:{
			cout<<"invalid input !"<<endl;
			break;
		}
	}
	
	
	
	
}