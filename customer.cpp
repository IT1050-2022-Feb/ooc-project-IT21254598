#include "customer.h"
#include "Cart.h"
#include <cstring>
#define SIZE 1
#include <iostream>
using namespace std;
customer::customer(){
	strcpy(name,"");
	int DateOfBirth = 0;
}

customer::customer(char c_name[],int dob, int c_id, double amnt){
	strcpy(name,c_name);
	DateOfBirth = dob;
	c[0]= new Cart(c_id,amnt); 	
}

void customer::displayProfile(){

}
void customer::addReview(Review *r){
	
}

customer::~customer(){
	
	for(int i=0; i<SIZE; i++){
		delete c[i];
	}
	cout<<"Customer deleted"<<endl;
	
	
}