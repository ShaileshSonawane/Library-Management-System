#pragma once
#include <string>
#include "database.h"
class login
{
public:
	login();
	int iUser;
	std::string AdminName;
	std::string UserName;
	void AdminLogin(database &ref,Library &obj);
	int UserLogin(Library &obj,database &ref);
};
