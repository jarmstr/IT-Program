#include "ItemInventory.h"

// ItemInventory contructors
ItemInventory::ItemInventory()
	{
	  IDnumber = 0;
	  manufacturerID = 0;
	  productD[24] = '\0';
	  price = 0;
	  markup = 0;
	  count = 0;
	}
	ItemInventory::ItemInventory( int IDnum, int manID , char charArray [] , double priceAssign , double markupVal , int itemCount )
	{
		IDnumber = IDnum;
		manufacturerID = manID;
		strcpy_s( productD, charArray );
		price = priceAssign;
		markup = markupVal;
		count = itemCount;
	}
	// returns the product's identification number
	int ItemInventory::getIDnumber() const 
	{
		return IDnumber; 
	}
	//  returns the manufacturer's identification number 
	int ItemInventory::getManufacturerID() const 
	{
		return manufacturerID;
	}
	// returns the product description 
	char* ItemInventory::getProductD() const 
	{
		return productD;

	}
	// returns thhe wholesale price
	double ItemInventory::getPrice() const 
	{
		return price;
	}
	// returns the markup percentage
	double ItemInventory::getMarkup() const  
	{
		return markup;
	}
	// returns quantity of items
	int ItemInventory::getCount() const 
	{
		return count;
	}
	// displays values in a table
	void ItemInventory::display() const 
	{
			
	char Separator[57] = "========================================================";
	char Divider[2] = "|";

	//Displays Company title
	cout << endl << Divider << Separator << Divider << endl;
	cout << Divider << setw(45) << setfill(' ') << "Office Supply Product Information" << setw(12) << Divider << endl;
	cout << Divider << Separator << Divider << endl;
	cout << Divider << Separator << Divider << endl;

	//Displays data of the item in inventory
	cout << Divider << setw(30) << setfill(' ') << "Identification Number:" << setw(11) << getIDnumber() << setw(16) << Divider << endl;
	cout << Divider << setw(21) << setfill(' ') << "Description: " << setw(32) << getProductD() << setw(4) << Divider << endl;
	cout << Divider << setw(21) << setfill(' ') << "Manufacturer:" << setw(20) << getManufacturerID() << setw(16) << Divider << endl;
	cout << Divider << setw(23) << setfill(' ') << "WholesalePrice:" << setw(19) << setprecision(2) << showpoint << fixed << getPrice() << setw(15) << Divider << endl;
	cout << Divider << setw(27) << setfill(' ') << "Mark-Up Percentage:" << setw(14) << setprecision(2) << showpoint << fixed << getMarkup() << setw(16) << Divider << endl;
	cout << Divider << setw(26) << setfill(' ') << "Quantity In Stock:" << setw(14) << getCount() << setw(17) << Divider << endl;
	cout << Divider << Separator << Divider << endl;
	cout << endl;


	cout << "Office Supply Product Retail Price: $ " << setprecision(2) << showpoint << fixed << calculateMarkup() << endl << endl;

	}
	double ItemInventory::calculateMarkup() const //calculates the retail price
	{
		double retailPrice;
	    retailPrice = (price *  markup) + price;
		return retailPrice;
	}
