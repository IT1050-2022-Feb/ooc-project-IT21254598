#pragma once
#include "Review.h"
#include "Cart.h"
#include "user.h"
#define SIZE 1

class customer : public user
{
	private:
		char name[50];
		int DateOfBirth;
		Cart *c[SIZE];
	
	public:
		customer();
		customer(char c_name[],int dob, int c_id, double amnt);
		void addReview(Review *r);
		void displayProfile();
		~customer();
};

