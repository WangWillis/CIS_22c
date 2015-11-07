#include "TweetContainer.h"

UserTweet::UserTweet(){
	liked = false;
	reTweet = false;
	post = NULL;
	rePost = NULL;
}

UserTweet::UserTweet(Tweet* twt) : liked(false), reTweet(false){
	rePost = NULL;
	post = twt;
}

UserTweet::~UserTweet(){}

bool UserTweet::isLiked() const{
	return liked;
}

bool UserTweet::isReTweet() const{
	return reTweet;
}

Tweet* UserTweet::getTweet() const{
	return post->getPost();
}

void UserTweet::setPost(Tweet* tweet){
	post = tweet;
}

void UserTweet::changeLiked(){
	if(post){
		if(liked){
			post->unLike();
			liked = false;
		}else{
			post->like();
			liked = true;
		}
	}
}

Tweet* UserTweet::changeReTweet(const string user, const string tweet){
	if(post){
		if(reTweet){
			post->unReTweet();
			reTweet = false;
			return NULL;
		}else{
			post->reTweet();
			reTweet = true;
			rePost = new ReTweet(post, user, tweet);
			return rePost;
		}
	}
}

Tweet* UserTweet::getRePost(){
	return rePost;
}

void UserTweet::toString(){
	post->toString();
}

bool UserTweet::operator==(const UserTweet& lhs){
	if(post == lhs.getTweet()){
		return true;
	}
	return false;
}

MyTweet::MyTweet(Tweet* post) : UserTweet(post){}

MyTweet::~MyTweet(){delete post;}