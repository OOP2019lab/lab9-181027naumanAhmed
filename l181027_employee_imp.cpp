
#include "Address_header.h"
#include "Employee_header.h"

Employee::Employee(char* name, const Address& a1)
{

	emp_name = new char[strlen(name) + 1];
	strcpy_s(emp_name, strlen(name) + 1, name);

	this->a1 = &a1;

	for (int i = 0; i < 2; i++)
	{
		this->p[i] = nullptr;
	}

}

Employee::Employee(const Employee& obj)
{
	emp_name = new char[strlen(obj.emp_name) + 1];
	strcpy_s(emp_name, strlen(obj.emp_name) + 1, obj.emp_name);

	this->a1 = obj.a1;

	for (int i = 0; i <2; i++)
	{
		this->p[i] = obj.p[i];
	}
}

ostream& operator<<(ostream& osObject, const Employee& obj)
{

	osObject << "Name of Employee: " << obj.emp_name << endl;
	osObject << "Address of Employee: " << *obj.a1 << endl;
	osObject << "Projects of Employee: ";

	for (int i = 0; i < 2; i++)
	{
		osObject << endl << *obj.p[i];
	}

	return osObject;
}

const Employee& Employee :: operator=(const Employee& obj)
{

	if (this != &obj)
	{
		emp_name = new char[strlen(obj.emp_name) + 1];
		strcpy_s(emp_name, strlen(obj.emp_name) + 1, obj.emp_name);

		this->a1 = obj.a1;

		for (int i = 0; i <2; i++)
		{
			this->p[i] = obj.p[i];
		}

	}

	return *this;
}


void Employee::addProject(Project const* ptr)
{
	for (int i = 0; i < 2; i++)
	{
		if (this->p[i] == nullptr)
		{
			this->p[i] = ptr;
			break;
		}
	}
}

void Employee::removeProject(Project const* ptr)
{
	for (int i = 0; i < 2; i++)
	{
		if (p[i] == ptr)
		{
			p[i] = nullptr;
		}
	}
}

Employee::~Employee()
{
	delete a1;
	delete[] emp_name;
}
