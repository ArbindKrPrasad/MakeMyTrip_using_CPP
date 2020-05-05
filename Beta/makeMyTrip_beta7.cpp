#include<iostream>
#include<string>
#include<iomanip>
#include<fstream>
#include <sstream>
#include<cstdlib>
#include<time.h>
using namespace std;
void hb();
void fb();
void tb();
void welcome();



int  whatToDo(){
	char action;
	string action1;
	 //cout<<"What you want to do..."<<endl<<endl;
	 //cout<<"\t1. Flight Ticket Booking"<<endl;
	 //cout<<"\t2. Train Ticket Booking"<<endl;
	 //cout<<"\t3. Hotel Booking"<<endl<<endl;
	 cout<<endl<<"\t\t\t\tReply with (1 - 3): ";
	 cin>>action1;
	 action=action1[0];
	 cout<<endl<<endl;
	 while(action!='1'&&action!='2'&&action!='3'){
	 	cout<<"Please reply with a valid option."<<endl;
	 	cout<<"\t\t\t\tReply with (1 - 3): ";
	 	cin>>action1;
	 	action=action1[0];
		 }
	 return action;
	 }
	 int hotelPlaceSelector(){
	     string hsearch;
	     cout<<endl<<"Please Enter: "<<endl;
	     cout<<"\tD for Delhi"<<endl;
			 cout<<"\tM for Mumbai"<<endl;
			 cout<<"\tK for Kolkata"<<endl;
			 cout<<"\tC for Chennai"<<endl<<endl;
			 cout<<"Select City: ";
			 cin>>hsearch;
			 char hsearch1= toupper(hsearch[0]);
			 while(hsearch1!='D'&&hsearch1!='M'&&hsearch1!='K'&&hsearch1!='C'){
			 	cout<<"Please enter available city, "<<endl;
			 	cout<<"\tSelect City: ";
			 	cin>>hsearch;
			 	hsearch1= toupper(hsearch[0]);
			 }

			 return hsearch1;
}

