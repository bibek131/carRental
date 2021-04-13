#include <iostream>
#include <fstream>
#include <conio.h>
#include <stdlib.h>
#include <unistd.h>
#include <dos.h>
#include <iomanip> 
using namespace std;
class Customer 
{
	private:
	public:
	string customername;
    string carmodel;
    char data;
    
};
class Rent : public Customer 
{
	public:
			int days= 0,rentalfee=0; 
	void data()
	{
		int login();
	login();
	cout << "\t\t\t\tPlease Enter your Name: "; 
    cin >> customername;
    cout<<endl;
    do
    {
        cout <<"\t\t\t\tPlease Select a Car"<<endl; 
        cout<<"\t\t\t\tEnter 'A' for Nano ."<<endl;
        cout<<"\t\t\t\tEnter 'B' for Hyundai ."<<endl;
        cout<<"\t\t\t\tEnter 'C' for Toyota ."<<endl;
        cout<<endl;
        cout<<"\t\t\t\tChoose a Car from the above options: ";
        cin >>carmodel;
        cout<<endl;
         if(carmodel=="A")
 {
 	system("CLS");
 
		cout<<"You have choosed Nano "<<endl;
		 ifstream inA("A.txt"); 
         char str[200];
         while(inA) {
         inA.getline(str, 200);  
         if(inA) cout << str << endl;
}
sleep(2);
  }
  if(carmodel=="B")
{
	system ("CLS");
	cout<<"You have choosed Hyundai"<<endl;
	ifstream inB("B.txt");
	char str[200];
	while (inB){
		inB.getline (str,200);
		if (inB) cout <<str<<endl;
	}
	sleep(2);
}
 if (carmodel=="C")
 {
 	system ("CLS");
 	cout<<"You have choosed Toyota"<<endl;
 	ifstream inC("C.txt");
 	char str [200];
 	while (inC){
 		inC.getline (str,200);
 		if (inC) cout <<str<<endl;
	 }
 }
 if(carmodel !="A" && carmodel !="B" &&  carmodel !="C" )
  cout<<"Invalid Choice.Please select the correct"<<endl;
   }
while(carmodel !="A" && carmodel !="B" &&  carmodel !="C" );
    cout<<"--------------------------------------------------------------------------"<<endl;
    cout << "Please provide following information: "<<endl; 
    cout<<"Number of days you wish to rent the car : ";
    cin >> days;
    cout<<endl;
	}
	void calculate()
	{
		sleep(1);
		system ("CLS");
		cout<<"Calculating rent. Please wait......"<<endl;
		sleep(2);
		if(carmodel == "A"||carmodel=="a")
        rentalfee=days*500;
        if(carmodel == "B" ||carmodel=="b")
        rentalfee=days*600;
        if(carmodel == "C" ||carmodel=="c")
        rentalfee=days*750;
    }
void showrent()
    {
    cout << "\n\t\t                       Car Rental - Customer Details                  "<<endl;
    cout << "\t\t	///////////////////////////////////////////////////////////"<<endl;
    cout << "\t\t	| Customer Name:"<<"-----------------|"<<setw(10)<<customername<<" |"<<endl;
    cout << "\t\t	| Car Model :"<<"--------------------|"<<setw(10)<<carmodel<<" |"<<endl;
    cout << "\t\t	| Number of days :"<<"---------------|"<<setw(10)<<days<<" |"<<endl;
    cout << "\t\t	| Your Rental Amount is :"<<"--------|"<<setw(10)<<rentalfee<<" |"<<endl;
    cout << "\t\t	 ________________________________________________________"<<endl;
    cout <<"\n";
    cout << "\t\t	| Total Rental Amount is :"<<"-------|"<<setw(10)<<rentalfee<<" |"<<endl;
    cout << "\t\t	 ________________________________________________________"<<endl;
    cout <<" "<<endl;
    cout << "\t\t	///////////////////////////////////////////////////////////"<<endl;
    system("PAUSE");
    
    system ("CLS");
	}
};

int main()
{
Rent obj2; 
obj2.data();
obj2.calculate();
obj2.showrent();

return 0;
}

int login(){
   string pass ="";
   char ch;
   cout<<"\n\n\n\n\n\n\n\n\t\t\t\t\t       CAR RENTAL SYSTEM \n\n";
   cout<<"\t\t\t\t\t------------------------------";
   cout<<"\n\t\t\t\t\t\t     LOGIN \n";	
   cout<<"\t\t\t\t\t------------------------------\n\n";	
   cout << "\t\t\t\t\tEnter Password: ";
   ch = _getch();
   while(ch != 13){
      pass.push_back(ch);
      cout << '*';
      ch = _getch();
   }
   if(pass == "pass"){
      cout << "\n\n\n\t\t\t\t\t\tYou are successfully login! \n";
      system("PAUSE");
      system ("CLS");
   }else{
      cout << "\n\n\t\t\t\t\t\t\tSorry your password is incorrect...\n\t\t\t\t\t\t\tPlease Try Again\n\n";
      system("PAUSE");
      system("CLS");
      login();
   }
}

