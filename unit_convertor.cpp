// creating unit convertor using if conditon
#include<iostream>
using  namespace std;
int main() {
	int a,b,c,i;
	float aa;
	cout << "Enter the no of Unit You want to convert: \n 1: MASS \t 2: TEMPERATURE \n 3: LENGTH \t 4: TIME " << endl << endl;
	cin >>i;
	if(i == 1) {// for mass
		cout << "Enter the no you have: \n 1:Milligram \t 2:Centigram \n 3:Gram \t 4:Kilogram \n 5:Tonne" << endl << endl;
		cin >> b;
		if(b == 1) {
			cout << "Enter the Conversion:\n 1:Milligram to Centigram \t 2:Milligram to Gram \n 3:Milligram to Kilogram \t 4:Milligram to Tonne" <<endl << endl;
			cin >> c;
			cout << "Enter the amount: ";
			cin >> aa;
			if(c == 1) {
				cout << "You have " << aa*0.1 << " Centigram";
			}
			if(c == 2) {
				cout << "You have " << aa*0.001 << " Gram";
			}
			if(c== 3) {
				cout << "You have " << aa*0.000001 << " Kilogram";
			}
			if(c== 4) {
				cout << "You have " << aa*0.000000001 << " Tonne";
			}
		}
		if(b == 2) {
			cout << "Enter the Conversion:\n 1:Centigram to Milligram \t 2:Centigram to Gram \n 3:Centigram to Kilogram \t 4:Centigram to Tonne" <<endl << endl;
			cin >> c;
			cout << "Enter the amount: ";
			cin >> aa;
			if(c == 1) {
				cout << "You have " << aa*10 << " Milligram";
			}
			if(c == 2) {
				cout << "You have " << aa*0.01 << " Gram";
			}
			if(c== 3) {
				cout << "You have " << aa*0.00001 << " Kilogram";
			}
			if(c== 4) {
				cout << "You have " << aa*0.00000001 << " Tonne";
			}
		}
		if( b == 3) {
			cout << "Enter the Conversion:\n 1:Gram to Milligram \t 2:Gram to Centigram \n 3:Gram to Kilogram \t 4:Gram to Tonne" << endl << endl;
			cin >> c;
			cout << "Enter the amount: ";
			cin >> aa;
			if(c == 1) {
				cout << "You have " << aa*1000 << " Milligram";
			}
			if(c == 2) {
				cout << "You have " << aa*100 << " Centigram";
			}
			if(c== 3) {
				cout << "You have " << aa*0.001 << " Kilogram";
			}
			if(c== 4) {
				cout << "You have " << aa*0.000001 << " Tonne";
			}
		}
		if( b == 4) {
			cout << "Enter the Conversion:\n 1:Kilogram to Milligram \t 2:Kilogram to Centigram \n 3:Kilogram to Gram \t 4:Kilogram to Tonne" << endl << endl;
			cin >> c;
			cout << "Enter the amount: ";
			cin >> aa;
			if(c == 1) {
				cout << "You have " << aa*1000000 << " Milligram";
			}
			if(c == 2) {
				cout << "You have " << aa*100000 << " Centigram";
			}
			if(c== 3) {
				cout << "You have " << aa*1000 << " Gram";
			}
			if(c== 4) {
				cout << "You have " << aa*0.001 << " Tonne";
			}
		}
		if( b == 5) {
			cout << "Enter the Conversion:\n 1:Tonne to Milligram \t 2:Tonne to Centigram \n 3:Tonne to Gram \t 4:Tonne to Kilogram" <<endl << endl;
			cin >> c;
			cout << "Enter the amount: ";
			cin >> aa;
			if(c == 1) {
				cout << "You have " << aa*1000000000 << " Milligram";
			}
			if(c == 2) {
				cout << "You have " << aa*1000000 << " Centigram";
			}
			if(c== 3) {
				cout << "You have " << aa*1000000 << " Gram";
			}
			if(c== 4) {
				cout << "You have " << aa*1000 << " Kilogram";
			}
		}
	}
	if (i == 2) {// for temperature
		cout << "Enter the no you have: \n 1:Celsius \t 2:Fahrenheit \t 3:Kelvin " << endl << endl;
		cin >> b;
		if(b==1) {
			cout << "Enter the Conversion:\n 1:Celsius to Fahrenheit \t 2:Celsius to Kelvin " <<endl << endl;
			cin >> c;
			cout << "Enter the amount: ";
			cin >> aa;
			if(c==1){
				cout<< "You have " << ((aa*9)/5) + 32 << " Fahrecheit";
			}
			if(c==2){
				cout<< "You have " << aa + 273.15 << " Kelvin";
			}
		}
		if(b==2) {
			cout << "Enter the Conversion:\n 1: Fahrenheit to Celsius \t 2:Fahrenheit to Kelvin " <<endl << endl;
			cin >> c;
			cout << "Enter the amount: ";
			cin >> aa;
			if(c==1){
				cout<< "You have " << ((aa-32)*5)/9 << " Fahrecheit";
			}
			if(c==2){
				cout<< "You have " << ((aa-32)*5)/9 + 273.15 << " Kelvin";
			}
		}
		if(b==3) {
			cout << "Enter the Conversion:\n 1: Kelvin to Celsius \t 2:Kelvin to Fahrenheit  " <<endl << endl;
			cin >> c;
			cout << "Enter the amount: ";
			cin >> aa;
			if(c==1){
				cout<< "You have " << aa - 273.15 << " Fahrecheit";
			}
			if(c==2){
				cout<< "You have " << ((aa-273.15)*9)/5 + 32 << " Kelvin";
			}
		}
	}
	if(i == 3) { // for lenght
		cout << "Enter the no you have: \n 1:Millimetre \t 2:Centimetre \n 3:inch \t 4:foot \n 5:metre \t 6:kilometre"  << endl << endl;
		cin >> b;
		if(b == 1) {
			cout << "Enter the Conversion:\n 1:Millimetre to Centimetre \t 2:Millimetre to inch \n 3:Millmetre to foot \t 4:Millimetre to metre \n 5:Millimetre to kilometre" <<endl << endl;
			cin >> c;
			cout << "Enter the length: ";
			cin >> aa;
			if(c == 1) {
				cout << "You have " << aa*0.1 << " Centimetre";
			}
			if(c == 2) {
				cout << "You have " << aa*0.0393701 << " inch";
			}
			if(c== 3) {
				cout << "You have " << aa*0.00328084 << " foot";
			}
			if(c== 4) {
				cout << "You have " << aa*0.001 << " metre";
			}
			if(c== 5) {
				cout << "You have " << aa*0.000001 << " kilometre";
			}
		}	
		if(b == 2) {
			cout << "Enter the Conversion:\n 1:Centimetre to Millimetre  \t 2:Centimetre to inch \n 3:Centimetre to foot \t 4:Centimetre to metre \n 5:Centimetre to kilometre" <<endl << endl;
			cin >> c;
			cout << "Enter the length: ";
			cin >> aa;
			if(c == 1) {
				cout << "You have " << aa*10 << " Millimetre";
			}
			if(c == 2) {
				cout << "You have " << aa*0.393701 << " inch";
			}
			if(c== 3) {
				cout << "You have " << aa*0.0328084 << " foot";
			}
			if(c== 4) {
				cout << "You have " << aa*0.01 << " metre";
			}
			if(c== 5) {
				cout << "You have " << aa*0.00001 << " kilometre";
			}
		}
		if(b == 3) {
			cout << "Enter the Conversion:\n 1:inch to Millimetre  \t 2:inch to Centimetre \n 3:inch to foot \t 4:inch to metre \n 5:inch to kilometre" <<endl << endl;
			cin >> c;
			cout << "Enter the length: ";
			cin >> aa;
			if(c == 1) {
				cout << "You have " << aa*25.4 << " Millimetre";
			}
			if(c == 2) {
				cout << "You have " << aa*2.54 << " Centimetre";
			}
			if(c== 3) {
				cout << "You have " << aa*0.0833333 << " foot";
			}
			if(c== 4) {
				cout << "You have " << aa*0.0254 << " metre";
			}
			if(c== 5) {
				cout << "You have " << aa*0.0000254 << " kilometre";
			}
		}
		if(b == 4) {
			cout << "Enter the Conversion:\n 1:Foot to Millimetre  \t 2:Foot to Centimetre \n 3:Foot to inch \t 4:Foot to metre \n 5:Foot to kilometre" <<endl << endl;
			cin >> c;
			cout << "Enter the lenth: ";
			cin >> aa;
			if(c == 1) {
				cout << "You have " << aa*304.8 << " Millimetre";
			}
			if(c == 2) {
				cout << "You have " << aa*30.48 << " Centimetre";
			}
			if(c== 3) {
				cout << "You have " << aa*12 << " inch";
			}
			if(c== 4) {
				cout << "You have " << aa*0.3048 << " Metre";
			}
			if(c== 5) {
				cout << "You have " << aa*0.0003048 << " kilometre";
			}
		}
		if(b == 5) {
			cout << "Enter the Conversion:\n 1:metre to Millimetre  \t 2:metre to Centimetre \n 3:metre to inch \t 4:metre to foot \n 5:metre to kilometre" <<endl << endl;
			cin >> c;
			cout << "Enter the lenth: ";
			cin >> aa;
			if(c == 1) {
				cout << "You have " << aa*1000 << " Millimetre";
			}
			if(c == 2) {
				cout << "You have " << aa*100 << " Centimetre";
			}
			if(c== 3) {
				cout << "You have " << aa*39.3701 << " inch";
			}
			if(c== 4) {
				cout << "You have " << aa*3.28084 << " foot";
			}
			if(c== 5) {
				cout << "You have " << aa*0.001 << " kilometre";
			}
		}
		if(b == 6) {
			cout << "Enter the Conversion:\n 1:kilometre to Millimetre  \t 2:kilometre to Centimetre \n 3:kilometre to inch \t 4:kilometre to foot \n 5:kilometre to metre" <<endl << endl;
			cin >> c;
			cout << "Enter the length: ";
			cin >> aa;
			if(c == 1) {
				cout << "You have " << aa*1000000 << " Millimetre";
			}
			if(c == 2) {
				cout << "You have " << aa*100000 << " Centimetre";
			}
			if(c== 3) {
				cout << "You have " << aa*39370.1 << " inch";
			}
			if(c== 4) {
				cout << "You have " << aa*3280.84 << " foot";
			}
			if(c== 5) {
				cout << "You have " << aa*1000 << " Metre";
			}
		}
	}
	if(i == 4) { // for time
		cout << "Enter the no you have: \n 1:Millisecond \t 2:Second \n 3:Minute \t 4:Hour \n 5:Day" << endl << endl;
		cin >> b;
		if(b == 1) {
			cout << "Enter the Conversion:\n 1:Millisecond to second \t 2:Millisecond to Minute \n 3:Millisecound to Hour \t 4:Millisecound to Day" <<endl << endl;
			cin >> c;
			cout << "Enter the amount: ";
			cin >> aa;
			if(c == 1) {
				cout << "You have " << aa*0.001 << " Second";
			}
			if(c == 2) {
				cout << "You have " << aa*0.0000016667 << " Minute";
			}
			if(c== 3) {
				cout << "You have " << aa*0.00000027778 << " Hours";
			}
			if(c== 4) {
				cout << "You have " << aa*0.000000011574 << " Day";
			}
		}
		if(b == 2) {
			cout << "Enter the Conversion:\n 1:second to Millisecond \t 2:second to Minute \n 3:second to Hour \t 4:second to Day" <<endl << endl;
			cin >> c;
			cout << "Enter the amount: ";
			cin >> aa;
			if(c == 1) {
				cout << "You have " << aa*1000 << " Millisecond";
			}
			if(c == 2) {
				cout << "You have " << aa*0.016667 << " Minute";
			}
			if(c== 3) {
				cout << "You have " << aa*0.00027778 << " Hour";
			}
			if(c== 4) {
				cout << "You have " << aa*0.000011574 << " Day";
			}
		}
		if( b == 3) {
			cout << "Enter the Conversion:\n 1:Minute to Millisecond \t 2:Minute to second \n 3:Minute to Hour \t 4:Minute to Day" << endl << endl;
			cin >> c;
			cout << "Enter the amount: ";
			cin >> aa;
			if(c == 1) {
				cout << "You have " << aa*60000 << " Millisecond";
			}                                   
			if(c == 2) {
				cout << "You have " << aa*60 << " second";
			}                                
			if(c== 3) {
				cout << "You have " << aa*0.0166667 << " Hour";
			}                                   
			if(c== 4) {
				cout << "You have " << aa*0.000694444 << " Day";
			}
		}
		 if(b==4){
			cout << "Enter the Conversion:\n 1:Hour to Millisecond \t 2:Hour to second \n 3:Hour to Minute \t 4:Hour to Day" << endl << endl;
			cin >> c;                                                                                                   
			cout << "Enter the amount: ";
			cin >> aa;
			if(c == 1) {
				cout << "You have " << aa*3600000 << " Millisecond";
			}                                   
			if(c == 2) {
				cout << "You have " << aa*3600 << " second";
			}                                
			if(c== 3) {
				cout << "You have " << aa*60 << " Minute";
			}                                   
			if(c== 4) {
				cout << "You have " << aa*0.041667 << " Day";
			}                                  
		}
		if( b == 5) {
			cout << "Enter the Conversion:\n 1:Day to Millisecond \t 2:Day to second \n 3:Day to Hour \t 4:Day to Hour" <<endl << endl;
			cin >> c;
			cout << "Enter the amount: ";
			cin >> aa;
			if(c == 1) {
				cout << "You have " << aa*86400000 << " Millisecond";
			}
			if(c == 2) {
				cout << "You have " << aa*86400 << " second";
			}
			if(c== 3) {
				cout << "You have " << aa*1440 << " Hour";
			}
			if(c== 4) {
				cout << "You have " << aa*24 << " Hour";
			}
		}
	}
	return 0;
}