void hotel( char hsearch1, const std::string& firstname="Noname", int age=0,const std::string& phonenumber="0", char gender='0'){
	int hnoofdays, hDD, hMM, hYY;
	

	string  hotelConfReply1,hfinalBookingConf1;
	char hfinalBookingConf, hotelConfReply;
	string hfname, hlname, hnoofguist, hidnumber,hphNo;
	char hgender;
	int hage;

	string hotelCity[4], hn1[4], hn2[4], hn3[4], hn4[4], addr1[4], addr2[4], doc;
	string slNo[4], price[4];
	ifstream Myfile;
	if(hsearch1 == 'D'){
		Myfile.open("delhi.txt");
	}
	else if(hsearch1 == 'M'){
		Myfile.open("mumbai.txt");

	}
	else if(hsearch1 == 'K'){
		Myfile.open("kolkata.txt");
	}
	else if(hsearch1 == 'C'){
		Myfile.open("chennai.txt");
	}
	
	for(int i=0; i<4; i++){
		Myfile>>hotelCity[i]>>slNo[i]>>hn1[i]>>hn2[i]>>hn3[i]>>hn4[i]>>addr1[i]>>addr2[i]>>price[i];
	}
	system("cls");
	welcome();
	hb();
	cout<<"Hotels in "<<hotelCity[0]<<endl<<endl;
	for(int i=0; i<4; i++){

		cout<<slNo[i]<<". "<<hn1[i]<<" "<<hn2[i]<<" "<<hn3[i]<<" "<<hn4[i]<<", "<<addr1[i]<<" "<<addr2[i]<<"     Price Rs. "<<price[i]<<endl;
	}
	cout<<endl<<endl<<"Please Select the hotel (Enter 1-4):  ";
	int hotelSelection;
	cin>>hotelSelection;
	
	while(hotelSelection!=1&&hotelSelection!=2&&hotelSelection!=3&&hotelSelection!=4){
		cout<<"Please select a valid option."<<endl;
		cout<<endl<<endl<<"Please Select the hotel (Enter 1-4):  ";
		cin>>hotelSelection;
	}

	system("cls");
	welcome();
	hb();
	cout<<"Do you want to continue with the booking..."<<endl<<endl;
	cout<<"\tYou have selected: "<<hn1[hotelSelection-1]<<" "<<hn2[hotelSelection-1]<<" "<<hn3[hotelSelection-1]<<" "<<hn4[hotelSelection-1]<<", "<<addr1[hotelSelection-1]<<" "<<addr2[hotelSelection-1]<<endl<<endl;
	cout<<"\tPrice: Rs. "<<price[hotelSelection-1]<<".00 (Per Day)"<<endl<<endl;
	cout<<"Reply with 'YES' or 'NO: " ;
	cin>>hotelConfReply1;
	hotelConfReply=toupper(hotelConfReply1[0]);
	while(hotelConfReply != 'Y' && hotelConfReply != 'N'){
		cout<<"Please Reply with 'YES' or 'NO: " ;
		cin>>hotelConfReply1;
		hotelConfReply=toupper(hotelConfReply1[0]);
	}
	if(hotelConfReply=='N'){
		cout<<"Thank you for visiting MakeMyTrip.com"<<endl;
 		cout<<"Press 'Enter' to exit... ";
	 	exit(1011);
	}
	system("cls");
	welcome();
	hb();
	
	if(firstname=="Noname"){
	
	cout<<"-Personal Details-"<<endl;
	cout<<"\tEnter your name: ";
	cin.ignore();
	getline(cin, hfname);
	cout<<"\tAge: ";
	cin>>hage;
	
	cout<<"\tGender: ";
	cin>>hgender;
	cout<<"\tMobile No.: ";
	cin>>hphNo;
	while(hphNo.length()!=10)
	{
		cout<<"Please enter a valid 10-digit Mobile Number: "<<endl;
		cout<<"\tMobile No.: ";
		cin>>hphNo;
	}
}
else{
	hfname=firstname; hage = age; hphNo = phonenumber; hgender=toupper(gender);
	cout<<"\tName: "<<hfname<<" "<<hlname<<endl;
	cout<<"\tAge: "<<hage<<endl;
	cout<<"\tGender: "<<hgender<<endl;
	cout<<"\tPhone no.: "<<hphNo<<endl<<endl;
	
}

	cout<<"\nEnter 'CHECK IN' date: "<<endl;
 				   cout<<"\tDD: ";
			 cin>>hDD;
			 while(hDD<01||hDD>31){
			 	cout<<"Please enter a valid day: "<<endl;
			 	cout<<"\t\tDD: ";
			 	cin>>hDD;
			 }
			 cout<<"\tMM: ";
			 cin>>hMM;
			 while(hMM<01||hMM>12){
			 	cout<<"Please enter a valid month: "<<endl;
			 	cout<<"\tMM: ";
			 	cin>>hMM;
			 }
			 cout<<"\tYYYY: 20";
			 cin>>hYY;
			 while(hYY<19||hYY>20){
			 	cout<<"Please enter a valid year: "<<endl;
			 	cout<<"\t     YYYY: 20";
			 	cin>>hYY;
            }
	cout<<"No. of guist(s): ";
	cin>>hnoofguist;
	cout<<"Number of days: ";
	cin>>hnoofdays;
	cout<<endl<<"Note: AADHAAR/ID CARD IS REQUIRED FOR VERIFICATION OF THE CAUSTOMER AT\nTHE TIME OF CHECKIN SO PLEASE BRING THE ID CARD."<<endl;
	cout<<"Aadhaar/ID card number: ";
	cin>>hidnumber;

	system("cls");
	welcome();
	hb();
	cout<<"-Booking Confirmation-"<<endl;
	cout<<"Hotel name: "<<hn1[hotelSelection-1]<<" "<<hn2[hotelSelection-1]<<" "<<hn3[hotelSelection-1]<<" "<<hn4[hotelSelection-1]<<endl;
	cout<<"Hotel Address: "<<addr1[hotelSelection-1]<<" "<<addr2[hotelSelection-1]<<endl;

    string s = price[hotelSelection-1];
    stringstream hotelObj(s);
    int x = 0;
    hotelObj >> x;
	int hprice = x;
	cout<<"Price: "<<hnoofdays<<" days @ Rs. "<<price[hotelSelection-1]<<" per day = Rs."<<hprice*hnoofdays<<".00";

	cout<<endl<<endl<<"Booking Confirmation (YES/NO): ";
	cin>>hfinalBookingConf1;
	hfinalBookingConf=toupper(hfinalBookingConf1[0]);
	while(hfinalBookingConf != 'Y' && hfinalBookingConf != 'N'){
		cout<<"Please Reply with 'YES' or 'NO: " ;
		cin>>hfinalBookingConf1;
		hfinalBookingConf=toupper(hfinalBookingConf1[0]);
	}
	if(hfinalBookingConf=='N'){
		cout<<"Thank you for visiting MakeMyTrip.com"<<endl;
 		cout<<"Press 'Enter' to exit... ";
	 	exit(1011);
	}
	system("cls");
	welcome();
	hb();
	
	srand(time(0));
	int randomNo1=rand() % 9000 + 1000;
	cout<<"-Hotel Booked-"<<endl<<endl;
	cout<<"Booking reference number: "<<hYY<<randomNo1<<setw(2)<<setfill('0')<<hDD<<setw(2)<<setfill('0')<<hMM<<endl;
	cout<<"The hotel has been booked for "<<hfname<<" "<<hlname<<"  "<<hage<<"  "<<hgender<<endl<<endl;
	cout<<"Hotel name: "<<hn1[hotelSelection-1]<<" "<<hn2[hotelSelection-1]<<" "<<hn3[hotelSelection-1]<<" "<<hn4[hotelSelection-1]<<endl;
	cout<<"Hotel Address: "<<addr1[hotelSelection-1]<<" "<<addr2[hotelSelection-1]<<endl;
	cout<<"Check in date: "<<hDD<<"/"<<hMM<<"/"<<hYY<<endl;
	cout<<"No of days: "<<hnoofdays<<endl;
	cout<<"No. of person: "<<hnoofguist<<endl;
	cout<<"Price: Rs. "<<hprice * hnoofdays<<".00"<<endl;
	int hhprice= hprice * hnoofdays;
		
	fstream flightFileInput("hoteldata.txt");
	flightFileInput.seekg(0, ios::end);
	flightFileInput<<"\n"<<hYY<<randomNo1<<setw(2)<<setfill('0')<<hDD<<setw(2)<<setfill('0')<<hMM<<"     "<<setw(15)<<setfill(' ')<<hn1[hotelSelection-1]<<" "<<setw(15)<<hn2[hotelSelection-1]<<" "<<setw(15)<<hn3[hotelSelection-1]<<" "<<setw(15)<<hn4[hotelSelection-1]<<"     "<<setw(15)<<addr1[hotelSelection-1]<<setw(1)<<" "<<setw(15)<<addr2[hotelSelection-1]<<"     "<<setw(2)<<setfill('0')<<hDD<<"/"<<setw(2)<<setfill('0')<<hMM<<"/"<<setw(2)<<setfill('0')<<hYY<<"          "<<hnoofdays<<"               "<<hnoofguist<<"                        "<<hhprice<<"     "<<setw(12)<<setfill(' ')<<hfname<<"     "<<setw(12)<<hlname<<"     "<<hage<<"     "<<hphNo<<"     "<<hgender;
	flightFileInput.close();
}


