#pragma once
#include "admin.h"
#include "library.h"
#include <iostream>
#include "database.h"
using std::cout; 
using std::endl;

Admin::Admin()
{
    m_iCount = 0;
    m_AdminName = "Default";
    m_Password = "Default";
}
Admin::Admin(std::string AdminName, std::string Password)
{
    m_iCount = 0;
    m_AdminName = AdminName;
    m_Password = Password;
}
std::string Admin::AdminNameGetter()
{
    return m_AdminName;
}
void Admin::AdminNameSetter(std::string AdminName)
{
    m_AdminName = AdminName;
}
void Admin::PasswordSetter(std::string Password)
{
    m_Password = Password;
}
std::string Admin::AdminPasswordGetter()
{
    return m_Password;
}
