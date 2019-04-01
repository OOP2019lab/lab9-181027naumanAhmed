#include "Address_header.h"

Address::Address(char* house_Num, char* street_N, char * Cit, char* Cou)
{


	house_Number = new char[strlen(house_Num) + 1];
	strcpy_s(house_Number, (strlen(house_Num) + 1), house_Num);

	street_Name = new char[strlen(street_N) + 1];
	strcpy_s(street_Name, strlen(street_N) + 1, street_N);

	city = new char[strlen(Cit) + 1];
	strcpy_s(city, strlen(Cit) + 1, Cit);

	county = new char[strlen(Cou) + 1];
	strcpy_s(county, strlen(Cou) + 1, Cou);



}

Address::Address(const Address& obj)
{

	house_Number = new char[strlen(obj.house_Number) + 1];
	strcpy_s(house_Number, strlen(obj.house_Number) + 1, obj.house_Number);

	street_Name = new char[strlen(obj.street_Name) + 1];
	strcpy_s(street_Name, strlen(obj.street_Name) + 1, obj.street_Name);

	city = new char[strlen(obj.city) + 1];
	strcpy_s(city, strlen(obj.city) + 1, obj.city);

	county = new char[strlen(obj.county) + 1];
	strcpy_s(county, strlen(obj.county) + 1, obj.county);

}

ostream& operator<<(ostream& osObject, const Address& obj)
{

	osObject << "House Number: " << obj.house_Number << endl;
	osObject << "Street Name: " << obj.street_Name << endl;
	osObject << "City: " << obj.city << endl;
	osObject << "County: " << obj.county << endl;

	return osObject;
}

const Address& Address :: operator=(const Address& obj)
{
	house_Number = new char[strlen(obj.house_Number) + 1];
	strcpy_s(house_Number, strlen(obj.house_Number) + 1, obj.house_Number);

	street_Name = new char[strlen(obj.street_Name) + 1];
	strcpy_s(street_Name, strlen(obj.street_Name) + 1, obj.street_Name);

	city = new char[strlen(obj.city) + 1];
	strcpy_s(city, strlen(obj.city) + 1, obj.city);

	county = new char[strlen(obj.county) + 1];
	strcpy_s(county, strlen(obj.county) + 1, obj.county);

	return *this;

}

Address::~Address()
{
	delete[] house_Number;
	delete[] street_Name;
	delete[] city;
	delete[] county;
}