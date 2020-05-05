#include<iostream>
#include<string>
#include <cctype>
#include <cstring>
#include <stdlib.h>
using namespace std;

class MakeMyTrip{
	int vehicle;
	int dist;
	char fname[10], lname[10], email[30];
	string address, flightClass, district, flightClassSelection, addressLine1, state, flightName;
	int DD, MM, YY, numberOfPerson, flightSelection;
	
	float fare;
	
	string bord1, arri1;
	char bord, arri, exitInput;


	public:
		void welcome(){
			cout<<"---------------------------------------------- WELCOME TO MakeMyTrip.com ---------------------------------------------- "<<endl;
			cout<<"--------------------------------- The place where you can find your all travel needs. ---------------------------------"<<endl<<endl;
		}
		void selectVehicle(){
			cout<<"How do you want to reach your destination..."<<endl<<endl;
			cout<<"Please enter: "<<endl;
			cout<<"1 for Flight"<<endl;
			cout<<"2 for Train"<<endl;
			cout<<"3 for Bus"<<endl<<endl;

			cout<<"Choose the option: ";
			cin>>vehicle;
		}
		void flight(){

			int dtom= 1409;
			int dtok= 1307;
			int dtoc= 2184;
			int mtok= 1660;
			int mtoc= 1028;
			int ktoc= 1366;

			char del[]="Indira Gandhi International Airport, New Delhi";
			char mum[]="Chhatrapati Shivaji International Airport, Mumbai";
			char kol[]="Netaji Subhash Chandra Bose International Airport, Kolkata";
			char che[]="Chennai International Airport, Chennai";

			 cout<<"Please Enter: "<<endl;
			 cout<<"D for Delhi"<<endl;
			 cout<<"M for Mumbai"<<endl;
			 cout<<"K for Kolkata"<<endl;
			 cout<<"C for Chennai"<<endl<<endl;
			 cout<<"Bording City: ";
			 cin>>bord1;
			 bord= toupper(bord1[0]);
			 while(bord!='D'&&bord!='M'&&bord!='K'&&bord!='C'){
			 	cout<<"Please enter available city, ";
			 	cout<<"Bording City: ";
			 	cin>>bord1;
			 	bord= toupper(bord1[0]);
			 }
			 cout<<endl<<"Arrival city: ";
			 cin>>arri1;
			 arri= toupper(arri1[0]);
			  while(arri!='D'&&arri!='M'&&arri!='K'&&arri!='C'){
			 	cout<<"Please enter available city, ";
			 	cout<<endl<<"Arrival city: ";
			 	cin>>arri1;
			 	arri= toupper(arri1[0]);
			 }

			 //ENTRY OF DATE
			 cout<<"\nEnter date: ";
			 cout<<"\tDD: ";
			 cin>>DD;
			 while(DD<01||DD>31){
			 	cout<<"Please enter a valid day: ";
			 	cin>>DD;
			 }
			 cout<<"\t\tMM: ";
			 cin>>MM;
			 while(MM<01||MM>12){
			 	cout<<"Please enter a valid month: ";
			 	cin>>MM;
			 }
			 cout<<"\t\tYY: ";
			 cin>>YY;
			 while(YY<2019||YY>2020){
			 	cout<<"Please enter a valid year: ";
			 	cin>>YY;
			 }

			 if(bord=='D'&&arri=='M'){
			 	cout<<"From "<<del<<" to "<<mum<<endl;
			 	cout<<"Travel distance: "<<dtom<<" K.M."<<endl;
			 	dist=dtom;
			 }
			 else if(bord=='D'&&arri=='K'){
			 	cout<<"From "<<del<<" to "<<kol<<endl;
			 	cout<<"Travel distance: "<<dtok<<" K.M."<<endl;
			 	dist=dtok;
			 }
			 else if(bord=='D'&&arri=='C'){
			 	cout<<"From "<<del<<" to "<<che<<endl;
			 	cout<<"Travel distance: "<<dtoc<<"K.M."<<endl;
			 	dist=dtoc;
			 }
			 else if(bord=='M'&&arri=='D'){
			 	cout<<"From "<<mum<<" to "<<del<<endl;
			 	cout<<"Travel distance: "<<dtom<<"K.M."<<endl;
			 	dist=dtom;
			 }
			 else if(bord=='M'&&arri=='K'){
			 	cout<<"From "<<mum<<" to "<<kol<<endl;
			 	cout<<"Travel distance: "<<mtok<<"K.M."<<endl;
			 	dist=mtok;
			 }
			 else if(bord=='M'&&arri=='C'){
			 	cout<<"From "<<mum<<" to "<<che<<endl;
			 	cout<<"Travel distance: "<<mtoc<<"K.M."<<endl;
			 	dist=mtoc;
			 }
			 else if(bord=='K'&&arri=='D'){
			 	cout<<"From "<<kol<<" to "<<del<<endl;
			 	cout<<"Travel distance: "<<dtok<<"K.M."<<endl;
			 	dist= dtok;
			 }
			 else if(bord=='K'&&arri=='M'){
			 	cout<<"From "<<kol<<" to "<<mum<<endl;
			 	cout<<"Travel distance: "<<mtok<<"K.M."<<endl;
			 	dist= mtok;
			 }
			 else if(bord=='K'&&arri=='C'){
			 	cout<<"From "<<kol<<" to "<<che<<endl;
			 	cout<<"Travel distance: "<<ktoc<<"K.M."<<endl;
			 	dist= ktoc;
			 }
			 else if(bord=='C'&&arri=='D'){
			 	cout<<
				 "From "<<che<<" to "<<del<<endl;
			 	cout<<"Travel distance: "<<dtoc<<"K.M."<<endl;
			 	dist= dtoc;
			 }
			 else if(bord=='C'&&arri=='M'){
			 	cout<<"From "<<che<<" to "<<mum<<endl;
			 	cout<<"Travel distance: "<<mtoc<<"K.M."<<endl;
			 	dist= mtoc;
			 }
			 else if(bord=='C'&&arri=='K'){
			 	cout<<"From"<<che<<" to "<<kol<<endl;
			 	cout<<"Travel distance: "<<ktoc<<"K.M."<<endl;
			 	dist= ktoc;
			 }
			 else{
			 	cout<<"Please enter a valid option and try again.... :)"<<endl<<endl;
			 }

		}

