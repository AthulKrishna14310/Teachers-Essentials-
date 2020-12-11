
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<fstream.h>
#include<string.h>
class Delete{
public:
void DeleteStudent(){
Register S1;
char Ch;
ifstream fio("Student.tea",ios::in|ios::binary);
ofstream file("Temporary.dat",ios::out|ios::binary);
int Rno;
int found=0;
cout<<"\n\tEnter the RollNumber to be deleted :: ";
cin>>Rno;
while(fio){
fio.read((char*)&S1,sizeof(S1));
if(S1.GetRollNumber()==Rno)
{
	S1.DisplayRegister();
	cout<<"\n\tConfirm if you want to delete ??(y/n) __";
	cin>>Ch;
	if(Ch=='n')
	file.write((char*)&S1,sizeof(S1));
	else
	file.write((char*)&S1,sizeof(S1));
}
else
found=1;
}


remove("Student.tea");
rename("Temporary.dat","Student.tea");
cout<<"\n\t Delete Procedure Complete  ......";
getch();
fio.close();
file.close();
}
void DeleteRemainder(){
Remainder S1;
char Ch;
ifstream fio("Remainder.tea",ios::in|ios::binary);
ofstream file("Temporar.dat",ios::out|ios::binary);
char Rnoo[100];
int found=0;
cout<<"\n\tEnter the Name of Event to be deleted :: ";
gets(Rnoo);
while(fio){
fio.read((char*)&S1,sizeof(S1));
if(strcmp(Rnoo,S1.ReturnEvent())==0)
{
	S1.DisplayData();
	cout<<"\n\tConfirm if you want to delete ??(y/n) __";
	cin>>Ch;
	if(Ch=='n')
	file.write((char*)&S1,sizeof(S1));
	else
	file.write((char*)&S1,sizeof(S1));
}
else
found=1;
}
remove("Remainder.tea");
rename("Temporar.dat","Remainder.tea");
cout<<"\n\t Delete Procedure Complete  ......";
getch();
fio.close();
file.close();
}
void DeleteCollection(){
Collection S1;
char Ch;
ifstream fio("Collection.tea",ios::in|ios::binary);
ofstream file("Tempora.dat",ios::out|ios::binary);
char Rnoo[100];
int found=0;
cout<<"\n\tEnter the Name of Event to be deleted :: ";
gets(Rnoo);
while(fio){
fio.read((char*)&S1,sizeof(S1));
if(strcmp(Rnoo,S1.GetEventName())==0)
{
	S1.Show();
	cout<<"\n\tConfirm if you want to delete ??(y/n) __";
	cin>>Ch;
	if(Ch=='n')
	file.write((char*)&S1,sizeof(S1));
	else
	file.write((char*)&S1,sizeof(S1));
}
else {
found=1;
}
}

remove("Collection.tea");
rename("Tempora.dat","Collection.tea");
cout<<"\n\t Delete Procedure Complete  ......";
getch();
fio.close();
file.close();
}

void DeleteMark(){
MarkEntry S1;
char Ch;
int RollNumber;
ifstream fio("Mark.tea",ios::in|ios::binary);
ofstream file("Tempor.dat",ios::out|ios::binary);
char Rnoo[100];
int found=0;
cout<<"\n\tEnter the Name of Test to be deleted :: ";
gets(Rnoo);
cout<<"\n\tEnter the RollNumber of the Student  :: ";
cin>>RollNumber;
while(fio){
fio.read((char*)&S1,sizeof(S1));
if((strcmp(Rnoo,S1.GetTestName())==0)&&(S1.GetRollNumber()==RollNumber))
{
	cout<<"\n\tConfirm if you want to delete ??(y/n) __";
	cin>>Ch;
	if(Ch=='n')
	file.write((char*)&S1,sizeof(S1));
	else
	file.write((char*)&S1,sizeof(S1));
}
else {
found=1;
}
}

remove("Mark.tea");
rename("Tempor.dat","Mark.tea");
cout<<"\n\t Delete Procedure Complete  ......";
getch();
fio.close();
file.close();
}
};

