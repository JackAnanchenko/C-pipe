#pragma once
#include<string>
#include<vector>
using namespace std;
class Suspect
{
private:
	string name;
	string description;
	string location;
	string status;
	Suspect *alibi;
public:
	Suspect();
	Suspect(string name, string description, string location, string status, Suspect* alibi);

	//setters and getters
	void setName(string name);
	string getName();
	void setDescription(string description);
	string getDescription();
	void setLocation(string location);
	string getLocation();
	void setStatus(string status);
	string getStatus();
	void setAlibi(Suspect* alibi);
	Suspect* getAlibi();	
	~Suspect() {}
};

