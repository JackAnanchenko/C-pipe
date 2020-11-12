#include "Suspect.h"
#include<string>
using namespace std;
Suspect::Suspect(): name(""), description(""), location(""), status(""), alibi(NULL){}
Suspect::Suspect(string name, string description, string location, string status, Suspect* alibi) {
	this->name = name;
	this->description = description;
	this->location = location;
	this->status = status;
	this->alibi = alibi;
}
string Suspect::getName() {
	return name;
}
void Suspect::setName(string name) {
	this->name = name;
}
void Suspect::setDescription(string description) {
	this->description = description;
}
string Suspect::getDescription() {
	return description;
}
void Suspect::setLocation(string location) {
	this->location = location;
}
string Suspect::getLocation() {
	return location;
}
void Suspect::setStatus(string status) {
	this->status = status;
}
string Suspect::getStatus() {
	return status;
}
void Suspect::setAlibi(Suspect* alibi) {
	this->alibi = alibi;
}
Suspect* Suspect::getAlibi() {
	return alibi;
}
Suspect::~Suspect() {}

