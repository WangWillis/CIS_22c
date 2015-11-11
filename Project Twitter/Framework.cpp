#include <iostream>
#include <string>
using namespace std;

int main()
{
	int menu = 0;
	int menu1;
	char input1;
	char input2;
	char inputDelete;
	string user;
	string password;
	do
	{
		input1 = '\0';
		cout << "Welcome to Twatter.  How may we assist you?" << endl;
		cout << "Please enter 'L' to log in, 'N' to create a new account, or 'Q' to quit." << endl;
		cin.get(input1);
		input1 = toupper(input1);
		cin.clear();
		cin.ignore(numeric_limits <streamsize> ::max(), '\n');
		while (input1 != 'L' && input1 != 'N' && input1 != 'Q')
		{
			cout << "Invalid input." << endl;
			cout << "Please enter 'L' to log in, 'N' to create a new account, or 'Q' to quit." << endl;
			cin.get(input1);
			input1 = toupper(input1);
			cin.clear();
			cin.ignore(numeric_limits <streamsize> ::max(), '\n');
		}
		switch (input1)
		{
		case 'L':
			menu1 = 0;
			cout << "Please enter your username, or 'exit' to quit." << endl;
			cin >> user;
			cin.clear();
			cin.ignore(numeric_limits <streamsize> ::max(), '\n');
			//check user against table
			if (false) //if not in table
			{
				cout << "I'm sorry, that username is not in our data banks.  Please try again." << endl;
				cin >> user;  //loop this
			}
			cout << "Please enter your password, or exit to quit." << endl;
			cin >> password;
			cin.clear();
			cin.ignore(numeric_limits <streamsize> ::max(), '\n');
			//check user against hash
			if (false) //if not in table
			{
				cout << "I'm sorry, that password is incorrect.  Please try again." << endl;
				cin >> password;  //loop this
			}
			//on succcessful login you can do stuff
			cout << "You have successfully logged in." << endl;
			do
			{
				input2 = '\0';
				cout << "What would you like to do?" << endl;
				cout << "Input (A) to view followers, (B) to view who you're following," << endl;
				cout << "(F) to follow people, (M) view your tweets, (N) to view newsfeed," << endl;
				cout << "(T) to make a tweet, (D) to delete account, or (L) to logout." << endl;
				cin.get(input2);
				input2 = toupper(input2);
				cin.clear();
				cin.ignore(numeric_limits <streamsize> ::max(), '\n');
				while (input2 != 'A' && input2 != 'B' && input2 != 'F' && input2 != 'M' && input2 != 'N' && input2 != 'T' && input2 != 'D' && input2 != 'L')
				{
					cout << "Invalid input." << endl;
					cout << "Input (A) to view followers, (B) to view who you're following," << endl;
					cout << "(F) to follow people, (M) view your tweets, (N) to view newsfeed," << endl;
					cout << "(T) to make a tweet, (D) to delete account, or (L) to logout." << endl;
					cin.get(input2);
					input2 = toupper(input2);
					cin.clear();
					cin.ignore(numeric_limits <streamsize> ::max(), '\n');
				}
				switch (input2)
				{
				case 'A':
					//case view followers
					//display who is following you
					break;
				case 'B':
					//case view following
					//display who you are following
					//option to unfollow people
					//asks for username and if you are sure
					//if sure, unfollow, if not go back to view following, Q to quit
					break;
				case 'F':
					//case follow people
					//display people you aren't following (is this possible?)  If not possible, show all people, but distinguish who you're already following
					//ask for username and if you're sure
					//if sure follow, if not go back to view all people, q to quit
					break;
				case 'M':
					//case view my tweets
					//cout my tweets
					//possible delete a tweet?  Edit a tweet?
					break;
				case 'N':
					//case view newsfeed
					//cout newsfeed
					//like a tweet?  comment on tweet?  retweet? (how do we input which tweet we want to act on?
					break;
				case 'D':
					cout << "Please enter your username, or 'exit' to quit." << endl;
					cin >> user;
					cin.clear();
					cin.ignore(numeric_limits <streamsize> ::max(), '\n');
					//check user against table
					if (false) //if not in table
					{
						cout << "I'm sorry, that username is not in our data banks.  Please try again." << endl;
						cin >> user;  //loop this
					}
					cout << "Please enter your password, or exit to quit." << endl;
					cin >> password;
					cin.clear();
					cin.ignore(numeric_limits <streamsize> ::max(), '\n');
					//check user against hash
					if (false) //if not in table
					{
						cout << "I'm sorry, that password is incorrect.  Please try again." << endl;
						cin >> password;  //loop this
					}
					inputDelete = '\0';
					cout << "Are you sure you wish to delete your account? (Y/N)" << endl;
					cin.get(inputDelete);
					inputDelete = toupper(inputDelete);
					cout << inputDelete << endl;
					cin.clear();
					cin.ignore(numeric_limits <streamsize> ::max(), '\n');
					while (inputDelete != 'Y' && inputDelete != 'N')
					{
						cout << "Invalid input." << endl;
						cout << "Are you sure you wish to delete your account? (Y/N)" << endl;
						cin.get(inputDelete);
						inputDelete = toupper(inputDelete);
						cin.clear();
						cin.ignore(numeric_limits <streamsize> ::max(), '\n');
					}
					if (inputDelete == 'Y')
					{
						//delete account
						cout << "Your account has successfully been deleted." << endl;
						cout << "Logging out.  Good bye!" << endl;
						menu1 = 1;
					}
					else if (inputDelete == 'N')
					{
						cout << "Canceling deletion." << endl;
					}
					break;
				case 'L':
					cout << "Logout successful." << endl;
					cout << "Good bye! See you again next time!" << endl;
					user = " ";
					password = " ";
					menu1 = 1;
					break;
				}
			} while (menu1 == 0);
			break;
		case 'N':
			cout << "Please enter your desired username, or exit to quit." << endl;
			cin >> user;
			cin.clear();
			cin.ignore(numeric_limits <streamsize> ::max(), '\n');
			//check if username is taken or is viable
			if (false) //if not viable
			{
				cout << "I'm sorry, that username is not available.  Please try again." << endl;
				cin >> user;  //loop this
			}
			cout << "Please enter your desired password, or exit to quit." << endl;
			cin >> password;
			cin.clear();
			cin.ignore(numeric_limits <streamsize> ::max(), '\n');
			//check if password is viable
			if (false) //if not viable
			{
				cout << "I'm sorry, that password is unavailable.  Please try again." << endl;
				cin >> password;  //loop this
			}
			cout << "Your account has been successfully created." << endl;
			user = " ";
			password = " ";
			break;
		case 'Q':
			cout << "Thank you for using Twatter.  Good bye!" << endl;
			menu = 1;
			break;
		}
	} while (menu == 0);
	return 0;
}

//lab46 input validation maybe 55