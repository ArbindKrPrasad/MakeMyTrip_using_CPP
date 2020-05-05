#include<iostream>
#include<string>
#include <cctype>
#include <cstring>
using namespace std;

class MakeMyTrip{
	int vehicle;
	int dist;
	char fname[10], lname[10], email[30], addressLine1[15], district[15], state[15];
	string address, flightClass;
	int DD, MM, YY, numberOfPerson, flightClassSelection;


	public:
		void welcome(){
			cout<<"Welcome to MakeMyTrip.com \nThe place where you can find your all travel needs."<<endl;
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


			char bord1;
			char bord;
			char arri1;
			char arri;

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
			 bord= toupper(bord1);
			 cout<<endl<<"Arrival city: ";
			 cin>>arri1;
			 arri= toupper(arri1);

			 //ENTRY OF DATE
			 cout<<"\n\nEnter date: ";
			 cout<<"\tDD: ";
			 cin>>DD;
			 cout<<"\t\tMM: ";
			 cin>>MM;
			 cout<<"\t\tYY: ";
			 cin>>YY;

			 if(bord=='D'&&arri=='M'){
			 	cout<<del<<" to "<<mum<<endl;
			 	cout<<"Travel distance: "<<dtom<<" K.M."<<endl;
			 	dist=dtom;
			 }
			 else if(bord=='D'&&arri=='K'){
			 	cout<<del<<" to "<<kol<<endl;
			 	cout<<"Travel distance: "<<dtok<<" K.M."<<endl;
			 	dist=dtok;
			 }
			 else if(bord=='D'&&arri=='C'){
			 	cout<<del<<" to "<<che<<endl;
			 	cout<<"Travel distance: "<<dtoc<<"K.M."<<endl;
			 	dist=dtoc;
			 }
			 else if(bord=='M'&&arri=='D'){
			 	cout<<mum<<" to "<<del<<endl;
			 	cout<<"Travel distance: "<<dtom<<"K.M."<<endl;
			 	dist=dtom;
			 }
			 else if(bord=='M'&&arri=='K'){
			 	cout<<mum<<" to "<<kol<<endl;
			 	cout<<"Travel distance: "<<mtok<<"K.M."<<endl;
			 	dist=mtok;
			 }
			 else if(bord=='M'&&arri=='C'){
			 	cout<<mum<<" to "<<che<<endl;
			 	cout<<"Travel distance: "<<mtoc<<"K.M."<<endl;
			 	dist=mtoc;
			 }
			 else if(bord=='K'&&arri=='D'){
			 	cout<<kol<<" to "<<del<<endl;
			 	cout<<"Travel distance: "<<dtok<<"K.M."<<endl;
			 	dist= dtok;
			 }
			 else if(bord=='K'&&arri=='M'){
			 	cout<<kol<<" to "<<mum<<endl;
			 	cout<<"Travel distance: "<<mtok<<"K.M."<<endl;
			 	dist= mtok;
			 }
			 else if(bord=='K'&&arri=='C'){
			 	cout<<kol<<" to "<<che<<endl;
			 	cout<<"Travel distance: "<<ktoc<<"K.M."<<endl;
			 	dist= ktoc;
			 }
			 else if(bord=='C'&&arri=='D'){
			 	cout<<che<<" to "<<del<<endl;
			 	cout<<"Travel distance: "<<dtoc<<"K.M."<<endl;
			 	dist= dtoc;
			 }
			 else if(bord=='C'&&arri=='M'){
			 	cout<<che<<" to "<<mum<<endl;
			 	cout<<"Travel distance: "<<mtoc<<"K.M."<<endl;
			 	dist= mtoc;
			 }
			 else if(bord=='C'&&arri=='K'){
			 	cout<<che<<" to "<<kol<<endl;
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
			cout<<"1. Jet Airways Rs. "<<dist*10.0<<endl;
			cout<<"2. Air India   Rs. "<<dist*8.0<<endl;
			cout<<"3. IndiGo      Rs. "<<dist*5.0<<endl;
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
			cin>district;
			cout<<"State: ";
			cin>>state;

			cin>>numberOfPerson;
			cout<<"Select Class\n\t1 - Business\n\t2 - Economy";
			cin>>flightClassSelection;
			if(flightClassSelection==1){
				flightClass="Business";
			}
			else{
				flightClass="Economy";
			}



};

int main(){
	string conformation;



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
	}
}


