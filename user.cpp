#include "user.h"
#include <cstring>
#include <iostream>
using namespace std;
user::user(){
	strcpy(username,"");
	strcpy(password,"");
}

user::user(char un[], char pw[]){
	strcpy(username,un);
	strcpy(password,pw);
	
}
	
void user::login(){
	
}

void user::logout(){
	
}

user::~user(){
	cout<<"Destructor called"<<endl;
}