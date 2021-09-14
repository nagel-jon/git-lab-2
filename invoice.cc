/*
 *        File: git-lab-program.cc
 *      Author: Jonathan Nagel
 *        Date: 9/2/21
 * Description: Invoice program Hw 1
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <string>
using namespace std;

const int SPRICE = 190;   // Constant price for ViewSonic monitor
const int VPRICE = 170 ; // Constant price for Samsung monitor
const float OHTAX = .07; // tax rate in Ohio
const float DISCOUNT_AMT = .05;  //discount amount


int main(int argc, char const *argv[]) {

// ask users for brand, quantity, and taxing info

string brand;
cout << "Enter a monitor type (s,v): " ;   // prompts user to input brand
cin >> brand;

string  brand_s = "s";              //changed character comparison to string comparison due to errors with char type
string  brand_v = "v";

int quan;
cout << "Enter a quantity: ";              // prompts user to input quality
cin >> quan;

string brand_string;
int brand_price;        //convert to string comparison
if (brand == brand_v){
    brand_price = VPRICE;
    brand_string = "ViewSonic";
}

if (brand == brand_s){
    brand_price = SPRICE;
    brand_string = "Samsung";
}

string residency;
cout << "Are you an Ohio Resident? \n (yes/no): ";        //prompts fro taxing info
cin >> residency;

string stringyes ("yes");          // strings for if statement comparison
string stringno ("no");

 double subtotal;
subtotal = brand_price * quan;


double tax;
 if (residency == stringyes){
     
     cout << "7% sales tax will be applied \n";
     tax = subtotal * OHTAX;

 }
 else{
     tax = 0;
 }


double discount = 0;
if (quan >= 3){
    discount =subtotal * DISCOUNT_AMT;
}


double total = subtotal + tax;

// display and format order summary

cout << setprecision(2);
cout << fixed;

cout << " Monitor brand: ";
cout << brand_string << endl;
cout << "Quantity: ";
cout << quan <<endl;
cout << "Discount: $";
cout << discount << endl;
cout << "Ohio Resident: ";
cout << residency << endl;
cout << "subtotal: $";
cout << subtotal <<endl;
cout << "Taxes: $";
cout << tax << endl;
cout << "============== \n";
cout << "total: $";
cout << total << endl;




return 0;


}// main