		void price(){
			cout<<"Date: "<<DD<<"/"<<MM<<"/"<<YY<<endl<<endl;
			cout<<"Prices"<<endl;
			cout<<"1 - Jet Airways Rs. "<<dist*10.0<<endl;
			cout<<"2 - Air India   Rs. "<<dist*8.0<<endl;
			cout<<"3 - IndiGo      Rs. "<<dist*5.0<<endl;
		}
		void ticketbooking(){
			cout<<"Enter First name: ";
			cin>>fname;
			cout<<"Enter last name: ";
			cin>>lname;
			cout<<"Email: ";
			cin>>email;
			cout<<"Enter your address\n";
			cout<<"Address line 1: ";
			cin>>addressLine1;
			cout<<"District: ";
			cin>>district;
			cout<<"State: ";
			cin>>state;
			cout<<"Number of persons: ";
			cin>>numberOfPerson;
			cout<<"Enter Class\n\tB - Business\tor\tE - Economy: ";
			cin>>flightClassSelection;
			if(flightClassSelection[0]=='B'||flightClassSelection[0]=='b'){
				flightClass="Business";
			}
			else{
				flightClass="Economy";
			}
			
			cout<<"Select Flight"<<endl;
			price();
			cin>>flightSelection;
			while(flightSelection!=1&&flightSelection!=2&&flightSelection!=3){
				cout<<"Please select a valid option:\n\t1 for Jet Airways\n\t2 for Air India\n\t3 for IndiGo\n";
				cin>>flightSelection;
			}
			if(flightSelection==1||flightSelection==2||flightSelection==3){
				if(flightSelection==1){
					flightName="Jet Airways";
					fare=dist*10;
				}
				if(flightSelection==2){
					flightName="Air India";
					fare=dist*8;
				}
				if(flightSelection==1){
					flightName="IndiGo";
					fare=dist*5;
				}
			}
			
			
		}
		void viewFlightTicket(){
			cout<<"---------------------------------------------------------------------------------------------------"<<endl;
			cout<<"|                                                                                                 |"<<endl;
			cout<<"|                                                                                                 |"<<endl;
			cout<<"|                                                                                                 |"<<endl;
			cout<<"|                                                                                                 |"<<endl;
			cout<<"|                                                                                                 |"<<endl;
			cout<<"|                                                                                                 |"<<endl;
			cout<<"|                                                                                                 |"<<endl;
			cout<<"|                                                                                                 |"<<endl;
			cout<<"|                                                                                                 |"<<endl;
			cout<<"|                                                                                                 |"<<endl;
			cout<<"|                                                                                                 |"<<endl;
			cout<<"---------------------------------------------------------------------------------------------------"<<endl;
			                                            
		}
		



};

int main(){
	string conformation;
	char exitInput;



	MakeMyTrip a;
	a.welcome();
	//a.selectVehicle();
	a.flight();
	a.price();
	cout<<"Do you want to continue with the booking...  ";
	cin>>conformation;
	char conf=toupper(conformation[0]);
	while(conf!='Y'&&conf!='N'){
		cout<<"Please provide an input... 'Yes' or 'No': ";
		cin>>conformation;
		conf=toupper(conformation[0]);
	}

	if(conf=='Y'){
  				  a.ticketbooking();
 	}
	else if(conf!='Y'){
		cout<<"Thank you for visiting makeMyTrip"<<endl;
		cout<<"Press 'Enter' to exit... ";
		exit(1011);
	}
	a.viewFlightTicket();
}

