#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<fstream.h>
class Collection
{
  public:
 int strength,collfee,notg,fee;
 int no[100];
 char name[20],date[100];

 void Enter()
 {
  cout<<"\n Enter the Total Number of Students =";
  cin>>strength;
  cout<<"\n Enter the Event Title              =";
  gets(name);
  cout<<"\n Enter the collection fee           =";
  cin>>fee;
  cout<<"\n Enter the Number of students who have not payed the collection =";
  cin>>notg;
  cout<<"\n Enter the RollNumbers of the students who havent payed         =";
  for(int i=0;i<notg;i++)
  cin>>no[i];
  cout<<"\n Enter the Date of collection(dd/mm/yy)                         :: ";
  gets(date);
 }
 void Show()
 {
  cout<<"\n\t Collection Title              ="<<name;
  cout<<"\n\t Collection Date               =";
  cout<<date;
  cout<<"\n Total amount to be collected    ="<< strength*fee;
  cout<<"\n Amount collected                ="<< (strength - notg)*fee;
  cout<<"\n Amount to be collected          ="<<notg*fee;
  cout<<"\n The following are the RollNumbers of those students\n who havent payed the collection fee ::";
  for(int i=0;i<notg;i++)
	cout<<"\n"<<no[i];
 }
 char* GetEventName(){
	return name;}
 char* GetEventDate(){
	return date;}
};

class SaveCollection{
  public:
  void SaveCol(){
  Collection c1;
  c1.Enter();
  ofstream ofile("Collection.tea",ios::binary|ios::app);
  ofile.write((char*)&c1,sizeof(c1));
  }
};


class UpdateCollection{
public:
void UCollection(){
Collection rem;
 fstream ffile("Collection.tea",ios::binary|ios::in|ios::out);
 char Name[100];
 long pos;
 char found='f',ch;
 cout<<"\n Enter the Name of event which has to be modified  ::";
 gets(Name);
 label:
 while(!ffile.eof())
 {
  pos=ffile.tellg();
  ffile.read((char*)&rem,sizeof(rem));
  if(strcmpi(rem.GetEventName(),Name)==0)
  {
	rem.Enter();
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
	
}
};

class DisplayEventDetails{
	public:
	char Name[100];
	void DisplayEvent(){
	Collection C1;
	cout<<"\n\t..................Event Collection Page .........................";
	cout<<"\n\t Enter the Name of Event Collection :: ";
	gets(Name);
	ifstream ifile("Collection.tea",ios::in|ios::binary);
	while(ifile){
	ifile.read((char*)&C1,sizeof(C1));
	if(strcmpi(Name,C1.GetEventName())==0){
	C1.Show();
	break;
	}
	}
	}
	};


