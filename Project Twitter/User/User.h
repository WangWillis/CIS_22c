#include "BST.h"
#include "Queue.h"
#include "List.h"
#include "TweetContainer.h"
#include "Tweet.h"
#include <string>

using namespace std;

class User;

class User{
private:
	string userName, password;
	int followers, following;
	List <MyTweet> myTweets;
//	BinarySearchTree <UserTweet> NewsFeed;
//	BinarySearchTree <string> Followers;
//	BinarySearchTree <string> Following;

public:
	User();
	~User();
	User(string, string);

	void setUsername(string);
	void setPassword(string);
	void setFollowers(int);
	void setFollowing(int);

	string getUsername();
	bool matchPassword(string);
	int getFollowers();
	int getFollowing();

	//Looks like the hash table needs to be completed for this :)
	void addTweet(Tweet*); //Needs to be completed
	void deleteTweet(MyTweet); //Delete by tweet also need to delete from followers newsfeed but prob not in main

	//BinarySearchTree needs to be completed
	void displayFollowers();
	void displayFollowing();
	void displayNewsFeed();
	Queue toQueue();
};
