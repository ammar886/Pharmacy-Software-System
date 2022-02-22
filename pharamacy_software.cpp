//Pharmacy Software
#include<iostream>
using namespace std;

void calcBill(string userName, int mobile_no){
	
	string name;
	double price;
	double quantity;
	char cont;
	double bill = 0.0; 
	do{
		cout<<"Medicine: "<<endl;
		cin>>name;
		cout<<"Quantity: "<<endl;
		cin>>quantity;
		cout<<"Price Per Unit: "<<endl;
		cin>>price;
		bill = bill + quantity*price;
		cout<<"Continue: Y/N"<<endl;
		cin>>cont; 
	}
	while(cont!='N');
		cout<<"\t-----Bill-----"<<endl;
		cout<<"Customer Name: "<<userName<<endl;
		cout<<"Mobile No: "<<mobile_no<<endl;
		cout<<"Med: "<<name<<"|"<<" Qty: "<<quantity<<"|"<<" Price: "<<price*quantity<<endl;
		cout<<"Final Amount: "<<bill<<endl;
	 
}

void checkInventory(){
	cout<<"Medicines in Inventory: "<<endl;
	cout<<"Panadol"<<endl;
	cout<<"Valstar"<<endl;
	cout<<"Tenormin"<<endl;
	cout<<"Gastrofil"<<endl;
	cout<<"Ezday"<<endl;
	cout<<"Alp"<<endl;
}

void search(string med_inp){
	if(med_inp == "panadol"){
		cout<<"Available"<<endl;
	}
	else if(med_inp == "valstar"){
		cout<<"Available"<<endl;
	}
	else if(med_inp == "tenormin"){
		cout<<"Available"<<endl;
	}
	else if(med_inp == "gastrofil"){
		cout<<"Available"<<endl;
	}
	else if(med_inp == "ezday"){
		cout<<"Available"<<endl;
	}
	else if(med_inp == "alp"){
		cout<<"Available"<<endl;
	}
	else{
		cout<<"Medicine not available!"<<endl;
	}
}
int main(){
	system("pause");
	system("cls");
	int userID;
	int password;
	menuLabel:
	cout<<"\t-----Login to Continue-----"<<endl;
	cout<<"Enter User_ID: "<<endl;
	cin>>userID;
	cout<<"Enter Password: "<<endl;
	cin>>password;
	if(userID == 007 && password == 123){
	
		system("cls");
		cout<<"Login Succesfull! Welcome David!"<<endl;
		label:
		cout<<endl;
		cout<<endl;
		cout<<"\t****Main Menu****"<<endl;
		cout<<"Press 1 to Check Inventory"<<endl;
		cout<<"Press 2 to Search"<<endl;
		cout<<"Press 3 to Calculate Bill"<<endl;
		cout<<"Press 4 to Add Medicine to Inventory"<<endl;
		cout<<"Press 5 to Delete Medicine from Inventory"<<endl;
		int menu_choice;
		cin>>menu_choice;
		switch(menu_choice){
			case 1:
			{				
				system("cls");
				checkInventory();
				break;
			}
			case 2:
			{
				
				system("cls");
				string med_name;
				cout<<"Enter Medicine Name: "<<endl;
				cin>>med_name;
				search(med_name);
				break;
			}	
			case 3:
				{
					string userName;
					int phone_no;
					cout<<"Enter Customer Name: "<<endl;
					cin>>userName;
					cout<<"Enter Custome Mobile: "<<endl;
					cin>>phone_no;
					calcBill(userName,phone_no);
				}
				
		}
		goto label;
	}
	else{
		cout<<"Wrong Login Credentials! Try Again"<<endl;
		goto menuLabel;
	}
}