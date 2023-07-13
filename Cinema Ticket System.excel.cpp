#include<iomanip>
#include <iostream>
#include <fstream>
#include <conio.h>
#include <string>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <process.h>
#include <time.h>
#include <string>





using namespace std;
//Class definition for ticket
class ticket{
	public:
	char name[10];
	char cno[10];
} t;
// Class definition for card
class card :  public ticket{
public:
	char address[50];
	char emailid[20];
} v;
void pay(int);
void random();
void card();
//Main function
void Create (char **Array, int R, int S);
void Reveal (char **Array, int R, int S);
char ** Seats (int R, int S);
int main(){
	system("CLS");
	int enter, a, b, n, x, cardid;
	char ans;
	do{
		cout<<"\n\t\t\t\t\t\t **********************************"<<"\n\t\t\t\t\t\t Simple Movie Ticket Booking System"<<"\n\t\t\t\t\t\t **********************************"<<"\n\t\t\t\t\t\t\tWelcome Customer!"<<"\n\n\t\t\t\t\t\t\t 1-Movie Timings"<<"\n\t\t\t\t\t\t\t 2-Recieving Ticket"<<"\n\t\t\t\t\t\t\t 3-For Information"<<"\n\t\t\t\t\t\t\t 4-DTCard Registration"<<"\n\t\t\t\t\t\t\t 5-Exit \n\n"<<"\t\t\t\t\t\t\tEnter Your Choice:"<<"\t";
        cin>>enter;
	switch(enter)
	{
			//Movie Titles
		case 1:
		system("CLS");
			cout<<"\n\n\t\t\t\tThe Shows are :"<<"\n\n\t\t\t\t 1-Extraction"<<"\n\n\t\t\t\t 2-Bad Boys for Life"<<"\n\n\t\t\t\t 3-The Crew"<<"\n\n\t\t\t\t 4-Survive the Night"<<"\n\n\t\t\t\t 5-Aladdin\n"<<"\n\t\t\t\tEnter Your Choice :"<<"\t";
            cin>>a;
			cout<<"\n\n\t\t\t\t The Timings for the selected show are:";
			switch(a)
			{
				case 1:
					system("CLS");
				 	cout<<"\n\n\t\t\t\t Select the the timings: ";
					cout<<"\n\t\t\t\t 1. 8:30 AM";
					cout<<"\n\t\t\t\t 2. 11:00 AM";
					cout<<"\n\t\t\t\t 3. 1:30 PM";
					cout<<"\n\t\t\t\t 4. 4:00 PM";
					cout<<"\n\t\t\t\t 5. 9:00 PM";
					cout<<"\n\t\t\t\t 6. 1:00 AM \n";
					cout<<"\n\n\t\t\t\t Please select the timings: ";
					cin>>b;
					cout<<"\n\n\t\t\t\t Enter your name: ";
					cin>>t.name;
					cout<<"\n\n\t\t\t\t Enter your contact number: ";
					cin>>t.cno;
					cout<<"\n\n\t\t\t\t Enter the number of tickets you want to purchase: ";
					int x;
					cin>>x;
					pay(x);
					cout<<"\n\n\n\t\t\t\t Your ticket is here: ";
					cout<<"\n\t\t\t\t Name 		:"<<t.name;
					cout<<"\n\t\t\t\t Contact No	:"<<t.cno;
					cout<<"\n\t\t\t\t Show timings 	:";
					switch(b)
						{
							case 1:	cout<<"8:30 AM";
								break;
							case 2:	cout<<"11:00 AM";
								break;
							case 3:	cout<<"1:30 PM";
								break;
							case 4:	cout<<"4:00 PM";
								break;
							case 5:	cout<<"9:00 PM";
								break;
							case 6:	cout<<"1:00 AM";
								break;
						}
						cout<<"\n\n\t\t\t\t Do you want to choose another option(y/n)";
						cin>>ans;
						system("CLS");
						break;
				case 2:
				system("CLS");
					cout<<"\n\n\t\t\t\tSelect the the timings:"<<"\n\t\t\t\t 1. 8:30 AM"<<"\n\t\t\t\t 2. 11:00 AM"<<"\n\t\t\t\t 3. 1:30 PM"<<"\n\t\t\t\t 4. 4:00 PM"<<"\n\t\t\t\t 5. 9:00 PM"<<"\n\t\t\t\t 6. 1:00 AM"<<"\n\t\t\t\t Please select the timings: ";
					cin>>b;
					cout<<"\n\n\t\t\t\t Enter your name: ";
					cin>>t.name;
					cout<<"\n\t\t\t\t Enter your contact number: ";
					cin>>t.cno;
					cout<<"\n\t\t\t\t Enter the number of tickets you want to purchase: ";
					cin>>x;
					pay(x);
					cout<<"\n\n\t\t\t\t Your ticket is here:"<<"\n\t\t\t\t Name :"<<t.name<<"\n\t\t\t\t Contact No:"<<t.cno<<"\n\t\t\t\tShow timings:";
					switch(b)
					{
							case 1:	cout<<"8:30 AM";
								break;
							case 2:	cout<<"11:00 AM";
								break;
							case 3:	cout<<"1:30 PM";
								break;
							case 4:	cout<<"4:00 PM";
								break;
							case 5:	cout<<"9:00 PM";
								break;
							case 6:	cout<<"1:00 AM";
								break;
					}
					cout<<"\n\n\t\t\t\t Do you want to choose another option(y/n)";
					cin>>ans;
					system("CLS");
					break;
				case 3:
				system("CLS");
					cout<<"\n\n\t\t\t\tSelect the the timings:";
					cout<<"\n\t\t\t\t 1. 8:30 AM";
					cout<<"\n\t\t\t\t 2. 11:00 AM";
					cout<<"\n\t\t\t\t 3. 1:30 PM";
					cout<<"\n\t\t\t\t 4. 4:00 PM";
					cout<<"\n\t\t\t\t 5. 9:00 PM";
					cout<<"\n\t\t\t\t 6. 1:00 AM";
					cout<<"\n\t\t\t\t Please select the timings";
					cin>>b;
					cout<<"\n\t\t\t\t Enter your name: ";
					cin>>t.name;
					cout<<"\n\t\t\t\t Enter your contact number: ";
					cin>>t.cno;
					cout<<"\n\t\t\t\tEnter the number of tickets you want to purchase: ";
					cin>>x;
					pay(x);
					cout<<"\n\n\t\t\t\t Your ticket is here: ";
					cout<<"\n\t\t\t\t Name 		:"<<t.name;
					cout<<"\n\t\t\t\t Contact No	:"<<t.cno;
					cout<<"\n\t\t\t\t Show timings 	:";
					switch(b)
					{
							case 1:	cout<<"8:30 AM";
								break;
							case 2:	cout<<"11:00 AM";
								break;
							case 3:	cout<<"1:30 PM";
								break;
							case 4:	cout<<"4:00 PM";
								break;
							case 5:	cout<<"9:00 PM";
								break;
							case 6:	cout<<"1:00 AM";
								break;
					}
					cout<<"\n\n\t\t\t\t Do you want to choose another option(y/n)";
					cin>>ans;
					system("CLS");
					break;
				case 4:
				system("CLS");
					cout<<"\n\n\t\t\t\tSelect the the timings: ";
					cout<<"\n\t\t\t\t 1. 8:30 AM";
					cout<<"\n\t\t\t\t 2. 11:00 AM";
					cout<<"\n\t\t\t\t 3. 1:30 PM";
					cout<<"\n\t\t\t\t 4. 4:00 PM";
					cout<<"\n\t\t\t\t 5. 9:00 PM";
					cout<<"\n\t\t\t\t 6. 1:00 AM";
					cout<<"\n\t\t\t\t Please select the timings: ";
					cin>>b;
					cout<<"\n\t\t\t\t Enter your name: ";
					cin>>t.name;
					cout<<"\n\t\t\t\t Enter your contact number: ";
					cin>>t.cno;
					cout<<"\n\t\t\t\t Enter the number of tickets you want to purchase: ";
					cin>>x;
					pay(x);
					cout<<"\n\n\t\t\t\t Your ticket is here: ";
					cout<<"\n\t\t\t\t Name 		:"<<t.name;
					cout<<"\n\t\t\t\t Contact No	:"<<t.cno;
					cout<<"\n\t\t\t\t Show timings 	:";
					switch(b)
					{
							case 1:	cout<<"8:30 AM";
								break;
							case 2:	cout<<"11:00 AM";
								break;
							case 3:	cout<<"1:30 PM";
								break;
							case 4:	cout<<"4:00 PM";
								break;
							case 5:	cout<<"9:00 PM";
								break;
							case 6:	cout<<"1:00 AM";
								break;
					}
						cout<<"\n\n\t\t\t\t Do you want to choose another option(y/n)";
						cin>>ans;
						system("CLS");
						break;
				case 5:
				system("CLS");
					cout<<"\n\n\t\t\t\tSelect the the timings:"<<"\n\t\t\t\t 1. 8:30 AM"<<"\n\t\t\t\t 2. 11:00 AM"<<"\n\t\t\t\t 3. 1:30 PM"<<"\n\t\t\t\t 4. 4:00 PM"<<"\n\t\t\t\t 5. 9:00 PM"<<"\n\t\t\t\t 6. 1:00 AM"<<"\n\t\t\t\t Please select the timings: ";
					cin>>b;
					cout<<"\n\t\t\t\t Enter your name: ";
					cin>>t.name;
					cout<<"\n\t\t\t\t Enter your contact number: ";
					cin>>t.cno;
					cout<<"\n\t\t\t\t Enter the number of tickets you want to purchase: ";
					cin>>x;
					pay(x);
					cout<<"\n \n\t\t\t\t Your ticket is here: "<<"\n\t\t\t\t Name:"<<t.name<<"\n\t\t\t\t Contact No	:"<<t.cno<<"\n\t\t\t\t Show timings:";
					switch(b)
					{
							case 1:	cout<<"8:30 AM";
								break;
							case 2:	cout<<"11:00 AM";
								break;
							case 3:	cout<<"1:30 PM";
								break;
							case 4:	cout<<"4:00 PM";
								break;
							case 5:	cout<<"9:00 PM";
								break;
							case 6:	cout<<"1:00 AM";
								break;
					}
					cout<<"\n\n\t\t\t\t Do you want to choose another option(y/n)";
					cin>>ans;
					system("CLS");
					break;
			}break;
		case 2:	system("CLS");
				cout<<"\n\nThank you for booking the tickets online \n To print out the tickets please enter your transaction ID in the portal";
				struct pre
				{
				int trsnid;
				char name[10];
				} p;
				cout<<"\nEnter your transaction id\n (Eg.last five digits of the transaction id) ";
				cin>>p.trsnid;
				cout <<"Enter your name";
				cin>>p.name;
				cout<<"Sorry to say that but you will need to get the print out of the booking because our database shows no booking by this name";
				cout<<"\n Do you want to choose another option(y/n)";
				cin>>ans;
				system("CLS");
				break;
		case 3: system("CLS");
				cout<<"For further information about movies you can download our Application(from the  Google Play Store or from the iOS App Store) or contact us at 01158971257";
				cout<<"\n Do you want to choose another option(y/n)";
				cin>>ans;
				system("CLS");
				break;
		case 4: system("CLS");
				cout<<"Good Morning/Evnening \nWelcome to start a new journey with our cinemas "<<endl;
				card();
				cout<<"Thankyou.\nIt will take us a week for completing your registration for the card. \nPlease see the benefits of the card on the next page. -->";
				char f;
				cout<<"\nFor selecting the page to go to benefits say (y/n)\n";
				cin>>f;
				if(f=='y')
				{
					cout<<"Thank you for registeration once again \n The priveleges provided with this card are as follows:";
					cout<<"\n 1. For every purchase of a movie ticket you get 25 points(1point = 1Rs.) so after 16 movies you get a free movie ticket.";
					cout<<"\n 2. You are provided with regular updates regarding the movie and the showtimings.";
					cout<<"\n 3. Anytime prebook tickets for the upcoming movie and preffered seats will be provided.";
				}
				cout<<"\n Do you want to choose another option(y/n)";
				cin>>ans;
				if(ans=='y')
				{
					system("CLS");
					break;
				}
				else
				{
					exit(0);
				}
				break;
		case 5:
		system("CLS");
		cout<<"\n\t\t\t\tBrought To You by code-projects.org\n\n\t\t\t\t";
		system("PAUSE");
		exit(0);
				break;
	}
	}while(ans=='y');
	{
    int A;
    char * B;
	char **Array;
	char Select[3],answer;
	int R= 15,NS=20,SAvailable,row,seat;
	SAvailable = R*NS;
	Array = Seats(R, NS);
	Create(Array, R, NS);
	Reveal(Array, R, NS);
	do {
		do
		{
			cout << endl<< "There are " << SAvailable << " Available, choose your seat:"<<endl<< "[Example 12S]: " << endl;
			cin >> Select;
			row = Select[0] - '1';
			if(Select[1] >= '0' && Select[1] <= '9')
			{
				row += 1;
				row *= 10;
				row += (Select[1] - '1');
				Select[1] = Select[2];
			}
			Select[1] = toupper(Select[1]);
			seat = Select[1] - 'A';
			if(row < 0 || row > R-1)
				cout << "Invalid Line!, please choose Line from 1-15. Try a different seat:" << endl;
			if(seat < 0 || seat > NS-1)
				cout << "Invalid Seat!, please choose seat from A-T. Try a different seat:" << endl;
		}
		while ( row < 0 || row > R-1 || seat < 0 || seat > NS-1);
		if(row >= 0)
		{
			if (Array[row][seat] == '-')
				cout << "You have already taken the seat you chose. Check another available seat:" <<endl;
			else
			{
				Array[row][seat] = '-';
				SAvailable--;
			}
			if(SAvailable == 0)
				cout << "All seats are taken !" << endl;
		}
		Reveal(Array, R, NS);
		do
		{
			cout << endl << "Reserve another seat? (Yes/No)" << endl;
			cin >> answer;
			answer = toupper(answer);
			if(answer != 'Y' & answer != 'N')
				cout << "Reserve another seat? (Yes/No)" << endl;
		}
		while(answer != 'Y' & answer != 'N');
		if(answer == 'N')
			row = -1;
	}
	while (SAvailable > 0 & row >= 0 );
	cout << endl << "The seat has been reserved, thank you." << endl;
	cout << endl << "Press Next to continue." << endl << endl;
	char buff[100];
	cin.getline (buff, 100);
	return 0;
}
	}
