
#pragma once
#include "user.h"
#include "Report.h"

class admin : public user
{
	private:
		int adminID;
		Report *r1;
	
	public:
		admin();
		admin(int a_ID);
		void displayDetails();
		void generateReport();
		~admin();
		
	
};

