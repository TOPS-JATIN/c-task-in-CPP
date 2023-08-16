#include<iostream>
using namespace std;
#define nameCount 2
#define ExamCount 5
#define Total nameCount+1

int main(){
	string name[nameCount][ExamCount];
	int total[Total]={0};
	for(int i =0;i<nameCount;i++){
		cout<<"Add name : ";
		fflush(stdin);
	 	getline(cin,name[i][0]);
	 	
	 	for(int j=1;j<ExamCount;j++){
	 		cout<<"Exam "<<j<<" Marks = ";
	 		cin>>name[i][j];
	 		
	 		total[i] += stoi(name[i][j]);
		 }
		
	};
	for(int i=0;i<nameCount;i++){
		cout<<name[i][0]<<endl;
		for(int j=1;j<ExamCount;j++){
	 		cout<<"Exam "<<j<<" Marks = "<<name[i][j]<<endl;
		 };
		cout<<"Yout Total = "<<total[i]<<endl; 
	}
}