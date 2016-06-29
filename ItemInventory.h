// ***************************************
// * SPECIFACTION FILE (ItemInventory.h) *
// ***************************************
#ifndef ITEMINVENTORY_H
#define ITEMINVENTORY_H

#include <iostream>
#include <iomanip>


using namespace std;

class ItemInventory
{
private:
	int IDnumber; // Identification number
	int manufacturerID; //manunfacturer's Identification number
	mutable char productD[24]; // product description in a char array
	double price; // wholesale price
	double markup; //markup percentage
	int count;   // item quantity

public:
	// ItemInventory contructors
	ItemInventory(); 
	ItemInventory( int , int , char [] , double, double , int );
	
	// returns the product's identification number
	int getIDnumber() const;
	//  return the manufacturer's identification number 
	int getManufacturerID() const;
	// returns the product description 
	char* getProductD() const;
	// returns the wholesale price
	double getPrice() const;
	// returns the markup percentage 
	double getMarkup() const;
	// returns quantity of items
	int getCount() const;
	//displays values in a table
	void display() const;
	//calculates the retail price
	double calculateMarkup() const;
};



#endif