class Train{
	 char tfrom, tto, tClass;
	 
	 int nop, tpage[6];
	 string tpname[6];
	 string tpgender[6];
	 
	 int tprice, ts, xx, tDistance,trainFare, DD, MM, YY;
	 string trainNo[16],tphNo,trainClass, tn1[16], tn2[16], depStn1[16], depStn2[16], depTime[16], arrStn1[16], arrStn2[16], arrTime[16], tripTime1[16], tripTime2[16];
	 public:
	 	void trainPlaceSelector(){
		 	 	
		string hsearch;
		system("cls");
		welcome();
		tb();
		cout<<endl<<"Please Enter: "<<endl;
		cout<<"\tD for Delhi"<<endl;
			 cout<<"\tM for Mumbai"<<endl;
			 cout<<"\tK for Kolkata"<<endl;
			 cout<<"\tC for Chennai"<<endl<<endl;
			 cout<<"\tFrom: ";
			 cin>>hsearch;
			 tfrom= toupper(hsearch[0]);
			 while(tfrom!='D'&&tfrom!='M'&&tfrom!='K'&&tfrom!='C'){
			 	cout<<"Please enter available city. "<<endl;
			 	cout<<"\tFrom: ";
			 	cin>>hsearch;
			 	tfrom= toupper(hsearch[0]);
				 }
			 cout<<endl<<"\tTo: ";
			 string tto1;
			 cin>>tto1;
			 tto=toupper(tto1[0]);
			 while(tto!='D'&&tto!='M'&&tto!='K'&&tto!='C'){
			 	cout<<"Please select available city. "<<endl;
			 	cin>>tto1;
			 	tto=toupper(tto1[0]);
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
	}
	    void trainFileHandler(){
	    	
	    	ifstream taccess;
	    	if(tfrom=='D'&&tto=='M'){ taccess.open("delhi_mumbai.txt");}
			else if(tfrom=='D'&&tto=='K'){taccess.open("delhi_kolkata.txt");}
			else if(tfrom=='D'&&tto=='C'){taccess.open("delhi_chennai.txt");}
			else if(tfrom=='M'&&tto=='D'){taccess.open("mumbai_delhi.txt");}
			else if(tfrom=='M'&&tto=='K'){taccess.open("mumbai_kolkata.txt");}
			else if(tfrom=='M'&&tto=='C'){taccess.open("mumbai_chennai.txt");}
			else if(tfrom=='K'&&tto=='D'){taccess.open("kolkata_delhi.txt");}
			else if(tfrom=='K'&&tto=='M'){taccess.open("kolkata_mumbai.txt");}
			else if(tfrom=='K'&&tto=='C'){taccess.open("kolkata_chennai.txt");}
			else if(tfrom=='C'&&tto=='D'){taccess.open("chennai_delhi.txt");}
			else if(tfrom=='C'&&tto=='M'){taccess.open("chennai_mumbai.txt");}
			else if(tfrom=='C'&&tto=='K'){taccess.open("chennai_kolkata.txt");}
			
			
			for(int i=0; i<16; i++){
				taccess>>trainNo[i]>>tn1[i]>>tn2[i]>>depStn1[i]>>depStn2[i]>>depTime[i]>>arrStn1[i]>>arrStn2[i]>>arrTime[i]>>tripTime1[i]>>tripTime2[i];
			}
			
			string ss= trainNo[0];
			stringstream stoint(ss);
			xx=0;
			stoint>>xx;
			system("cls");
			welcome();
			tb();
			cout<<"From: "<<tn1[0]<<"\tTo: "<<tn2[0]<<endl;
			cout<<"Date Of Journey: "<<DD<<"/"<<MM<<"/20"<<YY<<endl<<endl;
			cout<<"SlNo    TNo                      Train Name          Dept Stn (Time)            Arr Stn (Time)   TripTime"<<endl;
			cout<<"----    ---                      ----------          ---------------            --------------   --------"<<endl;
			for(int i=1; i<=xx; i++){
				cout<<setw(4)<<i<<". "<<trainNo[i]<<"  "<<setw(30)<<tn1[i]+" "+tn2[i]<<"  "<<setw(15)<<depStn1[i]+" "+depStn2[i]<<" "<<depTime[i]<<"   "<<setw(15)<<arrStn1[i]+" "+arrStn2[i]<<" "<<arrTime[i]<<"    "<<tripTime1[i]<<" "<<tripTime2[i]<<endl;
				if(trainNo[i]=="\n"){
					break;
				}
			}	
		}
		
		void trainSelection(){
			cout<<endl<<"\tPlease select (Enter 1 - "<<xx<<"): ";
			cin>>ts;
			while(ts<1||ts>xx){
				cout<<"Please select a valid option\n";
				cout<<endl<<"\tPlease select (Enter 1 - "<<xx<<"): ";
				cin>>ts;
			}
			
		}
		void trainClassSelector(){
			system("cls");
			welcome();
			tb();
			cout<<"\nYou have selected.\n\n";
			cout<<"\tTrain: "<<trainNo[ts]<<" - "<<tn1[ts]+" "+tn2[ts]<<endl;
			cout<<"\tDOJ: "<<DD<<"/"<<MM<<"/20"<<YY<<endl;
			cout<<"\tDept Stn: "<<depStn1[ts]+" "+depStn2[ts]<<depTime[ts]<<endl;
			cout<<"\tArri Stn: "<<arrStn1[ts]+" "+arrStn2[ts]<<arrTime[ts]<<endl;
			cout<<"\tTravel Time: "<<tripTime1[ts]+" "+tripTime2[ts]<<endl;
			cout<<"\tTravel distance: "<<tripTime2[0]<<" KM"<<endl;
			/*
			Pricing Sl - 0.42  per km
					1A - 2.81 
					2A - 1.64
					3A - 1.134 
			*/
			string aa=tripTime2[0];
			stringstream conv(aa);
			conv>>tDistance;
			
			cout<<endl<<"Select Class:\n\tPrice: ";
			cout<<"\tSL - SLEEPER   Rs. "<<tDistance*0.42<<endl;
			cout<<"\t\t3A - AC 3 TIER Rs. "<<tDistance*1.134<<endl;
			cout<<"\t\t2A - AC 2 TIER Rs. "<<tDistance*1.64<<endl;
			cout<<"\t\t1A - AC 1 TIER Rs. "<<tDistance*2.81<<endl;
			cout<<"\n\t\tReply (SL/3A/2A/1A): ";
			
			string trainClass1;
			cin>>trainClass1;
			tClass= toupper(trainClass1[0]);
			if(tClass=='3'){
				trainClass="3A";
				trainFare=tDistance*1.134;
			}
			else if(tClass=='2'){
				trainClass="2A";
				trainFare= tDistance*1.64;
			}
			else if(tClass=='1'){
				trainClass= "1A";
				trainFare = tDistance* 2.81;
			}
			else{
				trainClass="SL";
				trainFare = tDistance*0.42;
			}
			
			cout<<"\n\tDo you want to continue with the booking: (Y/N) ";
			string tbconformation;
			cin>>tbconformation;
			char tbconf=toupper(tbconformation[0]);
		while(tbconf!='Y'&&tbconf!='N'){
			cout<<"Please provide an input... 'Yes' or 'No': "<<endl;
			cin>>tbconformation;
			tbconf=toupper(tbconformation[0]);
		}

		if(tbconf!='Y'){
			cout<<"Thank you for visiting MakeMyTrip.com"<<endl;
			cout<<"Press 'Enter' to exit... ";
			getchar();
			exit(1011);
		}
		}
		
		void tbpinfo(){
			system("cls");
			welcome();
			tb();
			cout<<"-PASSENGER DETAILS-"<<endl<<endl;
			
			cout<<"\tMobile No.: ";
			cin>>tphNo;
			while(tphNo.length()!=10)
			{
				cout<<"Please enter a valid 10-digit Mobile Number: "<<endl;
				cout<<"\tMobile No.: ";
				cin>>tphNo;
			}
			
			cout<<"\n\tNumber of passenger (1-6): ";
			cin>>nop;
			while(nop<0||nop>6){
				cout<<"Enter valid input."<<endl;
				cout<<"\n\tNumber of passenger (1-6): "<<endl<<endl;
				cin>>nop;
			}
			for(int i=0;i<nop;i++){
				cout<<endl<<"Enter details of passenger "<<i+1<<": "<<endl;
				cout<<"\tName: ";
				cin.ignore();
				getline(cin, tpname[i]);
				cout<<"\tAge: ";
				cin>>tpage[i];
				while(tpage[i]>125||tpage[i]<6){
					cout<<"Enter age between 0 to 125: ";
					cin>>tpage[i]; 
				}
				cout<<"\tGender: ";
				string tpgender1;
				cin>>tpgender1;
				tpgender[i]=toupper(tpgender1[0]);
				while(tpgender[i]!="M"&&tpgender[i]!="F"){
					cout<<"Please enter ( M / F ): ";
					cin>>tpgender1;
					tpgender[i]=toupper(tpgender1[0]);
					
				}
				cout<<"\n";	
			}	
		}
		
		void ttconf(){
			cout<<"Do you want to book the ticket. "<<endl;
			cout<<"Booking Details: "<<endl;
			
			cout<<"\tTrain: "<<trainNo[ts]<<" - "<<tn1[ts]+" "+tn2[ts]<<endl;
			cout<<"\tDOJ: "<<DD<<"/"<<MM<<"/20"<<YY<<endl;
			cout<<"\tDept Stn: "<<depStn1[ts]+" "+depStn2[ts]<<depTime[ts]<<endl;
			cout<<"\tArri Stn: "<<arrStn1[ts]+" "+arrStn2[ts]<<arrTime[ts]<<endl;
			cout<<"\tTravel Time: "<<tripTime1[ts]+" "+tripTime2[ts]<<endl;
			cout<<"\tTravel distance: "<<tripTime2[0]<<endl;
			cout<<"Class: "<<trainClass<<endl;
			cout<<"No of passengers: "<<nop<<endl;
			cout<<"Fare per person: Rs. "<<trainFare<<endl;
			cout<<"Total fare"<<trainFare*nop<<endl;
			cout<<"\tReply (YES/NO): ";
			string ttconf1;
			cin>>ttconf1;
			char ttconf= toupper(ttconf1[0]);
			while(ttconf!='Y'&&ttconf!='N'){
				cout<<"Please enter YES or NO."<<endl;
				cout<<"\tReply (YES/NO): ";
				string ttconf;
				cin>>ttconf1;
			}
			
			if(ttconf=='N'){
				cout<<"Thank you for visiting MakeMyTrip.com"<<endl;
				cout<<"Press 'Enter' to exit... ";
				exit(1011);
			}
		}
		void trainTicket(){
			system("cls");
			welcome();
			tb();
			
			srand(time(0));
			int trandomNo=rand() % 9000 + 1000;
			cout<<"-Your Ticket-";
			cout<<"\n\nThank you for Booking Ticket with us..."<<endl;
			cout<<"Confirmation message has been sent to your Phone number:"<<tphNo<<"\n";
			cout<<"   _______________________________________________________________________________________________________________"<<endl;
			cout<<"   | Indian Railways                                E-Ticket                                      MakeMyTrip.com |"<<endl;
			cout<<"   |                                                                                                             |"<<endl;
			cout<<"   |  PNR NO: 621406"<<trandomNo<<"                                                                                         |"<<endl;
			cout<<"   |  Train No. & Name: "<<setw(35)<<trainNo[ts]+"-"+tn1[ts]+" "+tn2[ts]<<"                        Date of Journey: "<<setw(2)<<setfill('0')<<DD<<"/"<<setw(2)<<setfill('0')<<MM<<"/20"<<setw(2)<<setfill('0')<<YY<<"   |"<<endl;
			cout<<"   |  Class: "<<trainClass<<"                                                                    Bording Date: "<<setw(2)<<setfill('0')<<DD<<"/"<<setw(2)<<setfill('0')<<MM<<"/20"<<setw(2)<<setfill('0')<<YY<<"      |"<<endl;
			cout<<"   |  From: "<<setw(7)<<setfill(' ')<<tn1[0]<<"                         To: "<<setw(7)<<tn2[0]<<"                            Distance: "<<setw(4)<<tripTime2[0]<<" KM             |"<<endl;
			cout<<"   |  Bording: "<<setw(18)<<depStn1[ts]+" "+depStn2[ts]<<"           Reserved upto: "<<setw(18)<<arrStn1[ts]+" "+arrStn2[ts]<<"      Quota: GENERAL                |"<<endl;
			cout<<"   |  Scheduled Departure Time: "<<depTime[ts]<<"     Ticket fare: Rs. "<<setw(5)<<trainFare*nop<<"                 No. of Person: "<<nop<<"              |"<<endl;
			cout<<"   |  Passenger Mobile No. "<<tphNo<<"       Scheduled Arrival: "<<arrTime[ts]<<"                                           |"<<endl;
			cout<<"   |                                                                                                             |"<<endl;
			cout<<"   |  Passenger Details:                                                                                         |"<<endl;
			cout<<"   |     Sl.N                  Name                Age    Sex            Booking Status                          |"<<endl;
			for(int i=0; i<nop; i++){
			cout<<"   |       "<<i+1<<".  "<<setw(20)<<tpname[i]<<"                 "<<setw(2)<<tpage[i]<<"      "<<tpgender[i]<<"            CNF                                     |"<<endl;	
			}
			
			cout<<"   |                                                                                                             |"<<endl;
			cout<<"   |  Fare Details:                                              ________________________________________________|"<<endl;
			cout<<"   |     1. Ticket Fare                      Rs. "<<setw(5)<<static_cast<int>(trainFare*nop)<<".00        |  Arbind Travel Co.                            |"<<endl;
			cout<<"   |     2. IRCTC Service Charges            Rs. "<<setw(5)<<static_cast<int>(0.02*(trainFare*nop))<<".00        |  arbind.kr25801@gmail.com                     |"<<endl;
			cout<<"   |     3. MakeMyTrip Fee                   Rs. "<<setw(5)<<static_cast<int>(0.01*(trainFare*nop))<<".00        |  Mobile no. 9957268522                        |"<<endl;
			cout<<"   |     4. Total                            Rs. "<<setw(5)<<static_cast<int>((trainFare*nop)+(0.02*(trainFare*nop))+(0.01*(trainFare*nop)))<<".00        |                                               |"<<endl;
			cout<<"   |_____________________________________________________________|_______________________________________________|"<<endl;
			
			int ttotalFare = static_cast<int>((trainFare*nop)+(0.02*(trainFare*nop))+(0.01*(trainFare*nop)));
			fstream flightFileInput("traindata.txt");
			flightFileInput.seekg(0, ios::end);
			flightFileInput<<"\n"<<621406<<trandomNo<<"   "<<setw(25)<<tpname[0]<<"   "<<"     "<<setw(2)<<tpage[0]<<"     "<<tpgender[0]<<"   "<<tphNo<<"    "<<"   "<<setw(40)<<tn1[ts]+" "+tn2[ts]<<"      "<<setw(2)<<DD<<"-"<<setw(2)<<MM<<"-"<<setw(2)<<YY<<"       "<<setw(8)<<trainClass<<"      "<<setw(7)<<tfrom<<"   "<<setw(7)<<tto<<"   "<<setw(7)<<ttotalFare;
			flightFileInput.close();
			
			cout<<endl<<"Do you want to book hotel in: "<<tn2[0]<<": ";
			string thPrompt1;
			cin>>thPrompt1;
			char thPrompt = toupper(thPrompt1[0]);
			while(thPrompt!='Y'&&thPrompt!='N'){
				cout<<"Please reply with YES or NO: ";
				cin>>thPrompt1;
				char thPrompt = toupper(thPrompt1[0]);
			}
			if(thPrompt == 'Y'){
				char tHotelRedirect = tn2[0][0];
				char ctpgender = tpgender[0][0];
				hotel(tHotelRedirect, tpname[0], tpage[0], tphNo, ctpgender);
			}
			else{
				char exitentry;
				cout<<"Press any character key and then ENTER to exit...";
				cin>>exitentry;
				exit(1100);
			}
			
		}
};

class MakeMyTrip{
	//identifiers for flight booking
	int vehicle;
	int dist;
	string fname, fname1, lname1, lname, email, gender1;
	string flightClass, flightClassSelection, flightName, strPhoneNumber, phNo;
	int DD, MM, YY, flightSelection,gst, age;
	float fare;

