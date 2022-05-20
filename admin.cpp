#include "admin.h"
#include <cstring>
#include <iostream>
using namespace std;

admin::admin(){
	adminID = 0;
}

admin::admin(int a_ID){
	adminID = a_ID;
}

void admin::generateReport(){
	
}

admin::~admin()
{
	cout<<"Admin deleted"<<endl;
	
}