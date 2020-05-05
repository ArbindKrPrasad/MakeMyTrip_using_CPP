#include<iostream>
#include <string>
#include<fstream>
using namespace std;

int main(){
	
	string hotelCity[4], hn1[4], hn2[4], hn3[4], hn4[4], addr1[4], addr2[4], doc;
	string slNo[4], price[4];
	int search, hotelSelection;
	
	
	cout<<"Please Enter: "<<endl;
 	cout<<"1 for Delhi"<<endl;
	cout<<"2 for Mumbai"<<endl;
	cout<<"3 for Kolkata"<<endl;
	cout<<"4 for Chennai"<<endl<<endl;
	ifstream Myfile;
	cin>>search;
	while(search<1||search>4){
		cin>>search;	
	}
	
	
	if(search == 1){
		Myfile.open("delhi.txt");
	}
	else if(search == 2){
		Myfile.open("mumbai.txt");
		
	}
	else if(search == 3){
		Myfile.open("kolkata.txt");
	}
	else if(search == 4){
		Myfile.open("chennai.txt");
	}
	

	for(int i=0; i<4; i++){
		Myfile>>hotelCity[i]>>slNo[i]>>hn1[i]>>hn2[i]>>hn3[i]>>hn4[i]>>addr1[i]>>addr2[i]>>price[i];
	}
	cout<<"Hotels in "<<hotelCity[0]<<endl;
	for(int i=0; i<4; i++){
		
		cout<<slNo[i]<<". "<<hn1[i]<<" "<<hn2[i]<<" "<<hn3[i]<<" "<<hn4[i]<<", "<<addr1[i]<<" "<<addr2[i]<<"     Price Rs. "<<price[i]<<endl; 
	}
	cout<<endl<<endl<<"Please Select the hotel (Enter 1-4):  ";
	cin>>hotelSelection;
	cout<<"You selected: "<<hn1[hotelSelection-1]<<" "<<hn2[hotelSelection-1]<<" "<<hn3[hotelSelection-1]<<" "<<hn4[hotelSelection-1]<<", "<<addr1[hotelSelection-1]<<" "<<addr2[hotelSelection-1]<<endl;
	cout<<"Price: Rs. "<<price[hotelSelection-1];
	
}
