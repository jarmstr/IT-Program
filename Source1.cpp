#include "ItemInventory.h"


int main()
{

int inputID = 0;
int inputManuID;
char inputDescription[24] = "\0";
double inputPrice = 0;
double inputMarkUp = 0;
int inputCount = 0;

char NextChar = '\0';
char ContinuationFlag = 'Y';


  while(toupper(ContinuationFlag == 'Y'))
 {
	cout << endl;
	cout << "Enter The Product's Identification Number: " << endl;
	cin  >>  inputID;
	cout << "Enter The Product's Manufacturer's Identification Number: " << endl;
	cin  >>  inputManuID;
	cout << "Enter The Product's Wholesale Price: " << endl;
	cin  >>  inputPrice;
	cout << "Enter The Product's Mark-Up Percentage: " << endl;
	cin  >>  inputMarkup;
	cout << "Enter The Product's Description: " << endl;
	
	NextChar =  cin.peek();

	if( NextChar == '\n' )
	{
		cin.ignore;
	}
	cin.get( inputDescription, 24 );

	cout << "Enter The Quantity of the Product In Stock: " << endl;
	cin  >>  inputCount;

	ItemInventory InventoryItem( inputID,  inputManuID ,inputDescription, inputPrice, inputMarkup, inputCount);
	
	//inventoryItem.display();

	cout << "Office Supply Product Retail Price: $ " << inventoryItem.calculateMarkUp() << endl << endl;

	cout << endl
		 << "Do you wish to enter any more products"
		 << endl;
	cout <<  "Enter 'Y' or 'N' " << endl;

	cin >> ContinuationFlag;
  }


  return 0;
}












