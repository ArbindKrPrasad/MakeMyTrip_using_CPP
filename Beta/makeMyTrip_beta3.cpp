#include <iostream>
#include <string>
#include <stdlib.h>
#include <iomanip>
using namespace std;

class MakeMyTrip{
	int vehicle;
	int dist;
	string fname, fname1, lname1, lname, email, gender1;
	string flightClass, flightClassSelection, flightName, strPhoneNumber, phNo;
	int DD, MM, YY, flightSelection, age,gst;
	float fare;
	
	string bord1, arri1, from, to, confReply1;
	char bord, arri, exitInput, gender, confReply,exitCode;


	public:
		void welcome(){
			cout<<"---------------------------------------------- WELCOME TO MakeMyTrip.com ----------------------------------------------"<<endl;
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
			 	cout<<"Please enter a valid day: "<<endl;
			 	cout<<"\t\tDD: ";
			 	cin>>DD;
			 }
			 cout<<"\t\tMM: ";
			 cin>>MM;
			 while(MM<01||MM>12){
			 	cout<<"Please enter a valid month: "<<endl;
			 	cout<<"\t\tMM: ";
			 	cin>>MM;
			 }
			 cout<<"\t      YYYY: 20";
			 cin>>YY;
			 while(YY<19||YY>20){
			 	cout<<"Please enter a valid year: "<<endl;
			 	cout<<"\t     YYYY: 20";
			 	cin>>YY;
			 }
			 cout<<"\n\n";
			 if(bord=='D'&&arri=='M'){
			 	cout<<"From "<<del<<" to "<<mum<<endl;
			 	cout<<"Travel distance: "<<dtom<<" K.M."<<endl;
			 	dist=dtom;
			 	from="DELHI";
			 	to="MUMBAI";
			 }
			 else if(bord=='D'&&arri=='K'){
			 	cout<<"From "<<del<<" to "<<kol<<endl;
			 	cout<<"Travel distance: "<<dtok<<" K.M."<<endl;
			 	dist=dtok;
			 	from="DELHI";
			 	to="KOLKATA";
			 }
			 else if(bord=='D'&&arri=='C'){
			 	cout<<"From "<<del<<" to "<<che<<endl;
			 	cout<<"Travel distance: "<<dtoc<<"K.M."<<endl;
			 	dist=dtoc;
			 	from="DELHI";
			 	to="CHENNAI";
			 }
			 else if(bord=='M'&&arri=='D'){
			 	cout<<"From "<<mum<<" to "<<del<<endl;
			 	cout<<"Travel distance: "<<dtom<<"K.M."<<endl;
			 	dist=dtom;
			 	from="MUMBAI";
			 	to="DELHI";
			 }
			 else if(bord=='M'&&arri=='K'){
			 	cout<<"From "<<mum<<" to "<<kol<<endl;
			 	cout<<"Travel distance: "<<mtok<<"K.M."<<endl;
			 	dist=mtok;
			 	from="MUMBAI";
			 	to="KOLKATA";
			 }
			 else if(bord=='M'&&arri=='C'){
			 	cout<<"From "<<mum<<" to "<<che<<endl;
			 	cout<<"Travel distance: "<<mtoc<<"K.M."<<endl;
			 	dist=mtoc;
			 	from="MUMBAI";
			 	to="CHENNAI";
			 }
			 else if(bord=='K'&&arri=='D'){
			 	cout<<"From "<<kol<<" to "<<del<<endl;
			 	cout<<"Travel distance: "<<dtok<<"K.M."<<endl;
			 	dist= dtok;
			 	from="KOLKATA";
			 	to="DELHI";
			 }
			 else if(bord=='K'&&arri=='M'){
			 	cout<<"From "<<kol<<" to "<<mum<<endl;
			 	cout<<"Travel distance: "<<mtok<<"K.M."<<endl;
			 	dist= mtok;
			 	from="KOLKATA";
			 	to="MUMBAI";
			 }
			 else if(bord=='K'&&arri=='C'){
			 	cout<<"From "<<kol<<" to "<<che<<endl;
			 	cout<<"Travel distance: "<<ktoc<<"K.M."<<endl;
			 	dist= ktoc;
			 	from="KOLKATA";
			 	to="CHENNAI";
			 }
			 else if(bord=='C'&&arri=='D'){
			 	cout<<
				 "From "<<che<<" to "<<del<<endl;
			 	cout<<"Travel distance: "<<dtoc<<"K.M."<<endl;
			 	dist= dtoc;
			 	from="CHENNAI";
			 	to="DELHI";
			 }
			 else if(bord=='C'&&arri=='M'){
			 	cout<<"From "<<che<<" to "<<mum<<endl;
			 	cout<<"Travel distance: "<<mtoc<<"K.M."<<endl;
			 	dist= mtoc;
			 	from="CHENNAI";
			 	to="MUMBAI";
			 }
			 else if(bord=='C'&&arri=='K'){
			 	cout<<"From "<<che<<" to "<<kol<<endl;
			 	cout<<"Travel distance: "<<ktoc<<"K.M."<<endl;
			 	dist= ktoc;
			 	from="CHENNAI";
			 	to="KOLKATA";
			 }
			 else{
			 	cout<<"Please enter a valid option and try again.... :)"<<endl<<endl;
			 }

		}
		
		
		void GST(){
			gst=.06*fare;
		}

		void viewPrice(){
			cout<<"Date: "<<DD<<"/"<<MM<<"/"<<YY<<endl;
			cout<<"Prices: "<<endl;
			cout<<"\tJet Airways Rs. "<<dist*10.0<<endl;
			cout<<"\tAir India   Rs. "<<dist*8.0<<endl;
			cout<<"\tIndiGo      Rs. "<<dist*5.0<<endl;
		}
		 	void showPrice(){
	 		cout<<"\n\nSelect Flight  (Enter 1 or 2 or 3)"<<endl;
			cout<<"1 - Jet Airways        Rs. "<<dist*10.0<<" + "<<.06*(dist*10)<<"(GST)"<<endl;
			cout<<"2 - Air India          Rs. "<<dist*8.0<<" + "<<.06*(dist*8)<<"(GST)"<<endl;
			cout<<"3 - IndiGo             Rs. "<<dist*5.0<<" + "<<.06*(dist*5)<<"(GST)"<<endl;
		}
		/*void phoneNumber(){
			 cout<<"\tPhone no.: ";
			 cin>>strPhoneNumber;
			 if(strPhoneNumber.length()==10){
			 stringstream mobNo(strPhoneNumber);
			 mobNo>>llPhoneNumber;
			 if(llPhoneNumber>9999999999&&llPhoneNumber<1000000000){
				mobileNumber=llPhoneNumber;
				}
				else{
					cout<<"Please Enter a valid 10-digit Mobile Number\n";
					phoneNumber();
				}
					
				}
				else{
					cout<<"Please Enter a valid 10-digit Mobile Number\n";
					phoneNumber();
				}
			}*/
		void ticketbooking(){
			cout<<"\n\nEnter  First name: ";
			cin>>fname;
			cout<<"\tLast name: ";
			cin>>lname;
			cout<<"\t      Age: ";
			cin>>age;
			while(age<10||age>99){
				cout<<"Please enter a age between 10 to 99"<<endl;
				cout<<"\t      Age: ";
				cin>>age;
			}
			cout<<"\t   Gender: ";
			cin>>gender1;
			gender=toupper(gender1[0]);
			while(gender!='M'&&gender!='F'){
				cout<<"\tPlease Enter Male or Female...";
				cout<<"\t   Gender: ";
				cin>>gender1;
				gender=toupper(gender1[0]);
			}
			
			cout<<"\t    Email: ";
			cin>>email;
			cout<<"\tMobile No.: ";
			cin>>phNo;
			while(phNo.length()!=10)
			{
				cout<<"Please enter a valid 10-digit Mobile Number: "<<endl;
				cout<<"\tMobile No.: ";
				cin>>phNo;
			}
			
			
			cout<<"\n\nSelect Flight Class\n\tB - Business\tor\tE - Economy: \n\t\tReply (B/E): ";
			cin>>flightClassSelection;
			if(flightClassSelection[0]=='B'||flightClassSelection[0]=='b'){
				flightClass="Business";
			}
			else{
				flightClass="Economy";
			}
			
			showPrice();
			cout<<"Please Select \nReply with...(1/2/3):  ";
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
				else if(flightSelection==2){
					flightName="Air India";
					fare=dist*8;
				}
				else if(flightSelection==3){
					flightName="IndiGo";
					fare=dist*5;
				}
			}
			
		
	}
	void bookingConformation(){
			cout<<"\n\n\nDear "<<fname<<" "<<lname<<", Do you want to book the ticket...\n";
			cout<<"From "<<from<<" to "<<to<<endl;
			cout<<"Class: "<<flightClass<<endl;
			cout<<"Flight name: "<<flightName<<endl;
			cout<<"Price (Incl. of all taxes) Rs. "<<setw(5)<<static_cast<int>((fare*1.00)+(0.02*fare)+(0.06*fare)+150.00)<<".00"<<endl<<endl;
			cout<<"\tReply YES or NO:  ";
			cin>>confReply1;
			confReply=toupper(confReply1[0]);
			while(confReply!='N'&&confReply!='Y'){
				cout<<"\tPlease reply YES or NO:  ";
				cin>>confReply1;
				confReply=toupper(confReply1[0]);
			}
			if(confReply=='N'){
				cout<<"Thank you for visiting MakeMyTrip.com"<<endl;
			 	cout<<"Press 'Enter' to exit... ";
			 	exit(1011);
			}
			
	}
		void viewFlightTicket(){
			cout<<"\n\n\n\nThank you for Booking Ticket with us..."<<endl;
			cout<<"A copy of the ticket has been sent to your email: "<<email<<endl;
			cout<<"Confirmation message has been sent to your Phone number: "<<phNo<<"\n\n\n\n";
			cout<<"   ___________________________________________________________________________________________________"<<endl;
			cout<<"   | "<<setw(12)<<flightName<<"                                                                     MakeMyTrip.com |"<<endl;
			cout<<"   |                                          -Bording Pass-                                         |"<<endl;
			cout<<"   | Booking reference: XTVJDM                                                     Status: CONFIRMED |"<<endl;
			cout<<"   | Passenger details:                                                                              |"<<endl;
			cout<<"   |     1. "<<setw(10)<<setfill(' ')<<fname<<" "<<setw(10)<<setfill(' ')<<lname<<"   "<<age<<"    "<<gender<<"                                                          |"<<endl;
			cout<<"   | Flight details:                                                                                 |"<<endl;
			cout<<"   |     Flight                Date         From                To         Departs         Arrive    |"<<endl;
			cout<<"   |     6"<<flightClass[0]<<" 151          "<<setw(2)<<setfill('0')<<DD<<"/"<<setw(2)<<setfill('0')<<MM<<"/20"<<YY<<"      "<<setw(7)<<setfill(' ')<<from<<"           "<<setw(7)<<setfill(' ')<<to<<"          6:10AM         9:40AM    |"<<endl;
			cout<<"   | Seat assignment:                                                                                |"<<endl;
			cout<<"   |     "<<setw(10)<<fname<<" "<<setw(10)<<setfill(' ')<<setfill(' ')<<lname<<"             Seat - 09"<<flightClass[0]<<"                                                |"<<endl;
			cout<<"   |_________________________________________________________________________________________________|"<<endl;
			cout<<"   | Price Summary:                                         |  Contact Information                   |"<<endl;
			cout<<"   |     Base Fare, Fuel & CUTE Charges      Rs. "<<setw(5)<<setfill(' ')<<fare<<".00   |    Arbind Travel Co.                   |"<<endl;
			cout<<"   |     Fee & Taxes                                        |    Mobile: 9957268522                  |"<<endl;
			cout<<"   |        Passenger Service Fee            Rs. "<<setw(5)<<setfill(' ')<<static_cast<int>(0.02*fare)<<".00   |    arbind.kr2580@gmail.com             |"<<endl;
			cout<<"   |        Service Tax                      Rs. "<<setw(5)<<setfill(' ')<<static_cast<int>(0.06*fare)<<".00   |                                        |"<<endl;
			cout<<"   |        User Devlopment Fee              Rs.   150.00   |                                        |"<<endl;
			cout<<"   |     Total Price:                        Rs. "<<setw(5)<<setfill(' ')<<static_cast<int>((fare*1.00)+(0.02*fare)+(0.06*fare)+150.00)<<".00   |                                        |"<<endl;
			cout<<"   |________________________________________________________|________________________________________|"<<endl;
			                                            
		}
		



};

int main(){
	string conformation;
	char exitInput;



	MakeMyTrip a;
	a.welcome();
	//a.selectVehicle();
	a.flight();
	a.viewPrice();
	cout<<"\n\nDo you want to continue with the booking...(Yes/No): ";
	cin>>conformation;
	char conf=toupper(conformation[0]);
	while(conf!='Y'&&conf!='N'){
		cout<<"Please provide an input... 'Yes' or 'No': "<<endl;
		cin>>conformation;
		conf=toupper(conformation[0]);
	}

	if(conf=='Y'){
  				  a.ticketbooking();
 	}
	else if(conf!='Y'){
		cout<<"Thank you for visiting MakeMyTrip.com"<<endl;
		cout<<"Press 'Enter' to exit... ";
		exit(1011);
	}
	a.bookingConformation();
	a.viewFlightTicket();
	cout<<"Press any character key and then ENTER to exit....";
	cin>>exitInput;
	exit(1011);
}