//Function Declaration for Card
void card()
{
	int cardid;
	cout<<"\t\t\t\tWelcome to register for card facility in our cinemas";
	cout<<"\n\t\t\t\t Enter your name: ";
	cin>>v.name;
	cout<<"\t\t\t\tEnter your mobile number: ";
	cin>>v.cno;
	cout<<"\t\t\t\tEnter the address: ";
	cin>>v.address;
	cout<<"\t\t\t\tEnter the mail id: ";
	cin>>v.emailid;
	system("CLS");
	int ID;
	srand (time(NULL));
	ID = rand() % 400000 + 4000000;
	if (ID<0)
	ID=(ID*-1);
	cout<<"\tYour new card number is - :" <<"\t"<<ID;
	fstream fout;
	fout.open("Database.dat", ios::out|ios::app);
	fout<<"\n Name :"<<v.name<<"\n"<<"\n Mobile No. :"<<v.cno<<"\n"<<"\n Address :"<<v.address<<"\n"<<"\n Mail ID :"<<v.emailid<<"\n"<<"\nCard Number:"<<ID;
	fout.close();
	cout<<"\t\t\t\tThank you for the registeration for the card. \n";
}
// seats reservation
void Create (char **Array, int R, int S)
{
	for (int r=0;r<R;r++)
        {
		for (int s=0;s<S;s++)
			Array[r][s] ='A' +s;
	}
}
void Reveal (char **Array, int R, int NS)
{
	for (int r=0;r<R;r++)
        {
		cout.width(2);
		cout<<r+1<< ' ';
		for (int s=0;s<NS;s++)
			cout<<Array[r][s]<<' ';
		cout<<endl;
	}
}
char **Seats (int R, int S)
{
	char **Array;
	Array = new char*[R];
	for (int r=0;r<R; r++)
		Array[r] = new char[S];
	return Array;
}
//Payment system for the interface
void pay(int a)
{
	int normal, gold, amt[2],id;
	time_t t = time(NULL);							//time setup
	tm* timePtr = localtime(&t);
	fstream fin;
	fin.open("Database.dat", ios::in|ios::app);
	fin>>id;
	cout<<"\t\tThank you for selecting the show. Now we request you to select your type of seating \n\n\t\t\t\t 1.Normal Class \n\t\t\t\t OR \n\t\t\t\t 2. Gold Class";
	int c;
	cin>>c;
	if(c==1)
	{
		cout<<"\n\n\t\t\t\tYou selected for a Normal show \n\n\t\t\t\t";
		system("PAUSE");
		system("CLS");
		amt[1] = a * 100;
		char final;
		cout<<"\n\n\t\t\t\t Do you have DTcard(y/n): ";
		cin>>final;
		if(final=='y')
		{
			int cid;
			fin.read((char*) &v, sizeof(v));

			cout<<"\n\t\t\t\tEnter the card number: ";
			cin>>cid;

			if(cid==id)
			{
				amt[1]=amt[1] - (0.1*amt[1]);
			};
		}
		cout<<"\n\t\t\t\tDo you want to pay online? (y/n): ";
		char rep;
		cin>>rep;
		cout<<"\n\t\t\t\t"<<"Paying :"<<amt[1]<<"\n";
		if (rep=='y'||rep=='Y')
		{
			char n[10];
			cout<<"\t\t\t\tName of the card holder: ";
			cin>>n;
			cout<<"\t\t\t\tEnter the card number: ";
			char Card[16];
			cin>>Card;
			cout<<"\t\t\t\tExpiry(MM):";
			int expirymm,expiryyy;
			cin>>expirymm;
			cout<<"\t\t\t\tExpiry(YYYY):";
			cin>>expiryyy;
			while(expirymm<(timePtr->tm_mon) || expiryyy<(timePtr->tm_year + 1900)){

					{
						cout<<"\t\t\t\tEnter the month again: ";
						cin>>expirymm;
					}
				if(expiryyy<(timePtr->tm_year + 1900))
				{
					cout<<"\t\t\t\tPlease enter a valid year: ";
					cin>>expiryyy;
				}
			};
			char password[3],vh;
			int h;
			puts("\t\t\t\tEnter the CVV/CVV2: ");
			while (1)
			{
				if (h<0)
					h=0;
				vh=getch();
				if (vh==13)
					break;
				if (vh==8)
				{
					putch(NULL);
					putch(NULL);
					putch(NULL);
					h--;
					continue;
				}
				password[h++]=vh;
				vh='*';
				putch(vh);
			};
			password[h]=='\0';
		}
	}
	else
	{
		cout<<"\n\n\t\t\t\tYou selected for the Gold Class \n\t\t\t\t";
			system("PAUSE");
		system("CLS");
		amt[2] = a * 700;
		char final;
		cout<<"\n\t\t\t\tDo you have DTcard(y/n): ";
		cin>>final;
		if(final=='y')
		{
			int cid;
			cout<<"\n\t\t\t\tEnter the card id number: ";
			cin>>cid;
			if(cid==id)
			{
				amt[1]=amt[1] - (0.1*amt[1]);
			};
		}
		cout<<"\n\t\t\t\tDo you want to pay online? (y/n): ";
		char rep;
		cin>>rep;
		cout<<"\n\t\t\t\t"<<"Paying :"<<amt[2]<<"\n";
		if (rep=='y'||rep=='Y')
		{
			cout<<"\t\t\t\tName of the card holder: ";
			char n[10];
			cin>>n;
			cout<<"\n\t\t\t\tEnter the card number: ";
			char Card[16];
			cin>>Card;
			cout<<"\n\t\t\t\tExpiry(MM): ";
			int expirymm, expiryyy;
			cin>>expirymm;
			cout<<"\n\t\t\t\tExpiry(YYYY): ";
			cin>>expiryyy;
			while(expirymm<(timePtr->tm_mon) || expiryyy<(timePtr->tm_year + 1900)){
				if(expirymm<=(timePtr->tm_mon))
					{
						cout<<"\n\t\t\t\tEnter the month again: ";
						cin>>expirymm;
					}
				if(expiryyy<(timePtr->tm_year + 1900))
				{
					cout<<"\n\t\t\t\tPlease enter a valid year: ";
					cin>>expiryyy;
				}
			};
			char password[3],vh;
			int h;
			puts("\t\t\t\tEnter the CVV/CVV2: ");
			while (1)
			{
				if (h<0)
					h=0;
				vh=getch();
				if (vh==13)
					break;
				if (vh==8)
				{
					putch(NULL);
					putch(NULL);
					putch(NULL);
					h--;
					continue;
				}
				password[h++]=vh;
				vh='*';
				putch(vh);
			};
			password[h]=='\0';
			}
	};
}
