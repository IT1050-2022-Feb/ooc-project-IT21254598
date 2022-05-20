#pragma once

class user
{
	protected:
		char username[20];
		char password[20];
		
	public:	
		user();
		user(char un[], char pw[]);
		void login();
		void logout();
		~user();
	
};

