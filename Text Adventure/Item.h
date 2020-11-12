#pragma once
#include<string>
using namespace std;
class Item
{
private:
	string name;
	string location;
	string description;
	string status;
public:	
	Item();
	Item(string name, string location, string description, string status);
	void setName(string name);
	string getName();
	void setLocation(string location);
	string getLocation();
	void setDescription(string description);
	string getDescription();
	void setStatus(string status);
	void randomLocation();
	void bloodTrace(Item item);
};