	string bord1, arri1, from, to, confReply1;
	char bord, arri, exitInput, gender, confReply,exitCode;


//identifiers for What to do
	int action;

//welcome tag
	public:
		MakeMyTrip(){
	cout<<"          ____________________________________________________________________________________________________"<<endl;
	cout<<"          |                                         _            _ _  __     __                              |"<<endl;
	cout<<"          |                           |\\/|  /\\  |/ |_   |\\/| \\/   |  | _| | |__|                             |"<<endl;
	cout<<"          |                           |  | /--\\ |\\ |_   |  | /    |  | \\  | |                                |"<<endl;
	cout<<"          |                          _____________________________________________                           |"<<endl;
	cout<<"          |                                                                                                  |"<<endl;
	cout<<"          |                What you want to do...                                                            |"<<endl;
	cout<<"          |                                                                                                  |"<<endl;
	cout<<"          |                     1. Flight Ticket Booking                                                     |"<<endl;
	cout<<"          |                     2. Train Ticket Booking                                                      |"<<endl;
	cout<<"          |                     3. Hotel Booking                                                             |"<<endl;
	cout<<"          |__________________________________________________________________________________________________|"<<endl;
}
//flight city selection
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


			system("cls");
			welcome();
			fb();
			 cout<<endl<<"Please Enter: "<<endl;
			 cout<<"\tD for Delhi"<<endl;
			 cout<<"\tM for Mumbai"<<endl;
			 cout<<"\tK for Kolkata"<<endl;
			 cout<<"\tC for Chennai"<<endl<<endl;
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
			 cout<<"\n";
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

//GST calculator
		void GST(){
			gst=.06*fare;
		}
//Flight price viewer
		void viewPrice(){
			cout<<"Date: "<<DD<<"/"<<MM<<"/"<<YY<<endl;
			cout<<"Prices: "<<endl;
			cout<<"\tJet Airways Rs. "<<dist*10.0<<endl;
			cout<<"\tAir India   Rs. "<<dist*8.0<<endl;
			cout<<"\tIndiGo      Rs. "<<dist*5.0<<endl;
		}

//Flight price shower
		 	void showPrice(){
	 		cout<<"\n\nSelect Flight  (Enter 1 or 2 or 3)"<<endl;
			cout<<"1 - Jet Airways        Rs. "<<dist*10.0<<" + "<<.06*(dist*10)<<"(GST)"<<endl;
			cout<<"2 - Air India          Rs. "<<dist*8.0<<" + "<<.06*(dist*8)<<"(GST)"<<endl;
			cout<<"3 - IndiGo             Rs. "<<dist*5.0<<" + "<<.06*(dist*5)<<"(GST)"<<endl;
		}

//Flight ticket booking
		void ticketbooking(){
			system("cls");
			welcome();
			fb();
			cout<<"-Passenger Details-"<<endl;
			cout<<"\n\nEnter Your Name: ";
			cin.ignore();
			getline(cin, fname);
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

//Flight ticket Conformation
	void bookingConformation(){
		system("cls");
		welcome();
		fb();
		cout<<"-Booking Conformation-"<<endl;

			cout<<"\n\n\nDear "<<fname<<", Do you want to book the ticket...\n";
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

//Flight ticket viewer
		void viewFlightTicket(){
			system("cls");
			welcome();
			srand(time(0));
			int randomNo=rand() % 9000 + 1000;
			int totalFare=static_cast<int>((fare*1.00)+(0.02*fare)+(0.06*fare)+150.00);
			cout<<"-Bording Pass-";
			cout<<"\n\nThank you for Booking Ticket with us..."<<endl;
			cout<<"A copy of the ticket has been sent to your email: "<<email<<endl;
			cout<<"Confirmation message has been sent to your Phone number: "<<phNo<<"\n";
			cout<<"   ___________________________________________________________________________________________________"<<endl;
			cout<<"   | "<<setw(12)<<flightName<<"                                                                     MakeMyTrip.com |"<<endl;
			cout<<"   |                                          -Bording Pass-                                         |"<<endl;
			cout<<"   | Booking reference: XTVJDM"<<randomNo<<"                                                 Status: CONFIRMED |"<<endl;
			cout<<"   | Passenger details:                                                                              |"<<endl;
			cout<<"   |     1. "<<setw(21)<<setfill(' ')<<fname<<"   "<<age<<"    "<<gender<<"                                                          |"<<endl;
			cout<<"   | Flight details:                                                                                 |"<<endl;
			cout<<"   |     Flight                Date         From                To         Departs         Arrive    |"<<endl;
			cout<<"   |     6"<<flightClass[0]<<" 151          "<<setw(2)<<setfill('0')<<DD<<"/"<<setw(2)<<setfill('0')<<MM<<"/20"<<YY<<"      "<<setw(7)<<setfill(' ')<<from<<"           "<<setw(7)<<setfill(' ')<<to<<"          6:10AM         9:40AM    |"<<endl;
			cout<<"   | Seat assignment:                                                                                |"<<endl;
			cout<<"   |     "<<setw(21)<<fname<<"             Seat - 09"<<flightClass[0]<<"                                                |"<<endl;
			cout<<"   |_________________________________________________________________________________________________|"<<endl;
			cout<<"   | Price Summary:                                         |  Contact Information                   |"<<endl;
			cout<<"   |     Base Fare, Fuel & CUTE Charges      Rs. "<<setw(5)<<setfill(' ')<<fare<<".00   |    Arbind Travel Co.                   |"<<endl;
			cout<<"   |     Fee & Taxes                                        |    Mobile: 9957268522                  |"<<endl;
			cout<<"   |        Passenger Service Fee            Rs. "<<setw(5)<<setfill(' ')<<static_cast<int>(0.02*fare)<<".00   |    arbind.kr2580@gmail.com             |"<<endl;
			cout<<"   |        Service Tax                      Rs. "<<setw(5)<<setfill(' ')<<static_cast<int>(0.06*fare)<<".00   |                                        |"<<endl;
			cout<<"   |        User Devlopment Fee              Rs.   150.00   |                                        |"<<endl;
			cout<<"   |     Total Price:                        Rs. "<<setw(5)<<setfill(' ')<<static_cast<int>((fare*1.00)+(0.02*fare)+(0.06*fare)+150.00)<<".00   |                                        |"<<endl;
			cout<<"   |________________________________________________________|________________________________________|"<<endl;


			fstream flightFileInput("flightdata.txt");
			flightFileInput.seekg(0, ios::end);
			flightFileInput<<"\n"<<randomNo<<"   "<<setw(21)<<fname<<"     "<<setw(2)<<age<<"     "<<gender<<"   "<<phNo<<"    "<<setw(40)<<email<<"   "<<setw(11)<<flightName<<"      "<<setw(2)<<DD<<"-"<<setw(2)<<MM<<"-"<<setw(2)<<YY<<"       "<<setw(8)<<flightClass<<"      "<<setw(7)<<from<<"   "<<setw(7)<<to<<"   "<<setw(7)<<totalFare;
			flightFileInput.close();
			string hotelBookingPrompt;
			cout<<"\nDo you want to book hotel in "<<to<<" (Yes/No): ";
			cin>>hotelBookingPrompt;
			char hbprompt=toupper(hotelBookingPrompt[0]);
			while(hbprompt!='Y'&&hbprompt!='N'){
				cout<<"Please provide an input... 'Yes' or 'No': "<<endl;
				cin>>hotelBookingPrompt;
				char hbprompt=toupper(hotelBookingPrompt[0]);
			}
	
			if(hbprompt=='N'){
				cout<<"Thank you for visiting MakeMyTrip.com"<<endl;
				cout<<"Press 'Enter' to exit... ";
				exit(1011);
		 	}
		 	hotel(arri, fname, age, phNo, gender );
		}
};

class HotelBooking{
	int search, hotelSelection;

	void destinationSelector(){
		cout<<"Please Enter: "<<endl;
	 	cout<<"1 for Delhi"<<endl;
		cout<<"2 for Mumbai"<<endl;
		cout<<"3 for Kolkata"<<endl;
		cout<<"4 for Chennai"<<endl<<endl;
		cout<<"Reply with (1-4)";
		cin>>search;
		while(search<1||search>4){
			cin>>search;
		}
	}
};

class Admin{
    string username, password;
	string validUsername, validPassword	, viewbooking;
	public:
		Admin(){
			cout<<"UserName: ";
			cin>>username;
			while(username!= validUsername){
			    cout<<"Enter the valid UserName: "<<endl<<"Press 'Q' to Quit"<<endl;
			    cout<<"UserName: ";
			    cin>>username;
			    if(username == 'q' ||username == 'Q'){
			    	exit(1011);
				}
			    
			}
			cout<<"Password: ";
			cin>>password;
			while(password!= validPassword){
			    cout<<"Enter the valid Password: "<<endl<<"Press 'Q' to Quit"<<endl;
			    cout<<"Password: ";
			    cin>>password;
			    if(username == 'q' ||username == 'Q'){
			    	exit(1011);
				}
			}
		}
		
		void viewBookings(){
			cout<<"View bookings."<<endl;
			cout<<"\t1. Train";
			cout<<"\t2. Flight";
			cout<<"\t3. Hotel";
			cin>>viewbooking;
			while(viewbooking!=1||viewbooking!=2||viewbooking!=3){
				cout<<"Enter valid option."<<endl;
				cin>>viewbooking;
			}
			
			if(viewbooking == 1){
				
			}
		}
};


void hb(){
	 cout<<"HOTEL BOOKING"<<endl<<"-------------"<<endl;
}
void fb(){
	cout<<"FLIGHT TICKET BOOKING"<<endl<<"---------------------"<<endl;
}
void tb(){
	cout<<"TRAIN TICKET BOOKING"<<endl;
	cout<<"--------------------"<<endl;
}
void welcome(){
		 cout<<"---------------------------------------------- WELCOME TO MakeMyTrip.com ----------------------------------------------"<<endl;
		 cout<<"--------------------------------- The place where you can find your all travel needs. ---------------------------------"<<endl<<endl;
	}

int main(){
	//identifiers for hotel booking
	string hotelCity[4], hn1[4], hn2[4], hn3[4], hn4[4], addr1[4], addr2[4], doc;
	string slNo[4], price[4];
	int search, hotelSelection;
	ifstream Myfile;

	string conformation;
	char exitInput;

	MakeMyTrip a;
	//welcome();
	char actionSelector = whatToDo();


	if(actionSelector=='1'){

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
	else if(actionSelector=='2'){
		Train t;
		t.trainPlaceSelector();
		t.trainFileHandler();
		t.trainSelection();
		t.trainClassSelector();
		t.tbpinfo();
		t.trainTicket();
	}
	else if(actionSelector=='3'){
		char hsearch1 = hotelPlaceSelector();
		hotel(hsearch1);		
	}
}
