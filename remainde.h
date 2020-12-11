#include<fstream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>

class Remainder
{
char event[100];
char date[100];
public:
void getdata()
{
cout<<"\nEnter the Name of the Event ::";
gets(event);
cout<<"\nEnter the Date              ::";
gets(date);
}
void DisplayData()
{
cout<<"\n\t\t\t>----------Result----------";
cout<<"\n Name of the Event ::";
cout<<event;
cout<<"\n\t\tDate           ::";
cout<<date;
}
char* GetDate()
	{
	return date;
	}
char* ReturnEvent()
	{
	return event;
	}
};
class SaveRemainder{
public:
void  Save(){
clrscr();
Remainder r1;
r1.getdata();
ofstream ofile("Remainder.tea",ios::binary|ios::app);
ofile.write((char *)& r1,sizeof(r1));
cout<<"\n\t Remainder Saved Successfully.........";
ofile.close();
}
};

class DisplayRemainder{
	char Date[100];
	Remainder Rem;
	public:
	void DispRemainder(){
	ifstream ifile("Remainder.tea",ios::binary|ios::in);
	cout<<"\n\t Enter the date as (dd/mm/yy) :: ";
	gets(Date);
	while(ifile){
	ifile.read((char*)&Rem,sizeof(Rem));
	if(strcmp(Rem.GetDate(),Date)==0)
	Rem.DisplayData();
	}
	ifile.close();
	}
	};
class UpdateRemainder{
public:
void Update()
{
 Remainder rem;
 fstream ffile("Remainder.tea",ios::binary|ios::in|ios::out);
 char date[100];
 long pos;
 char found='f',ch;
 cout<<"\n Enter the date of event which has to be modified  ::";
 gets(date);
 label:
 while(!ffile.eof())
 {
  pos=ffile.tellg();
  ffile.read((char*)&rem,sizeof(rem));
  if(strcmpi(rem.GetDate(),date)==0)
  {
	rem.getdata();
	ffile.seekg(pos);
	ffile.write((char*)&rem,sizeof(rem));
	found='t';
	break;
  }
 }
  if(found=='f')
  {
	cout<<"\n Record not found ";
	cout<<"\n Do you want to continue search(y/n)=";
	cin>>ch;
	if((ch=='Y')||(ch=='y'))
	 goto label;
	}
	ffile.seekg(0);

	ffile.close();
	getch();

	}
};

