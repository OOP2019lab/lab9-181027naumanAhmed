#include "Projects_header.h"

Project::Project(char* n, int budget, int duration)

{
	name = new char[strlen(n) + 1];
	strcpy_s(name, strlen(n) + 1, n);

	this->budget = budget;
	this->duration = duration;
}


Project::Project(const Project& obj)
: budget(obj.budget), duration(obj.duration)
{
	name = new char[strlen(obj.name) + 1];
	strcpy_s(name, strlen(obj.name) + 1, obj.name);
}

ostream& operator<<(ostream& osObject, const Project& proj)
{

	osObject << "Name: " << proj.name << endl;
	osObject << "Budget: " << proj.budget << endl;
	osObject << "Duration: " << proj.duration << endl;

	return osObject;

}

const Project& Project:: operator=(const Project& other)

{
	name = new char[strlen(other.name) + 1];
	strcpy_s(name, strlen(other.name) + 1, other.name);

	budget = other.budget;
	duration = other.duration;

	return *this;
}

void Project::setBudget(int b)
{
	budget = b;
}

Project::~Project()
{
	delete[] name;
}