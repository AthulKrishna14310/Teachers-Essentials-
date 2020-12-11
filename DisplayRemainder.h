#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<string.h>
#include<math.h>
class DisplayRemainder{
	char Date[100];
	Remainder Rem;
	public:
	void DispRemainder(){
	ifstream ifile("Reminder.tea",ios::binary|ios::in);
	cout<<"\n\t Enter the date as (dd/mm/yy) :: ";
	gets(Date);
	while(ifile){
	ifile.read((char*)&Rem,sizeof(Rem));
	if(strcmpi(Rem.GetDate(),Date)==0)
	Rem.DisplayData();
	getch();
		  }
        }
	};
void main(){
	DisplayRemainder R1;
	R1.DispRemainder();
	}