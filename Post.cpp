#include "Post.hpp"
using namespace std;

//Post::Post is inhertance from Post.hpp functions and classes
Post::Post(string title,string body,string user)
{
	this->title = title; //this is saying that paramters from Post.hpp equals to paremeters of this function
	this->body = body;
	this->user=user;
	this->times = time(0); //sets time to current calender time
	//getTimeStamp();
}

void Post::getTimeStamp() const
{
	cout << asctime(localtime(&this->times));
	
}

void Post::setTitle(const string &title) //setters are void beacuse they jsut change the variable
{
	this->title = title;
}

void Post::setBody(const string &body) //setters are void beacuse they jsut change the variable
{
	this->body = body;
}

string Post::getTitle() const //getters are string because they are returning what function needs
{
	return this->title;
}

string Post::getBody() const
{
	return this->body;
}

string Post::getUsername() const{
	return this->user;
}
void Post::setUsername(const string &user){
	this->user=user;
}

void Post::displayPost()
{
	cout << this->title << " posted at ";
	getTimeStamp();
	cout << this->body << endl;
}