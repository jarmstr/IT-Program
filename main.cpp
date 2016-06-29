// **************************************************************
// * ItemInventory Class File (ItemInventory Class Client Code) *															 *
// **************************************************************
//Name: Jonathan Armstrong
//Date: 2/15/16
//Class: IT 310 C++ Programmming
//Professor: Renee Weather
//Define: Inserts Item in an inventory using the ItemInventory Class
//Program: JArmstrongProgram1 
//due: Tues. 2/16/16



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

 
  // ******************************************************
  // * The "ContinuationFlag" is a control variable used  *
  // * in creating a loop. The loop mechanism that is	  *
  // * employed is a "do while" where the flag is checked *	
  // * at the end of the loop.							  *	
  // ******************************************************

 // *********************************************
 // *The "toupper"  function returns the upper  *
 // *case value of the of the arguement passed. *
 // *********************************************
  while(toupper(ContinuationFlag) == 'Y')
 {
	 // user input statements
	cout << endl; 
	cout << "Enter The Product's Identification Number: " << endl;
	cin  >>  inputID;
	cout << "Enter The Product's Manufacturer's Identification Number: " << endl;
	cin  >>  inputManuID;
	cout << "Enter The Product's Wholesale Price: " << endl;
	cin  >>  inputPrice;
	cout << "Enter The Product's Mark-Up Percentage: " << endl;
	cin  >>  inputMarkUp;
	cout << "Enter The Product's Description: " << endl; 
		
	// ***************************************************
	// * The "peek" function  returns the next character *
	// * without  extracting it from the input stream    *
	// ***************************************************
	NextChar =  cin.peek();

	// *************************************************************
	// * If the next character is a "\n" (the carriage 		       *												   
	// * return character), then the "ignore" function 	 		   *											   	
	// * is called. The "ignore" function, without input		   *	
	// * arguements, will cause the next character to be skipped   *			
	// *************************************************************
	if( NextChar == '\n' )
	{
		cin.ignore();
	}
	cin.get( inputDescription, 24 ); 

	// Input Quantity statement
	cout << "Enter The Quantity of the Product In Stock: " << endl;
	cin  >>  inputCount; 

	// ******************************* 
	// * Create InventoryItem Object *
	// *******************************
	ItemInventory InventoryItem( inputID,  inputManuID ,inputDescription, inputPrice, inputMarkUp, inputCount);
	
	//************************************************
	//* Display Information Concerning ItemInventory *
	//************************************************
	InventoryItem.display();


	cout << endl
		 << "Do you wish to enter any more products"
		 << endl;
	cout <<  "Enter 'Y' or 'N' " << endl;

	cin >> ContinuationFlag;
  }


  return 0;
}












