#pragma once
#include <string>
#include "database.h"

using namespace std;
class database;
class Library;
class Admin
{
private:
	std::string m_Password;
	friend Library;
	std::string m_AdminName;
	int m_iCount;
public:
	Admin();
	Admin(std::string AdminName, std::string Password);
	std::string AdminNameGetter();
	std::string AdminPasswordGetter();
	void AdminNameSetter(std::string AdminName);
	void PasswordSetter(std::string Password);
};
