#include<iostream>
using namespace std;
int main(){
	
	double grade;
	cout<<"Enter Your Final Score here!"<<endl;
	cin>> grade;
	if(grade > 100){
		cout<<"Invalid Score Entered!"<< "Input the Right One"<<endl;
	}
	if(grade >= 80){
		cout<< "A"<<endl;
	}
	else if(grade >= 75 && grade <= 79){
		cout<< "B+"<<endl;
	}
	else if(grade >= 70 && grade <= 74){
		cout<<"B"<<endl;
	}
	else if(grade >= 65 && grade <= 69){
		cout<<"C+"<<endl;
	}
	else if(grade >= 60 && grade <= 64){
		cout<<"C"<<endl;
	}
	else if(grade >= 55 && grade <= 59){
		cout<<"D+"<<endl;
	}
	else if(grade >= 50 && grade <= 54){
		cout<<"D"<<endl;
	}
	else if(grade >= 45 && grade <= 49){
		cout<<"E"<<endl;
	}
	else if(grade <= 44 ){
		cout<<"F"<<endl;
	}
	if(grade < 0){
		cout<<"Invalid Score Entered !"<< "Input the Right One"<<endl;
	}
	
	system("pause");
	return 0;
}
