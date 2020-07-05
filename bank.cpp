// BANK MANAGEMENT SYSTEM

#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
class bank
 {  char name[100],add[100],y;
    int balance;
 public: 
   void open_account();
   void deposite_money();
   void withdraw_money();
   void display_account();
};

void bank :: open_account()
{ cout<<"\nEnter Your Name ::\n";
  cin.ignore();
  cin.getline(name,100);
  cout<<"\nEnter Your Address ::\n";
  cin.ignore();
  cin.getline(add,100);
  cout<<"\nWhat Type of Account You want to open :-\nFor saving enter (s)\nFor current enter (c)\n";
  cin>>y;
  cout<<"\nEnter Amount for Deposite ::\n";
  cin>>balance;
  cout<<"\nYour Account is created\n";
}

void bank :: deposite_money()
{ int a;
  cout<<"\nEnter how much money you deposite ::\n";
  cin>>a;
  balance+=a;
  cout<<"\ntotal amount you deposite :: \t"<<balance;
}

void bank :: display_account()
{ cout<<"\nYour Full name :: "<<name;
  cout<<"\nYour address :: "<<add;
  cout<<"\nType of account that you open :: "<<y;
  cout<<"\nAmount deposited in your account :: "<<balance;
  
 }
 
void bank :: withdraw_money()
{ float amount;
  cout<<"\nWithdraw ::\n";
  cout<<"\nEnter Amount to withdraw ::\n";
  cin>>amount;
  balance-=amount;
  cout<<"\nNow total left amount is ::\n"<<balance;
 } 
	  

int main()
{ int ch,x;
  bank obj;
  do
  {
  cout<<"\n1) Open Account\n";
  cout<<"\n2) Deposite Money\n";
  cout<<"\n3) Withdraw Money\n";
  cout<<"\n4) Display Account\n";
  cout<<"\n5) Exit\n";
  cout<<"\nselect the option from above \n";
  cin>>ch;
  switch(ch)
  {
  	case 1:
	  cout<<"\n1) open account \n";
  	 obj.open_account();
  	 break;
  	 
  	 case 2:
	   cout<<"\n2) deposite money\n";
  	 obj.deposite_money();
  	 break;
  	 
  	 case 3:
	   cout<<"\n3) withdraw money\n";
  	 obj.withdraw_money();
  	 break;
  	 
  	 case 4:
  	 	cout<<"\n4) display account\n";
  	 	obj.display_account();
  	 	break;
  	 
  	 case 5:
  	 	if(ch==5)
  	 	{ exit(1);
		   }
	default:
		cout<<"\nThis Account does not exist try again\n";
     }
		cout<<"\nDo you want to select next option then press :: Y\n";
		cout<<"\nIf you want to exit then press :: N\n";
		x=getch();
		
		if(x=='n'|| x=='N') 
		exit(0);
    }while(x=='y' || x=='Y');
  getch();
  return 0;
}
