#include "LoginManager.h"
#include "library.h"
#include "admin.h"
#include "user.h"
#include "database.h"
#include <iostream>
#include <string>
using namespace std;

login::login()
{
	iUser = 0;
}
void login :: AdminLogin(database &ref,Library &obj)
{

        int chSwitch;
		cout << "\nDirecting to Admin Login Page...\n";
		std::cin.ignore();
		std::string AdminName;
        std::string Password;
        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
        cout << "-:Admin Login:-\n\n\n";

		cout << "Enter Your Name:";
        //std::cin.ignore();
		std::getline(std::cin, AdminName);
        cout << "Enter Your Password:";
        std::getline(std::cin, Password);
		if (obj.CheckAdmin(AdminName,Password))
		{ 

            while (1)
            {
            Menu:
                cout << endl;
                cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
                cout << "\n1.AddBook\n2.RemoveBook\n3.Display Books\n4.AddUser\n0.Exit\n";
                cout << "\nEnter here:\t";
                cin >> chSwitch;
                if (chSwitch == 0)
                    break;
                switch (chSwitch)
                {
                case 1:
                    obj.addBook(ref,obj);
                    break;
                case 2:
                    obj.removeBook(ref);
                    break;
                case 3:
                    obj.displayBooks();
                    break;
                case 4:
                    obj.addUser(ref,obj);
                    break;
                default:
                    break;
                }
            }

		}
        else
        {
            cout << "Admin Not Registered!\n";
            chSwitch = -1;
            cout << "Do you want to register your Name as Admin?\n Press 1 to Add and 0 to Exit\n";
            //std::cin.ignore();
            cin >> chSwitch;

            switch (chSwitch)
            {
            case 1:
                obj.AddAdmin(AdminName,Password,ref);
                goto Menu;
                break;
            case 0:
                return;
            }
        }
}
int login::UserLogin(Library &obj,database &ref)
{
    int iNo;
    int chSwitch;
    
    int UserId;
    std::string UserName;
    std::string Password;

    cout << "Enter Your Name:\t";
    std::cin.ignore();
    std::getline(std::cin, UserName);
    cout << "Enter Your Password:\t";
    std::getline(std::cin, Password);
    if (obj.CheckUser(UserName,Password))
    {
        cout << "\n User Found :)...\n\n";
        cout << "-:Happy Reading:-\n\n";
        goto Switch;
    }
     else
    {
        cout << "User Not Found!\n";
        return 0;
    }

    do
    {
    Switch:
        std::string BookId;
        cout << "\n\n1.Issue Book\n2.Display Books\n3.Return Book\n0.Exit\n";
        cin >> chSwitch;
        switch (chSwitch)
        {
        case 1:
            cout << "Enter User id:";
            cin >> UserId;
            cout << "Enter Book ID:";
            std::cin.ignore();
            std::getline(std::cin, BookId);
            obj.issueBook(UserId,BookId,ref);
            break;
        case 2:
            obj.displayBooks();
            break;
        case 3:
            cout << "Enter UserId:";
            cin  >> UserId;
            std::cin.ignore();
            cout << "Enter BookId:";
            std::getline(std::cin, BookId);
            obj.returnBook(UserId, BookId,ref);
            break;
        case 0:
            cout << "Thanks for using our library system :)\n\n";
            return 1;
        default:
            cout << "Thanks for using our library system :)";
            goto Switch;

        }

    } while (chSwitch != 0);

    return 0;
}
