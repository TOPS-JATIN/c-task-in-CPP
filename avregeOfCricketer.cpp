#include<iostream>
using namespace std;


int batsman_Bowler(string name,int match,int age, string profile){
	int runs , wicket;
	cout<<name<<" Your Total match = "<<match<<endl<<"your age = "<<age<<endl<<"your profile = "<<profile<<endl<<endl;
	cout<<"How many Runs ? = ";
	cin>>runs;
	cout<<"How many wicket : ";
	cin>>wicket;
	cout<<name<<": Your Avrage is = "<<runs/wicket<<endl;
};

int allRounder(string name,int match,int age, string profile){
	int batting_runs , batting_wicket,bowling_runs,bowling_wicket;
	cout<<"add batting runs : ";
	cin>>batting_runs;
	
	cout<<"add batting wickets : ";
	cin>>batting_wicket;
	
	cout<<"add bowling runs : ";
	cin>>bowling_runs;
	
	cout<<"add bowling wickets : ";
	cin>>bowling_wicket;
	
	float batting_avrage , bowling_avrage;
	batting_avrage = batting_runs/batting_wicket;
	bowling_avrage = bowling_runs/bowling_wicket;
	
	cout<<"Your Batting Avrage = "<<batting_avrage<<endl<<"Your Bowling Avrage is = "<<bowling_avrage<<endl<<"Your All Avrage is = "<<batting_avrage + bowling_avrage<<endl;
	
	
}

void basic(){
	string name ;
	int age , match , profile;
	
	cout<<"Add name : ";
	getline(cin,name);
	cout<<"Add Age : ";
	cin>>age;
	cout<<"Add profile "<<endl<<"1. Batsman"<<endl<<"2. Bowler"<<endl<<"3.All Rounder : ";
	cin>>profile;
	cout<<"How Many Matches You have played : ";
	cin>>match;
	
	switch(profile){
		case 1:{
			batsman_Bowler(name, match, age, "Batsman");
			break;
		}
		case 2:{
			batsman_Bowler(name,match,age,"Bowler");
			break;
		}
		case 3:{
			allRounder(name,match,age,"All-Rounder");
			break;
		}
		default:{
			cout<<"invalid input"<<endl;
			break;
		}
	}
}

int main(){
	basic();
}